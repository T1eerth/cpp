#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"Enter the no. u wanna find the factorial of";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"The factorial is"<<fact;
    return 0;
}