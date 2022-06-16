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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
     LinkedListNode<int>* prevpt=NULL;
        LinkedListNode<int>* currpt=head;
        LinkedListNode<int>* nextpt;
        
        while(currpt!=NULL){
            nextpt=currpt->next;
            currpt->next=prevpt;
            prevpt=currpt;
            currpt=nextpt;
        }
        
        return prevpt;
    
}
