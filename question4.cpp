#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    // input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = false ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i==j) continue;
            if(arr[i] == arr[j]) flag = true;
        }
    }
    if(flag == true ) cout<<"Array have duplicats.";
    else cout<<"Don't have any duplictes";
}