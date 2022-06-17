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

Node<int>* sortTwoLists(Node<int>* list1, Node<int>* list2)
{
    // Write your code here.
    if(list1==NULL)return list2;
        else if(list2==NULL)return list1;
        Node<int>* t1=list1;
        Node<int>* t2=list2;
        Node<int>* res;
        
        if(t1->data<=t2->data){
            res=t1;
            t1=t1->next;
        }
        else{
            res=t2;
            t2=t2->next;
        }
        
        Node<int>* ans=res;
        while(t1!=NULL && t2!=NULL){
             if(t1->data<=t2->data){
                res->next=t1;
                t1=t1->next;
                res=res->next;
            }
            else if(t2->data < t1->data){
                res->next=t2;
                t2=t2->next;
                res=res->next;
            }
        }
        while(t1!=NULL){
            res->next=t1;
            t1=t1->next;
            res=res->next;
        }
        while(t2!=NULL){
            res->next=t2;
            t2=t2->next;
            res=res->next;
        }
        
        return ans;
}
