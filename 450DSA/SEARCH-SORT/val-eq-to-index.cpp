#include <iostream>
#include <vector>

using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) 
{
    vector<int> g1;
  
    // for (int i = 1; i <= 5; i++)
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i+1)
        {
        g1.push_back(i+1);
        }
    }
    return g1;
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int x=5;
    valueEqualToIndex(arr,n);
    
    return 0;
}