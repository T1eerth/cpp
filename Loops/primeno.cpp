#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if (count==2)
    {
        cout<<"its a prime no.";
    }
    else{
        cout<<"it aint the prime number";
    }

}