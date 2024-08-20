/*203. Remove Linked List Elements*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp2 = head;
            head = head->next;
            delete temp2;
        }

        if(head==nullptr) return head;

        ListNode* temp = head->next;
        ListNode* prev = head;

        while(temp != nullptr){

            if(temp->val == val){
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else{
                temp = temp->next;
                prev = prev->next;
            }
        }
        return head;
    }
};