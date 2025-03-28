#include<iostream>
using namespace std;

void PointerArith()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;
    cout<<*p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<A[0];  // complete this statement to print 2 without moving pointer
}
