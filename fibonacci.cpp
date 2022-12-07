#include<iostream>
using namespace std;
int fib(int n){
        int i,t1=0,t2=1,t3;
    if (n<2)
    {
        return n;
    }
    //recursion approach
    // return fib(n-1)+fib(n-2);
    // iteration approach
    else
    t3=t1+t2;
    for ( i = 2; i < n; i++)
    {
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    return t2;
    
}
int main(){
    int a;
    cout<<"Enter the nth term: "<<endl;
    cin>>a;
    cout<<"The value at "<<a<<" term of fibonacci series is: "<<fib(a);

return 0;
}