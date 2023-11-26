#include<iostream>
using namespace std;

int main(){
    int num, div;
    cout<<"Enter a number: "; cin>>num;
    cout<<"----------------------------\n";

    for(div=2; div<num; div++){
        if(num%div==0){
            cout<<"This number is not prime.\n";
            break;
        }
    }
    if(num==div){
        cout<<"This number is prime.\n";
    }
}