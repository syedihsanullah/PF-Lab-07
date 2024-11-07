#include<iostream>
using namespace std;
int main ()
{
 int size = 0;
 cout<<"Enter the size of array::";
 cin>>size;
 int arr[size]={};
 for (int value =0; value<size; value ++)
 {
    cout<<"Enter the value of array"<<value+1<<"::";
    cin>>arr[value];
 }
 for(int i=0;i<size; i++)
 {
    cout<<"The value of arr["<<i<<"]is ::"<<arr[i]<<endl;
 }
}