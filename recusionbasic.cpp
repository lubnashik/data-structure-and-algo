#include<iostream>
using namespace std;
void recursion(int n)
{
    if(n == 0)
        return;
    recursion(n-1);
    cout<< n <<endl;
}
void recursion2(int n)
{
    if(n == 0)
        return;
    cout<< n <<endl;
    recursion2(n-1);

}
int factorial(int n)
{
    if(n<=1)
        return n;
    else
        return n*factorial(n-1);
}
int sum(int n)
{
    if(n == 0)
        return 0;

    int ans =sum(n-1)+ n;
    return ans;
}
int fibonacci(int n)
{
    if(n<=1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);

}
int pow(int x,int y)
{
    if(y == 0)
        return 1;
    else
        return x* pow(x,y-1);
}
int BigMod(int x,int y,int M)
{
    if(y==0) return 1;

    if(y%2==1)
        return (x*BigMod(x,y-1,M))%M;
    else
    {
        int val=BigMod(x,y/2,M);
        return (val*val)%M;
    }
}
int NcR(int n, int r)
{
    if(r == 0 || r==n)
        return 1;
    else
        return NcR(n-1,r-1) + NcR(n-1,r);
}
int Digit(int n)
{
    if(n == 0)
        return 0;
    else
        return Digit(n/10)+1;
}
int Gcd(int a , int b)
{
    if(b == 0)
        return a;
    else
        return Gcd(b,a%b);
}
















int main()
{
    //recursion(10);
    //recursion2(5);
   // int p=factorial(5);
    //cout<< p <<endl;
    //cout<< sum(3) <<endl;
    //cout<<fibonacci(5) <<endl;
    cout<<Gcd(6,2)<<endl;




    return 0;
}
