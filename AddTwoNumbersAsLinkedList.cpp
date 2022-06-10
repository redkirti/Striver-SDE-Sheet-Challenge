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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *head3 = NULL, *head = head3;
    int s=0,r=0;
    while(head1!=NULL && head2!=NULL){
        s = head1->data+head2->data+r;
        head1 = head1->next;
        head2 = head2->next;
        if(s>9) r = 1;
        else r = 0;
        Node *temp = new Node(s%10);
        if(head3==NULL){
            head3 = temp;
            head=head3;
        }
        else{
            head3->next = temp;
            head3 = head3->next;
        }
    }
    while(head1!=NULL){
        s = head1->data+r;
        if(s>9) r = 1;
        else r = 0;
        Node *temp = new Node(s%10);
        if(head3==NULL){
            head3 = temp;
            head=head3;
        }
        else{
            head3->next = temp;
            head3 = head3->next;
        }
        head1=head1->next;
    }
    while(head2!=NULL){
        s = head2->data+r;
        if(s>9) r = 1;
        else r = 0;
        Node *temp = new Node(s%10);
        if(head3==NULL){
            head3 = temp;
            head=head3;
        }
        else{
            head3->next = temp;
            head3 = head3->next;
        }
        head2=head2->next;
    }
    if(r==1){
        Node *temp = new Node(1);
        head3->next = temp;
    }
    return head;
}