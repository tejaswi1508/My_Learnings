struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1; i < arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};