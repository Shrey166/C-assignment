#include<iostream>
using namespace std;
int main(){
    int n,i,count=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<"prime";
    }
    else{
        cout<<"composite"<<endl;
        cout<<"factors are:"<<endl;
        for(i=2;i<=n;i++){
            if(n%i==0){
                cout<< i<<",";
            }
        }
    }
}
