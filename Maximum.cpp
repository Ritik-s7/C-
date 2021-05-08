#include<iostream>
using namespace std;

int main(){
    cout<<"Enter any Three Numbers\n"<<endl;
    int num1,num2,num3,max;
    cin>>num1>>num2>>num3;
    
    if(num1>num2)
    {
        if(num1>num3){
            max = num1;
        }
        else{
            max = num3;
        }
    }
    else
    {
        if(num2>num3){
            max = num2;
        }
        else{
            max = num3;
        }
    }

    cout<<max<<endl;
    string s = "";
    if(max%2==0){
        s = "is Even";
        cout<<(s)<<endl;
    }
    else{
        s = "is Odd";
        cout<<(s)<<endl;
    }

    return 0;
}