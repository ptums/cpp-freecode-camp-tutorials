#include <iostream>
using namespace std;

class Node {
public:
    int  value;
    Node* next;
};

void printList(Node* n)
{
    while(n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}

void insertAtTheFront(Node **head, int nValue)
{
    // 1. Prepare a new node -- we need a new node to put in the front
    Node* nNode = new Node();
    nNode->value = nValue;

    // 2. put it in front of a current head -- now we take that new node address and
    // make it the head address of the node being passed into the function
    nNode->next = *head;

    // 3. move head of the list to point to new node
    *head = nNode;
}

void insertAtTheEnd(Node** head, int nValue)
{

    // 1. prepare a new node - we create a new node and set the address to null
    // because that indicates it belongs at the end of the linked list

    Node* nNode = new Node();
    nNode->value = nValue;
    nNode->next = NULL;

    // 2. if linked list is empty, new node will be a head node
    if(*head == NULL)
    {
        // setting the new node to be the only node
        // in the linked list
        *head = nNode;

        // end it
        return;
    }

    // 3. find the last node

    // create a value that will temporary hold
    // the value of the last node
    Node* last = *head;

    // while the *head->next is not at the end...
    while(last->next != NULL)
    {
        // update the last var to be *head of the current next value
        last = last->next;
    }

    // 4. insert new node after the last node (at the end)
    // take that value and set equal nNode
    last->next = nNode;

}

void insertAfter(Node* previous, int nValue)
{
    // 1. Check if previous node is NULL
    if(previous == NULL)
    {
        cout << "Previous cannot be null" << endl;
        return;
    }

    // 2. Prepare a new Node -- this is the one well be entering after a and it'll point to b.
    Node* nNode = new Node();
    nNode->value = nValue;

    // 3. Insert new node after preview

    // setting the address of the new node
    // to the address of the previous node
    nNode->next = previous->next;

    // to the value of address of the previous node
    // and set it to new node
    previous->next = nNode;

    // You have node a and node b and node a is point to node b.
    // and you have to take your new node and point it after a

    // node a needs to point to new node and new node needs to point to b node
}

int main() {
    // linked list are randomly positioned in memory
    // each node in a linked list stores the value
    // and the address (pointer) of the next value


    // pro: arrays have fixed size & linked list are dynamic
    // since they are stored non-continuously linked lists can be endless

    // con: random access to a linked list is not allowed, because the node
    // is randomly stored in memory

    // con: linked lists need more memory.

    // creating the start of the linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // assigning values to nodes
    head->value = 1;
    second->value = 2;
    third->value =3;


    // adding the address to the next value in linked list
    head->next = second;
    second->next = third;
    third->next = NULL;



    // how do you insert an element into a linked list... in the front of the list.
    // & = address of the pointer (will give the place in memory)
    //  insertAtTheFront(&head, -1);
    //  insertAtTheFront(&head, -2);
    //  printList(head);

    // how do you insert an element into a linked list... in the end of the list.
//    insertAtTheEnd(&head, 5);
//    printList(head);


    // how do you insert an element into a linked list... after a specific node.
    insertAfter(head, 77);
    insertAfter(second, 100);
    printList(head);
    cout << " " << endl;
    printList(second);




    return 0;
}
