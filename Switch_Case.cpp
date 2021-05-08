#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    char Operator;
    double result;
    cout<<"Enter Two Numbers\n";
    cin>>num1>>num2;
    cout<<"Enter operation you want to perform\n";
    cin>>Operator;

    switch (Operator)
    {
    case '+':
        result = num1+num2;
        cout<<result;
        break;
     case '-':
        result = num1-num2;
        cout<<result;
        break;
     case '*':
        result = num1*num2;
        cout<<result;
        break;
     case '/':
        result = num1/num2;
        cout<<result;
        break;
    
    default:
        cout<<"Program only supports '+,-,*,/";
        break;
    }

}