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

Node *findMiddle(Node *head) {
    // Write your code here
     Node* temp=head;
        int count=0;
        int val=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        count=count/2;
        temp=head;
        while(val<count){
            temp=temp->next;
            val++;
        }
        return temp;
}
