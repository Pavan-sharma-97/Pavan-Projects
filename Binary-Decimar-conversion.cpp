#include<iostream>
using namespace std;

int binary_num(int n)
{
    int ans=0,pow=1;
    while (n>0)
    {
        int rem=n%10;
        ans=ans+(rem*pow);
        pow=pow*2;
        n=n/10;
    } 
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the binary number to convert into its decimal equivalent = ";
    cin>>n;
    int y= binary_num(n);
    cout<<y;

    return 0;
}