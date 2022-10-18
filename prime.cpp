// testing number is prime or not
#include<iostream>
using namespace std;

int main(){
    int data;
    cin>>data;
    bool flag=false;
    for(int i=2;i<data;i++){
        if(data%i==0){
            cout<<"not a prime number"<<endl;
            flag=true;

            break;
        }
    }
    if(flag==false){
        cout<<"prime number"<<endl;
    }
}