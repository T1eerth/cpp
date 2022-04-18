#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu \n"<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. div\n";
    int option;
    cout<<"Enter the option u wanna select";
    cin>>option;
    int a,b,c;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
        default:cout<<"Invalid option";
    }
    cout<<"The result is:"<<c;
    return 0;
}