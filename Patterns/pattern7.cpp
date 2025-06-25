/*  
    * *
   ** **
  *** ***
 **** ****
***** *****

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
        for(int space=1; space<= n-i; space++)
        {
            cout<<" ";
        }
        for(int star=1; star<= i; star++)
        {
            cout<<"*";
        }
        cout<<" ";
        for(int star2=1; star2<=i; star2++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
