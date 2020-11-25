#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>> str;

    int n = str.length();
    int best=0 ;
    int sum=1;

    for(int i=0;i<n;++i)
    {
        if(str[i+1] != str[i])
        {
            best = max(best,sum);
            sum = 1;
        }
        else
            sum++;
    }

    cout<< best << endl;



    return 0;
}
