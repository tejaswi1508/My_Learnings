Node* segregate(Node *head) {
    
    // Add code here
    if (!head) return head;  // Handle empty list case

    Node* zeroHead = nullptr;
    Node* onesHead = nullptr;
    Node* twosHead = nullptr;
    Node* zeroTail = nullptr;
    Node* onesTail = nullptr;
    Node* twosTail = nullptr;

    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == 0) {
            if (!zeroHead) {
                zeroHead = zeroTail = temp;
            } else {
                zeroTail->next = temp;
                zeroTail = zeroTail->next;
            }
        } else if (temp->data == 1) {
            if (!onesHead) {
                onesHead = onesTail = temp;
            } else {
                onesTail->next = temp;
                onesTail = onesTail->next;
            }
        } else if (temp->data == 2) {
            if (!twosHead) {
                twosHead = twosTail = temp;
            } else {
                twosTail->next = temp;
                twosTail = twosTail->next;
            }
        }
        temp = temp->next;
    }

    // End the lists properly
    if (twosTail != nullptr) {
        twosTail->next = nullptr;
    }
    if (onesTail != nullptr) {
        onesTail->next = twosHead;
    }
    if (zeroTail != nullptr) {
        zeroTail->next = onesHead ? onesHead : twosHead;
    }

    // Determine the new head
    if (zeroHead != nullptr) {
        return zeroHead;
    } else if (onesHead != nullptr) {
        return onesHead;
    } else {
        return twosHead;
    }
    
}
