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
    // Write your code here.
    if(K==0)return head;
    if(head->next==NULL)return NULL;
    int k=0;
    LinkedListNode<int>* t1=head;
    while(t1!=NULL){
        k++;
        t1=t1->next;
    }
    k=k-K;
    if(k==0){
        LinkedListNode<int>* to_delete=head;
        head=head->next;
        delete to_delete;
        return head;
    }

    int i=1;
    t1=head;
    while(i<k){
        t1=t1->next;
        i++;
    }
    LinkedListNode<int>* to_delete=t1->next;
    t1->next=t1->next->next;
    delete to_delete;
    return head;
}
