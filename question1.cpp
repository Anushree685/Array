#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //produt
    int product = 1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    cout<<product;
}