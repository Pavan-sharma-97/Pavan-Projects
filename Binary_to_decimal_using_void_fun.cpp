#include<iostream>
using namespace std;

void bin_decimal()
{
    int n;
    cout<<"Enter the binary number = ";
    cin>>n;
    int ans=0,pow=1;
    while(n>0)
    {
        int rem=n%10;
        ans=ans+(rem*pow);
        n=n/10;
        pow=pow*2;
    }
    cout<<"Decimal Equivalent number = "<<ans;
}


int main()
{
    bin_decimal();
}