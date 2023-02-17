#include <iostream>
using namespace std;

class LinearQueue
{
    int arr[5];
    int front;
    int rear;

    public:

    LinearQueue()
    {
        front = 0;
        rear = 0;
    }

    void insert(int insertedValue)
    {
        if ((isFull()) == 1)
        {
            cout << "QUEUE IS FULL" << endl;
        }
        
        else
        {
            arr[rear] = insertedValue;
            rear++;
        }
    }

    void deleteElement()
    {
        if ((isEmpyty()) == 1)
        {
            cout << "QUEUE IS EMPTY" << endl;
        }
        
        else
        {
            front++;
        }
    }

    int isFull()
    {
        if (rear == 5)
        return 1;

        else
        return 0;
    }

    int isEmpyty()
    {
        if (front == rear)
        return 1;

        else
        return 0;
    }

    void display()
    {
        if ((isEmpyty()) == 1)
        {
            cout << "QUEUE IS EMPTY, NOTHING TO DISPLAY!" << endl;
        }

        else
        {
            cout << "STACK IS:" << endl;
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << endl;
            }
        }      
    }
};

int main()
{
    LinearQueue queueCaller;
    queueCaller.insert(10);
    queueCaller.insert(10);
    queueCaller.insert(10);
    queueCaller.insert(10);
    queueCaller.insert(10);
    queueCaller.deleteElement();
    queueCaller.deleteElement();
    queueCaller.deleteElement();
    queueCaller.deleteElement();
    queueCaller.deleteElement();
    queueCaller.display();

    return 0;
}