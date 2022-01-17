// Maximum and minimum of an array using minimum number of comparisons

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};     
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max=arr[0],min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=max) max =arr[i];
        if(arr[i]<min) min = arr[i];
    }

    cout<<"max - "<<max<<endl;
    cout<<"min - "<<min<<endl;

    return 0;
}