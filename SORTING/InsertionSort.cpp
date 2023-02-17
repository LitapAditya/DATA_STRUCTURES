#include <iostream>
using namespace std;

class InsertionSort
{
    int array[5];

    public:

    void insertionSort()
    {
        int element = 0;
        int count = 5;
        cout << "ENTER THE ELEMENTS OF THE ARRAY" << endl;

        while (count != 0)
        {
            cin >> element;

            if (count == 5)
            {
                array[0] = element;
            }    

            else
            {
                for (int i = 5 - count - 1; i >= 0; i--)
                {
                    if (element > array[i])
                    {
                        array[i + 1] = element;
                        break;
                    }

                    else
                    {
                        array[i + 1] = array[i];
                        array[i] = element;
                    }
                }
            }
            count--;
        }
    }

    void displayArray()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    InsertionSort insertionSort;
    insertionSort.insertionSort();
    insertionSort.displayArray();
}