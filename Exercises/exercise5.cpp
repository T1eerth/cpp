#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0,m;
    cout<<"Enter the integer";
    cin>>n;
    m=n;
    do
    {
        r=n%10;
        rev=rev*10+r;
         n=n/10; 
        }
        while(n!=0);
        cout<<"The reverse of the number is "<<rev;
        if(rev==m)
        cout<<"its a palindrome";

}