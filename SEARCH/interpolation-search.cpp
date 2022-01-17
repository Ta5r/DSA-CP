#include <iostream>
using namespace std;

int interpolationSearch(int arr[],int n,int x)
{
    int start = 0;
    int end = n-1;
    bool flag = true;
    while(start<=end && x>=arr[start] && x<=arr[end])
    {
    int pos = start+(((end-start)/(arr[end]-arr[start]))*(x-arr[start]));
    if(arr[pos]==x)
    {
        return pos;
    }
    else if(arr[pos]<x)
    {
        start = pos+1;
    }
    else{
        end = pos-1;
    }
    }
    return -1;
}

int main()
{
    int arr[] = {12,34,56,67,78,89,90,99,106,304,324};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 78;
    int index = interpolationSearch(arr,n,x);
    cout << "index : " << index <<endl;
    return 0;
}