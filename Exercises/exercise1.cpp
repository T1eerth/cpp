#include<iostream>
using namespace std;
int main()
{
    float amount=0.0;
    cout<<"enter the total amount";
    cin>>amount;
    if(amount<100)
    {
        cout<<"No Discount";
    }
    else if(amount>=100 && amount<=500)
   { amount=(amount*10/100);
    cout<<"u availed 10 percent off"<<amount;}
    else (amount>500);
    
        amount=(amount*20)/100;
        {cout<<"you got 20 percent off"<<amount;}
    


}