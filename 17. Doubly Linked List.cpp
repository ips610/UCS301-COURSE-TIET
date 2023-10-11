#include <iostream>
using namespace std;

class Node{
    
    public:

        Node *prev;
        int data;
        Node *next;

        Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    temp->prev = NULL;
    temp->next->prev = temp;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeleteAllNodes(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *toBeDeleted = temp;
        temp = temp->next;
        delete toBeDeleted;
    }

    cout << "Deleted All Nodes" << endl;
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 110);
    print(head);
    InsertAtHead(head, 120323);
    print(head);

    DeleteAllNodes(head);
}