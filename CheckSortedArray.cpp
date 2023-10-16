#include<iostream>
using namespace std;

bool SortedArray(int arr[] , int n)
{
    if(n==1)
    return true;
    bool restarray=SortedArray(arr+1,n-1);
    return (arr[0]<arr[1] && restarray);
    
}
int main()
{
    int n=5;
    int arr[]={1,6,3,4,5};
    cout<<SortedArray(arr,n);
}