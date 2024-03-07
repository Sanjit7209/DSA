#include<iostream>
#include<vector>
using namespace std;

vector<int> movezeroes(vector<int> nums)
{
    int i=0;
    for(int j=0; j<nums.size(); j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
   return nums;

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
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);
     vector<int> ans=movezeroes(v);
    cout<<"printing  array "<<endl;
    print(ans);
    return 0;
}