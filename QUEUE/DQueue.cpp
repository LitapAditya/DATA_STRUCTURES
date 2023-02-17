#include <iostream>
using namespace std;

class DQueue
{
    int arr[5];
    int front;
    int rear;

    public:

    DQueue()
    {
        front = 0;
        rear = 0;
    }

    int isFull()
    {
        if (front == 0 && rear == 5)
        {
            return 1;
        }

        else
        {
            return 0;
        }
        
    }

    int isEmpty()
    {
        if (front == rear)
        {
            return 1;
        }
        
        else
        {
            return 0;
        }
    }

    void insertionThroughRear(int number)
    {
        if (isFull() == 1)
        {
            cout << "QUEUE IS FULL" << endl;
        }

        else
        {
            arr[rear] = number;
            rear++;
        }
    }

    void deletionThroughRear()
    {
        if (isEmpty() == 1)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }

        else
        {
            rear--;
        }
    }

    void insertionThroughFront(int number)
    {
        if (isFull() == 1)
        {
            cout << "QUEUE IS FULL" << endl;
        }
        
        else
        {
            front--;
            arr[front] = number;
        }
    }

    void deletionThroughFront()
    {
        if (isEmpty() == 1)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }

        else
        {
            front++;
        }
    }

    void display()
    {
        if (isEmpty() == 1)
            {
                cout << "QUEUE IS EMPTY" << endl;
            }

        else
        {
            for (int i = front; i < rear ; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};

int main()
{
    DQueue dQueue;
    dQueue.insertionThroughRear(10);
    dQueue.insertionThroughRear(20);
    dQueue.insertionThroughRear(30);
    dQueue.insertionThroughRear(40);
    dQueue.insertionThroughRear(50);
    dQueue.deletionThroughFront();
    dQueue.deletionThroughFront();
    dQueue.deletionThroughFront();
    dQueue.deletionThroughFront();
    dQueue.deletionThroughFront();
    dQueue.insertionThroughFront(60);
    dQueue.insertionThroughFront(50);
    dQueue.insertionThroughFront(40);
    dQueue.insertionThroughFront(30);
    dQueue.insertionThroughFront(20);
    dQueue.insertionThroughFront(10);
    dQueue.display();
}