#include<iostream>
using namespace std;
int main()
{
    int a[7]={2,4,7,6,8,0,1};
    int max,i;
    max=a[0];
    for(i=1;i<7;i++)
    {
        if (a[i]>max)
        max=a[i];
    }
cout<<max;
return 0;
}