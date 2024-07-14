/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.*/
class Solution {
public:
    int lenOfLL(ListNode* head){
        ListNode* temp = head;
        int cnt=0;
        while(temp){
            cnt+=1;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int n = lenOfLL(head);
        int x;
        if(n%2==0) x = n/2;
        else x = (n-1)/2;

        ListNode* temp = head;
        for(int i=0;i<x;i++){
            temp = temp->next;
        }
        ListNode* head1 = temp;
        return head1;
        
    }
};