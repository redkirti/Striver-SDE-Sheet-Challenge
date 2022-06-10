#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    Node* d1 = firstHead;
    Node* d2 = secondHead;
    
    while(d1 != d2) {
        d1 = d1 == NULL? secondHead:d1->next;
        d2 = d2 == NULL? firstHead:d2->next;
    }
    if(d1==NULL) return -1;//Not Found
    return d1->data;
}