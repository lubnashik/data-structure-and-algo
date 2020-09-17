#include<iostream>
using namespace std;
class Stack{
private:
    int top;
    int data[10];
public:
    Stack()
    {
        top = -1;
        for(int i=0; i<10;++i)
        {
            data[i] = 0;
        }
    }
    bool isEmpty()
    {
        if(top == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if(top == 9)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isFull())
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            top++;
            data[top] = val;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<< "stack is empty"<<endl;
        }
        else
        {
            int popvalue = data[top];
            top--;

            return popvalue;
        }

    }
    void print()
    {
        for(int i=10;i>=0;--i)
        {
            cout<<data[i] <<"\t";

        }
    }



};




int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);

    s.print();
    cout<<endl;
    cout<< s.pop()<<endl;




    return 0;
}
