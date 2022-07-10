#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size for an array: ";
    cin >> n;

    int arr[n];
    cout<<"Enter the elements for the array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    // Method for Bubble sort.

    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1; j<=n-i ;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}