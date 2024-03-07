#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> nums , int k)
{
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
      temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
   return nums;
}

vector<int> print(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    
    vector<int> ans=rotate(v,2);

    cout<<"the rotated array is "<<endl;
    print(ans);
    return 0;

}