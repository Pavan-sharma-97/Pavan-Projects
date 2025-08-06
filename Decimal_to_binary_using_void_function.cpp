#include<iostream>
using namespace std;

void Decimal_binary()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    int ans=0,pow=1;
    while(n>0)
    {
        int rem=n%2;
        ans=ans+(rem*pow);
        n=n/2;
        pow=pow*10;
    }
    cout<<"Binary number is = "<<ans;

}


int main()
{
    Decimal_binary();

}