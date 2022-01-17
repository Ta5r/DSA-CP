#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

//using ITERATIONS

int jumpSearch2(int arr[], int n ,int x)
{
   int jump = sqrt(n);
   int low=0,high=n-1;
   for(int i=0;i<n;i+=jump)
   {
       if(arr[i]==x)
       return i;
       if(arr[i]>x)
       {
       high = i;
       break;    
       }
       if(arr[i]<x)
       low = i;
   }
   for(int k=low;k<=high;k++)
   {
       if(arr[k]==x)
       {
           return k;
       }
   }
   return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = jumpSearch2(arr,n, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}