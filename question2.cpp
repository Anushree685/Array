#include<iostream>
#include<climits>
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
    // second largest 
    int smax = INT_MIN;
    int max = INT_MAX;
    for(int i=0;i<n;i++){
        if(smax!= max && smax<arr[i]) smax=arr[i];
    }
    cout<<smax;
}