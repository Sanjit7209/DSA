#include<iostream>
#include<string>
using namespace std;

string removeduplicates(string s)
{
    string temp=" ";
    for(int i=0; i<s.length();i++)
    {
     temp.push_back(s[i]);
     if(temp.size()>=2 && temp[temp.length()-1]==temp[temp.length()-2])
     {
        temp.pop_back();
        temp.pop_back();
        
     }
    }
    return temp;
}
int main()
{
    string s1;
    cin>>s1;
    string ans=removeduplicates(s1);
    cout<<ans<<endl;
}