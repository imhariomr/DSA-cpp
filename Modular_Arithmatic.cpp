// Formulas
/// ( A + B ) % M = ((A % M) + (B % M)) % M

// ( A * B ) % M = ((A % M) * (B % M)) % M

// ( A - B ) % M = (((A % M) - (B % M))+M) % M

// Given a number N. print its factorial.print answer module M Where M = 47

#include<iostream>
using namespace std;

int main(){
    int n , fact=1;
    cout<<"Enter a number : ";
    cin>>n;
    int M = 47;

    for(int i= 2  ; i<=n ;i++){
        fact= (fact*i) % M;
    }
    cout<< fact;
    return 0;
}