#include<iostream>
using namespace std;

int insertionsort(int arr[], int n)
{
 for(int i=1; i<n; i++)    
 {
    int temp=arr[i];
    int j=i-1;
    for(; j>=0; j--)
    {
      if(arr[j]>temp)
      {
        arr[j+1]=arr[j];
      }
      else{
        break;
      }
    }
    arr[j+1]=temp;
 }

}
void printarray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int arr[7]={10,1,7,4,8,2,11};
    insertionsort(arr,7);
    printarray(arr,7);
}


