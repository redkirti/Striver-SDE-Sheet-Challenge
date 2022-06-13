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

Node *firstNode(Node *head)
{
    if(head==NULL || head->next==NULL)
        return NULL;
	Node *slow = head, *fast = head;
    bool flag = false;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            flag = true;
            break;
        }
    }
    if(!flag)
        return NULL;
//     return NULL;
    else{
        while(head!=NULL){
            Node *temp = slow->next;
            //cout<<"\nYo"<<slow->data<<"\n";
            while(temp!=slow){
                //cout<<temp->data<<" ";
                if(temp == head)
                    return head;
                temp = temp->next;
            }
            if(temp == head)
                return head;
            head = head->next;
        }
        return head;
    }
}