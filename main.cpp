//Basic Selection Sort
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array[] = {5, 8, 3, 6, 9, 4, 2};
    int size = 7;

    int startScan, minIndex, minValue;
    for (startScan =0;startScan < size-1;startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }

    for (int i=0;i<size;i++)
    {
    	cout << array[i] << endl;
    }

    return 0;
}
