#include<iostream>
using namespace std;

class Queue{
private:
    int front;
    int rare;
    int data[5];

public:
    Queue()
    {
        front= -1;
        rare = -1;
        for(int i=0;i<5;++i)
        {
            data[i] = 0;
        }

    }
    bool isEmpty()
    {
        if(rare == -1 && front == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if((rare+1)%5 == front)
            return true;
        else
            return false;
    }
    void Enqueue(int val)
    {
        if(isFull())
            return;
        else if(isEmpty())
        {
            rare=0;
            front=0;
            data[rare]= val;
        }
        else
        {
            rare = (rare+1)%5; // here 5 is array size
            data[rare]= val;
        }

    }
    int Dequeue()
    {
        int x=0 ;
        if(isEmpty())
            return x ;
        else if(rare == front)
        {
            x=data[rare];
            rare=-1;
            front=-1;
              return x;
        }
        else
        {
            x=data[front];
            front = (front + 1)%5;
              return x;
        }


    }
    void print()
    {
        for(int i=0;i<5;++i)
        {
            cout<< data[i] <<"\t";
        }
    }



};
int main()
{
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);


    q.print();

    int y= q.Dequeue();
    cout<<endl;
    cout<<y <<endl;
    int p = q.Dequeue();
    cout<<p<<endl;





    return 0;

}













