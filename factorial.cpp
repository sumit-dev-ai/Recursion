#include<iostream>
using namespace std;

int Factorial(int n)
{
    if(n==0)
    return 1;
    int fact=Factorial(n-1);
    return n*fact;
}
int main()
{
    int n;
    cout<<"number :"<< endl;
    cin>>n;

    cout<<Factorial(n);
}