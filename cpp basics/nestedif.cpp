#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"a is maximum";
    }
else if(b>c)
{
    cout<<"b is max";
}
else{
    cout<<"c is max";
}
return 0;
}
