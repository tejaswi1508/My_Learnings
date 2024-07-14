class Solution
{
    public:
    Node* reverse(Node * head){
        if(head==NULL || head->next==NULL){
            return head;
        }
            Node * newNode = reverse(head->next);
            Node * front = head->next;
            front->next = head;
            head->next = NULL;
            return newNode;
        
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node * ptr = reverse(head);
        Node * save = ptr;
        Node * prev;
        while(ptr!=NULL){
            if(ptr->data+1 >= 10){
                ptr->data = 0;
                prev = ptr;
                ptr=ptr->next;
            }
            else{
                ptr->data = ptr->data +1;
                break;
            }
        }
        if(ptr==NULL)
        prev->next = new Node(1);
        
        return reverse(save);
    }
};