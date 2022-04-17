#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Enter the marks in three subjects;";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    cout<<"total marks are"<<total;
    avg=(m1+m2+m3)/3;
    if (avg>65)
    {
        cout<<"a grade obtained";
    }
    else if(avg>35 && avg<65)
    {
        cout<<"b grade obtained";
    }
    else 
    {
        cout<<"the person has failed the exam";
    }
    return 0;
}