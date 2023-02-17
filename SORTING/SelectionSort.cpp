#include <iostream>
using namespace std;

class SelectionSort
{
    int array[5];

    public:

    void scan()
    {
        cout << "ENTER THE ARRAY" << endl;

        for (int i = 0; i < 5; i++)
        {
            cin >> array[i];
        }
    }

    void selectionSort()
    {
        for (int i = 0; i < 5; i++)
        {
            int index = i;
            int minimum = array[i];

            for (int j = i; j < 5 - i; j++)
            {
                if (minimum > array[j])
                {
                    minimum = array[j];
                    index = j;
                }    
            }

            array[index] = array[i];
            array[i] = minimum;
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
    SelectionSort selectionSort;
    selectionSort.scan();
    selectionSort.selectionSort();
    selectionSort.displayArray();
}