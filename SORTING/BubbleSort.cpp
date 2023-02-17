#include <iostream>
using namespace std;

class BubbleSort
{
    int array[5];

    public:

    void displayArray()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << array[i] << " ";
        }
    }

    void scan()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> array[i];
        }
    }

    void bubbleSortArray()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
};

int main()
{
    BubbleSort bubbleSort;
    cout << "ENTER AN UNSORTED ARRAY" << endl;
    bubbleSort.scan();
    bubbleSort.bubbleSortArray();
    cout << "SORTED ARRAY IS" << endl;
    bubbleSort.displayArray();

    return 0;
}