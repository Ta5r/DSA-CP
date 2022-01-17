// Write a program to reverse an array or string

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
    cout << endl;
}

int main()
{
    int arr[] = {1,0, 2, 2, 0, 2, 1};     
    int n = sizeof(arr) / sizeof(arr[0]);    
    cout << "UNSORTED ARRAY : "<<endl;
    printArray(arr, n);

    //sort
    int nw[n];
    int z0=0,z2=n-1;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==0)
        {
            nw[z0]=0;
            z0++;
        }
        if(arr[i]==2)
        {
            nw[z2]=2;
            z2--;
        }
    }
    for(int j = z0;j<=z2;j++)
    {
        nw[j]=1;
    }

    cout << "SORTED ARRAY : " <<endl;
    printArray(nw,n);    
    return 0;
}