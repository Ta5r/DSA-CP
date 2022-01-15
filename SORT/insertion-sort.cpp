#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = a[i];
        int j = i-1;
        while(j>0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    //print sorted array

    for(int i = 0 ; i < n ; i++)
    {
        cout <<a[i] << " ";
        cout <<endl;
    }
}

int main()
{
    int a[] = {21,45,78,237,634,32,4376,88,199};
    int n = sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    return 0;
}