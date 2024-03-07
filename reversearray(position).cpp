#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v, int m)
{
    int start=m+1;
    int end=v.size()-1;
    while(start<=end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v)
{
    for(int i=0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    vector<int> ans=reverse(v,3);
    cout<<"printing reverse array "<<endl;
    print(ans);
    return 0;
}