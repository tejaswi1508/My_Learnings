//Insert at head
void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val,head);
    head = newNode;
}

//Insert at tail
Node* insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == nullptr) return newNode;

    while(temp->next!=nullptr){
        temp = temp ->next;
    }
    temp->next = newNode;
    return head;
}

//Length of the linkedlist
int LengthOfLL(Node* &head){
    int count=0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};
int main() {
    vector<int> arr = {2, 5, 8, 7};
    // Create a Node 'x' with the first element of the vector and a null next reference
    Node x = Node(arr[0], nullptr);
    // Create a pointer 'y' pointing to the Node 'x'
    Node* y = &x;
    // Print the memory address of the Node 'x' using the pointer 'y'
    cout << y << '\n';
}