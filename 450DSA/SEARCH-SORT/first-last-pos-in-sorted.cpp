#include <iostream>
using namespace std;

int func(int arr[],int n,int x)
{
    bool start=true;
    bool end = true;
    for(int i=0,j=n-1;i<n;i++,j--)
    {

        if(arr[i]==x && start==true)
        {
            cout<<"start : "<<i<<endl;
            start=false;
        }
        if(arr[j]==x && end == true)
        {
            cout<<"end : "<<j<<endl;
            end = false;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=5;
    func(arr,n,x);
    return 0;
}