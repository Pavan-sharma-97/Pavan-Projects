//binary number program
#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cout<<"Enter the number to find its binary equivalent = ";
    cin>>n;
    int pow=1;
    while(n>0)
    {
        int remainder=n%2;
        ans=ans+(remainder *pow);
        n=n/2;
       pow=pow*10;
    }
    cout<<"The number is = "<<ans;
}