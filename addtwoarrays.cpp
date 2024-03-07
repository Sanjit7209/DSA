#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int start=0;
    int end=v.size()-1;
    while(start<end)
    {
        swap(v[start++] , v[end--]);
    }
    return v;
}

vector<int> findarraysum(vector<int> arr1,int n, vector<int> arr2, int m)
{
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int value1=arr1[i];
        int value2=arr2[j];
        int sum= value1+value2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    while(i>=0)
    {
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0)
    {
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
vector<int> print(vector<int> arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    vector<int> v2;
    v2.push_back(6);

    vector<int> ans=findarraysum(v1,4,v2,1);
    cout<<"the resultant array is "<<endl;
    print(ans);
    return 0;
    
}