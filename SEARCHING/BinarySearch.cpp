#include <iostream>
using namespace std;

class BinarySearch
{
    int arr[10];

    public:

    void scanArray()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }

    void useBinarySearchOn(int valueToBeSearched)
    {
        int beginning = 0, middle = 0, end = 4;

        while (beginning < end)
        {
            middle = (beginning + end) / 2;

            if (arr[middle] == valueToBeSearched)
            {
                cout << "ELEMENT IS FOUND" << endl;
                break;
            }
            
            else
            {
                if (valueToBeSearched > arr[middle])
                {
                    beginning = middle + 1;
                }
                
                else if (valueToBeSearched < arr[middle])
                {
                    end = middle - 1;
                }
            }
        }
        
        if (arr[middle] != valueToBeSearched)
        {
            cout << "ELEMENT NOT FOUND" << endl;
        }
    }
};

int main()
{
    BinarySearch binarySearch;
    cout<< "ENTER THE ELEMENTS FOR ARRAY" << endl;
    binarySearch.scanArray();
    binarySearch.useBinarySearchOn(4);
}