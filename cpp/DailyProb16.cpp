/*83. Remove Duplicates from Sorted List*/


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* prev = head;
        ListNode* current = head->next;
        
        while(current != nullptr){
            if(current->val == prev->val){
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
            else { 
                current = current->next;
                prev = prev->next;
                }
        }
        return head;
    }
};