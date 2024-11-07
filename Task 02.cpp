#include <iostream>
using namespace std;
int main()
{
    int study_hours =0,student_index;
    int max_hours;
    int arr[10]={};
    for(int i=0; i<10; i++)
    {
        cout<<"enter the study hours of student "<<i+1<<"::";
        cin>>arr[i];
        if (arr[i]>max_hours)
        {
            max_hours=study_hours+arr[i];
            student_index=i;
        }
    }
    cout<<endl;
    for(int j=0; j<10; j++)
    {
        cout<<"The study hours of student "<<j+1<<"is ::"<<arr[j]<<endl;
    }
    cout<<"The student with maximum study hours is::"<<student_index;
}