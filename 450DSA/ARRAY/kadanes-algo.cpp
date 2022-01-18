#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxSubArray(int arr[], int n){
    int start=0;
    int end=n-1;
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++)
    {
        curSum += arr[i];
        if(curSum>maxSum)
        {
            maxSum = curSum;
            end=i;    
        }
        if(curSum<0)
        {
            curSum = 0;
            start=i+1;
            cout << "start index : "<<start<<endl;
        }
    }
        cout << "end index : "<<end<<endl;
        return maxSum;
}

int main()
{
    int arr[] = {1, -2, 3, 2, -6,4,100,-200};     
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubArray(arr,n);
    cout<<"max - "<<maxSum<<endl;
    return 0;
}