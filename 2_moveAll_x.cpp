#include<iostream>
using namespace std;
string moveAll_x(string s)
{ 
    if(s.length()==0){ return "";}
    char ch=s[0];
    string ros=moveAll_x(s.substr(1));
  
    if (ch=='x')
    {
        cout<<"1: "<< ros<<endl;
        return ros+ch;
    }
    cout<<"2: "<< ch+ros<<endl;
    return (ch+ros);

}
int main()
{
    string s="xaxbxc";
    cout<<moveAll_x(s);
    return 0;
}