#include<iostream>
#include<string>
using namespace std;

string removealloccurences(string s, string part)
{
 while(s.length()!=0 && s.find(part)<s.length())
 {
    s.erase(s.find(part),part.length());
 }
 return s;
}
int main()
{
    string s;
    cout<<"enter the string: "<<endl;
    getline(cin,s);
    string part;
    cout<<"enter the part: "<<endl;
    cin>>part;
    cout<<removealloccurences(s,part);
    return 0;
}