#include<iostream>
#include<climits>
using namespace std;
int main (){
    int arr[] = {1,-3,2,5,-2,6,3};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
    if(mx<arr[i] ) {
     smx = mx;
     mx = arr[i];
    }
    else {
        smx = max(smx,arr[i]);
    }
    }
    cout<<mx<<endl;
    if(smx==INT_MAX) cout<<"No second integer .";
    else cout<<smx<<endl;
}