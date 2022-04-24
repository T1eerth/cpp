#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(n*2==sum)
    cout<<"Its the Perfect no.";
     else
     cout<<"Not a perfect no.";   
    return 0;
}