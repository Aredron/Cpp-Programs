#include<iostream>
using namespace std;
// WAP to print the maximum of three numbers
int main(){
    int num1, num2, num3;

    cout<<"Enter first Number: "; cin>>num1;
    cout<<"Enter second Number: "; cin>>num2;
    cout<<"Enter third Number: "; cin>>num3;

    if(num1>num2){
        if(num1>num3) {
            cout<<"First number is the greatest.";
        } else {
            cout<<"Third number is the greatest.";
        }
    } else {
        if(num2>num3) {
            cout<<"Second Number is the greatest.";
        } else {
            cout<<"Third Number is the greatest.";
        }
    }
}