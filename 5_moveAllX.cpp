#include<iostream>
using namespace std;
string moveAllX(string s)
{
    if(s.length()==0)
    {
        return "";

    }
    char ch=s[0];
    // cout<<ch<<endl;
    string ans=moveAllX(s.substr(1));
    cout<<ans<<endl;
    if (ch=='x')
    {
        return (ans+ch);

    }
    return (ch+ans);
}
int main()
{
    moveAllX("axcfsxffx");
    return 0;
}