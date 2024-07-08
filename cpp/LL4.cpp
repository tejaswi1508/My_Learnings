class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        Node* temp = head;
        int cnt=0;
        while(temp){
            temp = temp->next;
            cnt++;
        }
        // Code here
        return cnt;
    }
};