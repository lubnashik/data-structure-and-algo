#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    cin>> n;

    long long int a , sum=0;

    for(long long int i=1;i<n;++i)
    {
        cin>> a ;
        sum = sum + a;
    }

    cout<< ((n*(n+1)/2) - sum  );




    return 0;
}
