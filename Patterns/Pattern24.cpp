// 24.    *        *
//        **      **
//        * *    * *
//        *  *  *  *
//        *   **   *
//        *   **   *
//        *  *  *  *
//        * *    * *
//        **      **
//        *        *
#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0 ; i<n ;i++){
        for(int j=1; j<=i+1 ;j++){
            if(j==1 || j==i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1 ; j<n-i ;j++){
            cout<<" ";
        }
        for(int j=1 ; j<n-i ;j++){
            cout<<" ";
        }
        for(int j=1; j<=i+1 ;j++){
            if(j==1 || j==i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1 ; i<=n ;i++){
        for(int j=1 ; j<=n-i ; j++){
            if(j==1 || j==n-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1 ;j<=i ;j++){
            cout<<" ";
        }
        for(int j=1 ;j<=i ;j++){
            cout<<" ";
        }
        for(int j=1 ; j<=n-i ; j++){
            if(j==1 || j==n-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}