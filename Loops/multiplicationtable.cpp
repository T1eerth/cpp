#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number for which you want the table: ";
    cin>>n;
    for(i=1;i<=10;i++)
   { cout<<n<<" "<<"X"<<" "<<i<<"="<<" "<<n*i;
   cout<<endl;}
   

    return 0;
}