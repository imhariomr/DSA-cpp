// 25.       *****
//          *   *
//         *   *
//        *   *
//       *****
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0 ; i<n ;i++){
        for(int j=1; j<=n-i ;j++){
            cout<<" ";
        }
        for(int j=1 ; j<=n ;j++){
            if(j==1 || j==n || i==0 || i==n-1){
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