// Circular Queue

#include <iostream>
using namespace std;

int main()
{
    // Circular Queue
    int n;
    cout << "Enter the size of the queue: ";
    cin >> n;
    int queue[n];
    int front = -1;
    int rear = -1;
    int choice;

    while (choice != 4)
    {
        cout << "1. Insert an element in the queue" << endl;
        cout << "2. Delete an element from the queue" << endl;
        cout << "3. Display the queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if ((rear + 1) % n == front)
            {
                cout << "Queue Overflow" << endl;
            }
            else
            {
                int x;
                cout << "Enter the element to be inserted: ";
                cin >> x;
                if (front == -1 && rear == -1)
                {
                    front = 0;
                    rear = 0;
                }
                else
                {
                    rear = (rear + 1) % n;
                }
                queue[rear] = x;
            }
            break;
        case 2:
            if (front == -1 && rear == -1)
            {
                cout << "Queue Underflow" << endl;
            }
            else
            {
                cout << "The deleted element is: " << queue[front] << endl;
                if (front == rear)
                {
                    front = -1;
                    rear = -1;
                }
                else
                {
                    front = (front + 1) % n;
                }
            }
            break;
        case 3:
            if (front == -1 && rear == -1)
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "The elements of the queue are: ";
                int i = front;
                while (i != rear)
                {
                    cout << queue[i] << " ";
                    i = (i + 1) % n;
                }
                cout << queue[rear] << endl;
            }
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    }
}