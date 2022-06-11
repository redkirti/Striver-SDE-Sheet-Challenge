#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *h1 = head, *h2 = head;
    int n = 0;
    while(h1!=NULL){
        n++;
        h1 = h1->next;
    }
    int t = n/2;
    t = (n&1)?t+=1:t;
    while(t--) h2 = h2->next;
    LinkedListNode<int> *curr = h2, *prev = NULL, *temp;
    while(curr!=NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    int c = 0;
    while(c<n/2){
        c++;
        if(head->data!=prev->data)
            return false;
        head = head->next;
        prev = prev->next;
    }
    return true;
}