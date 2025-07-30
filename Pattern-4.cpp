#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    char h='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<h<<" ";
            h++;
        }
        cout<<endl;
    }
    return 0;
}