#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(head==NULL)
        return NULL;
    LinkedListNode<int> *h1 = head, *h, *temp;
    while(h1!=NULL){
        LinkedListNode<int> *h2 = new LinkedListNode<int>(h1->data);
        h2->next = h1->next;
        h1->next = h2;
        h1 = h1->next->next;
    }
    h1 = head; h = h1->next;
    while(h1!=NULL){
        h1->next->random = (h1->random==NULL)?NULL:h1->random->next;
        h1 = h1->next->next;
    }
    while(head->next->next!=NULL){
        temp = head->next;
        head->next = head->next->next;
        temp->next = head->next->next;
        head=head->next;
    }
    head->next = NULL;
    return h;
}
