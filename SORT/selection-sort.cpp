#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }

        }
        if(min!=i)
        {
            //swap values min <--> i
            int temp = a[min];
            a[min] = a [i];
            a[i] = temp;
        }
    }
    //print array
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
        cout << endl;
    }
}

int main()
{
    int a[] = {200,21,45,78,237,634,32,4376,88,199};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    return 0;
}