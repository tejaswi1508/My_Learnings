class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* temp = head;
        for(int i=0;i<n;i++){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};