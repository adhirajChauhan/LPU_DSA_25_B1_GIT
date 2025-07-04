#include<iostream>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        n -> next = n;
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    n ->next = head;
    temp->next = n;
}

void insertAtBeginning(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtPosition(Node* &head, int pos, int val){

    Node* n = new Node(val);
    Node* temp = head;

    for(int i = 0; i < pos -1; i++){
        temp = temp->next;
    }
    n->next = temp ->next;
    temp->next = n;
}

void printList(Node* head){
    if(head == NULL){
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    while(temp != head);
    cout << "back to head\n";
}

int main()
{
    Node* head = NULL;
    insertAtEnd(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 15);
    printList(head);

}