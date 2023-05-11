Reverse a Linked List
Problem Statement: Given the head of a singly linked list, write a program to reverse the linked list, and return the head pointer to the reversed list.

Examples:

Input Format: 
head = [3,6,8,10]
This means the given linked list is 3->6->8->10 with head pointer at node 3.

Result:
Output = [10,6,8,3]
This means, after reversal, the list should be 10->6->8->3 with the head pointer at node 10.


Solution:
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *reverseList(Node *head)
{
    Node *previous=NULL;
    Node *current=head;
    Node *next;
    while(current)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
        next++;
    }
    return previous;
}
void printList(Node *head)
{
    Node *a=head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }
}
int main()
{
    Node *head=new Node(3);
    head->next=new Node(6);
    head->next->next=new Node(8);
    head->next->next->next=new Node(10);
    cout<<"Linked list before reversing:";
    printList(head);
    head=reverseList(head);
    cout<<endl;
    cout<<"Linked list after reversing:";
    printList(head);
    return 0;
}


LOGIC:
We will use three different pointers, one to keep track of the current node, one for the next of the current node and one for the previous of the current node. In every iteration, we will first assign the next node as the current's next node so that when we change the current node's next, we don't lose the track of the rest of the linked list.

We then will change the current node's next to the current node's previous, as when we reverse the linked list, we are basically just exchanging the previous and the next nodes with one another.

After exchanging, we then make our previous equal to the current and the current equal to the next to now switch for the next nodes.