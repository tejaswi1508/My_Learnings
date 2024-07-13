class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        ListNode* evenHead = nullptr;
        ListNode* oddHead = nullptr;
        ListNode* evenTail = nullptr;
        ListNode* oddTail = nullptr;

        while(temp!=NULL){
            if(temp->val %2 == 0){
                if(evenHead==nullptr){
                    evenHead = evenTail = temp;
                }
                else{
                    evenTail->next = temp;
                    evenTail = evenTail->next;
                }
            }
            else{
                if(oddHead==nullptr){
                    oddHead = oddTail = temp;
                }
                else{
                    oddTail->next = temp;
                    oddTail = oddTail->next;
                }
            }
            temp = temp->next;
        }
        if(evenHead == nullptr) return oddHead;
        else if (oddHead == nullptr) return evenHead;

        evenTail->next = nullptr;
        oddTail->next = evenHead;
        return oddHead;
    }
};