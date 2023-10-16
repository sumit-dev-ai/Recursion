#include<iostream>
using namespace std;
string removeDuplicates(string s)
{ 
    if(s.length()==0){ return "";}
    char ch=s[0];
    string ros=removeDuplicates(s.substr(1));
  
    if (ch==ros[0])
    {
        cout<<"1: "<< ros<<endl;
        return ros;
    }
    cout<<"2: "<< ch+ros<<endl;
    return (ch+ros);

}
int main()
{
    string s="aabbccdd";
    cout<<removeDuplicates(s);
    return 0;
}