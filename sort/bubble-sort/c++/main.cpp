#include <iostream>

using namespace std;
///use to change place of variables
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int *array, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main()
{
    int a[7] = {23, 3, 1, 89, 10, 2, 0};
    cout << "unSorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
    bubbleSort(a, 7);
    cout << "sorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
}