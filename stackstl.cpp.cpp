#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    for(int i=1;i<9;++i)
    {
        s.push(i);
    }
    while(!s.empty())
    {
        cout<< s.top()<<"\t";
        s.pop();
    }





}
