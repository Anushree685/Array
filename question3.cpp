#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    // input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<min;
}