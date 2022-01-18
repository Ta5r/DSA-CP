#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countSq(int N){
    int count=0;
    int to = sqrt(N-1);
    for(int i=0;i<to;i++)
    {
        if((i*i)<=N)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n=1;
    int sq = countSq(n);
    cout<<"sol - "<<sq<<endl;
    return 0;
}