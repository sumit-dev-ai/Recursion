#include<iostream>
using namespace std;

void dec(int n)
{
    if (n==0)
    {
        return;
    }
    
    cout<<n<<" ";
    dec(n-1);
}
int main()
{
    int n,p;
    cout<<"number :"<< endl;
    cin>>n;
    dec(n);
}