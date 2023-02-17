#include <iostream>
using namespace std;

class CircularQueue
{
    int arr[5];
    int front;
    int rear;
    int count;

    public:

    CircularQueue()
    {
        front = 0;
        rear = 0;
        count = 0;
    }

    int isEmpty()
    {
        if (count == 0)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }

    int isFull()
    {
        if (count == 5)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }

    void insertElement(int element)
    {
        if (isFull() == 1)
        {
            cout << "QUEUE IS FULL" << endl;
        }
        
        else
        {
            arr[rear] = element;
            rear++;
            rear = rear % 5;
            count++;
        }
    }

    void deleteElement()
    {
        if (isEmpty() == 1)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }
        
        else
        {
            front++;
            front = front % 5;
            count--;
        }
    }

    void display()
    {
        if (isEmpty() == 1)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }
        
        if ((rear > front))
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
        }

        else if (rear == 0 && isFull() == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << " ";
            }
        }

        else if (rear <= front)
        {
            for (int i = front; i < 5; i++)
            {
                cout << arr[i] << " ";
            }

            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << " ";
            } 
        }
    }
};

int main()
{
    CircularQueue circularQueue;
    circularQueue.insertElement(10);
    circularQueue.insertElement(20);
    circularQueue.insertElement(30);
    circularQueue.insertElement(40);
    circularQueue.insertElement(50);
    circularQueue.deleteElement();
    circularQueue.deleteElement();
    circularQueue.deleteElement();
    circularQueue.deleteElement();
    circularQueue.insertElement(10);
    circularQueue.insertElement(20);
    circularQueue.insertElement(30);
    circularQueue.insertElement(40);
    circularQueue.display();
}