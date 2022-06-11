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

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	Node *h = head, *prev = NULL, *curr = head, *temp;
    queue<Node*> q;
    int count;
    if(head==NULL || head->next==NULL)
        return head;
    for(int i=0; i<n; i++){
        if(b[i]==0) continue;
        prev = NULL; count = 0;
        while(curr!=NULL && count!=b[i]){
            if(prev==NULL)
                q.push(curr);
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }
        if(i==0)
            h = prev;
        else{
            Node *t = q.front();
            q.pop();
            t->next = prev;
        }
        if(curr==NULL) break;
    }
    if(!q.empty()){
        Node *t = q.front();
        t->next = curr;
    }
    return h;
}