#include <iostream>

using namespace std;

int quickSort_partition(int *array,int p,int q)
{
    int x=array[p];
    int i=p;
    for(int j=p+1;j <= q;j++)
    {
        if(array[j] <= x)
        {
            i++;
            swap(array[i],array[j]);
        }
    }
    swap(array[i],array[p]);
    return i;
}

void quickSort(int *array,int p,int r)
{
    int q;
    if(p < r)
    {
        q=quickSort_partition(array,p,r);
        quickSort(array,p,q-1);
        quickSort(array,q+1,r);
    }
}


int main()
{
    int a[7]={34,23,1,2,85,100,70};
    cout << "unSorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
    quickSort(a,0,6);
    cout << "sorted : {";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ,";
    }
    cout << "}" << endl;
}