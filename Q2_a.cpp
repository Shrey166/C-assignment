#include<iostream>
using namespace std;
int main(){
    char arr[100];
    int i,n;
    cout<<"Enter limit (max 100):";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"enter element "<<i<< ":";
        cin>>arr[i];
    }
    for(i=1;i<=n;i++){
        cout<<arr[i];
    }
}