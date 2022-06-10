#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL)
        return second;
    if(second==NULL)
        return first;
    Node<int> *ans, *temp;
    if(first->data > second->data){
        temp = first;
        first = second;
        second = temp;
    }
    ans = first;
    while(first->next!=NULL){
        if(first->next->data>second->data){
            temp = first->next;
            first->next = second;
            second = temp;
        }
        first = first->next;
    }
    if(first->next==NULL)
        first->next = second;
    return ans;
}
