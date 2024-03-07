#include<iostream>
using namespace std;

char toLowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(char a[] , int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if(toLowercase(a[start]) != toLowercase(a[end]))
        {
          return 0;
        }
        else{
            start++;
            end--;
        }
        return 1;
    }
}

int getlength(char name[])
{

    int count=0;
    for(int i=0; name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char a[20];
    cout<<"enter your name"<<endl;
    cin>>a;
    int len=getlength(a);
    cout<<"palindrome or not "<<checkpalindrome(a,len)<<endl;
    
}
