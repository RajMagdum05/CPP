/*
    *****
    ****
    ***
    **
    *
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int star=1; star<=n-i+1; star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
