#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
};

void printList(Node* myNode) {
  while (myNode != NULL) {
    cout << myNode->value << "\n\n";
    myNode = myNode->next;
  }

}

int main()
{
    cout << "\n\n Welcome to my Linked List !\n\n" << endl;

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;

    // Print the list.
    printList(head);

    // Use a loop to create a linked list of ten nodes.

    // Remember these steps:
    // 1) Create a new node
    // 2) fill the new node's data fields
    // 3) attach the new node to the end of the list
    // 4) reposition list pointers

    // Set up my linked list.

    // Create the head of the list
    Node* pHead;
    // Create a helper pointer named current
    Node* pCurrent;
    // Create a helper pointer named next
    Node* pNext;

    // Create a new node.
    pHead = new Node();

    pHead->value = 1;

    // Create a second node
    pCurrent = new Node();
    pCurrent->value = 2;

    pHead->next = pCurrent;

    // end the list
    pCurrent->next = NULL;

    // print the list
    printList(pHead);









    for (int i=0; i < 10; i++) {




    }



    return 0;
}
