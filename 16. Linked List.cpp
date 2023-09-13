// Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertAtHead(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            return;
        }
        else
        {
            Node *temp = new Node(data);
            temp->next = head;
            head = temp;
        }
    }

    void deleteAll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *toBeDeleted = temp;
            temp = temp->next;
            delete toBeDeleted;
        }

        delete head;
    }
};
int main()
{
    LinkedList l;
    l.insertAtHead(5);
    l.deleteAll();
    return 0;
}