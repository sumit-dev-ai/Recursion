#include<iostream>
using namespace std;
string substring(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    substring(s,ans);
    substring(s,ans+ch);

    
}
int main()
{
    substring("abc","");
    return 0;
}