#include <iostream>

using namespace std;

void insertionSort(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        int j = i;
        while (j > 0 && array[j] < array[j - 1])
        {
            swap(array[j], array[j - 1]);
            j--;
        }
    }
}

int main()
{
    int a[7] = {34, 23, 1, 2, 85, 70, 100};
    cout << "unSorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
    insertionSort(a, 7);
    cout << "sorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
}