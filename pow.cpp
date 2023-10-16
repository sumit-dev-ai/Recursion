#include<iostream>
using namespace std;

int power(int n , int p)
{
    if(p==0)
    return 1;
    int pow=power(n,p-1);
    return n*pow;
}
int main()
{
    int n,p;
    cout<<"number :"<< endl;
    cin>>n;
    cout<<"power : ";
    cin>>p;
    cout<<power(n,p);
}