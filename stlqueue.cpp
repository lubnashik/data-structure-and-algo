#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<string>q;
    q.push("ashik");
    q.push("lubna");
    q.push("ayan");
    q.push("barsha");

    while(!q.empty())
    {
        string x;
        x= q.top();
        cout<< x <<endl;
        q.pop();
    }




    return 0;
}
