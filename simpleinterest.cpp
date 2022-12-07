#include<iostream>
using namespace std;

int main(){
    int principal, time;
    float rate, interest;

    cout<<"Enter Principal amount: \n";
    cin>> principal;
    cout<<"Enter time in years\n";
    cin>> time;
    cout<<"Enter Rate of interest: \n";
    cin>> rate;

    interest=(principal*rate*time)/100;
    cout<< "Simple Interest : \n" << interest;
    return 0;

}