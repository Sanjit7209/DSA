#include<iostream>
using namespace std;
void PrintingRowsum(int arr[][3] , int row, int colm)
{
    cout<<"Printing the Sum "<<endl;
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int colm=0; colm<3 ; colm++)
        {
            sum=sum+arr[row][colm];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}
int main()
{
    int arr[3][3];
    cout<<"enter the elements: "<<endl;  
    for(int row=0; row<3; row++)
    {
        for(int colm=0; colm<3; colm++)
        {
            cin>>arr[row][colm];
        }
    }
    cout<<"printing the array "<<endl;
    for(int row=0; row<3; row++)
    {
        for(int colm=0; colm<3; colm++)
        {
            cout<<arr[row][colm]<<" ";
        }
        cout<<endl;
    }
     PrintingRowsum(arr,3,3);
}