#include <iostream>
using namespace std;

class StackOperation
{
    int arr[5];
    int top;

    public:

    StackOperation()
    {
        top = 0;
    }

    void push(int pushedValue)
    {
        if ((isFull()) == 1)
        {
            cout << "STACK IS FULL" << endl;
        }
        
        else
        {
            arr[top] = pushedValue;
            top++;
        }
    }

    void pop()
    {
        if ((isEmpyty()) == 1)
        {
            cout << "STACK IS EMPTY" << endl;
        }
        
        else
        {
            top--;
        }
    }

    int isFull()
    {
        if (top == 5)
        return 1;

        else
        return 0;
    }

    int isEmpyty()
    {
        if (top == 0)
        return 1;

        else
        return 0;
    }
    
    int pick()
    {
        if ((isEmpyty()) == 1)
        {
            cout << "STACK IS EMPTY, CANNOT PICK!" << endl;
            return 0;
        }

        else
        return arr[top - 1];
    }

    void display()
    {
        if ((isEmpyty()) == 1)
        {
            cout << "STACK IS EMPTY, NOTHING TO DISPLAY!" << endl;
        }

        else
        {
            cout << "STACK IS:" << endl;
            for (int i = top - 1; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }      
    }
};

int main()
{
    StackOperation stackCaller;
    int pickedValue = stackCaller.pick();
    cout << "PICKED VALUE: " << pickedValue << endl;
    stackCaller.display();
    
    return 0;
}