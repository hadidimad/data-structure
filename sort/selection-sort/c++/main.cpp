#include <iostream>

using namespace std;

void selectionSort(int *array, int length)
{
    int min;
    for (int j = 0; j < length - 1; j++)
    {
        min = j;
        for (int i = j; i < length; i++)
        {
            if (array[min] > array[i])
            {
                min = i;
            }
        }
        swap(array[min], array[j]);
    }
}

int main()
{
    int a[7]={34,23,1,2,85,70,100};
    cout << "unSorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
    selectionSort(a,7);
    cout << "sorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
}