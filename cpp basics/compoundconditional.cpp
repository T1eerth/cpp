#include<iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"enter the time:";
    cin>>hour;
    if(hour>=8 && hour<=18)
    {cout<<"working Hour";}
    else{
        cout<<"leisure Hour";
    }
    return 0;
}