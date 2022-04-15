#include<iostream>
using namespace std;
int main()
{
    int a=5,b;
    b=2*++a+2*a++;
    cout<<b<<" "<<a;
    return 0;

}