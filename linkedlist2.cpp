#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* link;

};
struct Node* head;
void Print()
{
    struct Node* temp;
    temp = head;
    while(temp != NULL)
    {
        cout<< temp ->data <<endl;
        temp = temp ->link;
    }
}
void append(int value)
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t;
        t = head;
        while(t ->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }

}
void prepend(int value)
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp ->link = head;
    temp = head;
}
void deleted(int position)
{
    if(position == 1)
    {
        struct Node* temp;
        temp = head;
        head = head->link;
        free(temp);

    }
    else
    {
        struct Node* temp1;
        temp1 = head;
        for(int i=1;i<position - 2;++i)
        {
            temp1 = temp1->link;
        }
        struct Node* temp2;
        temp2 = temp1->link;
        temp1 ->link = temp2->link;
        free(temp2);

    }
}
void insertsort(int value)
{
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    if(head == NULL || temp->data < head->data)
    {
        temp->link = head;
        head = temp;

    }
    else
    {
        struct Node* prev;
        struct Node* p;
        prev = head;
        p = prev->link;
        while(temp->data > p->data)
        {
            prev = p;
            p = p->link;
        }
        prev->link = temp;
        temp->link= p;
    }
}




int main()
{
    head =NULL;
    append(5);
    append(10);
    append(4);
    append(3);
    Print();
    insertsort(2);



    Print();


    return 0;
}
