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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(head==NULL || K==0)
        return head;
    LinkedListNode<int> *pt1 = head, *pt2 = NULL;
    int count = 1;
    while(pt1->next!=NULL){
        pt1=pt1->next;
        count++;
        if(count==K+1)
            pt2 = head;
        if(count>K+1)
            pt2 = pt2->next;
    }
    if(pt2==NULL)
        return head->next;
    pt2->next = pt2->next->next;
    return head;
}