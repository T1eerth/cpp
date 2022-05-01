#include<iostream>
using namespace std;
int main()
{
    int a[3],i,key,n=3;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key";
    cin>>key;
    for( i=0;i<n;i++)
    {
        if(key==a[i])
        cout<<i;
        return 0;
        
    }

}