#include<iostream>
using namespace std;

bool check(int num1, int num2, int num3)
{
    int max, b, c;

if (num1>num2)
{
    if (num1>num3)
    {
        max = num1;
        b = num3;
        c = num2;
    }

    else
    {
        max = num3;
        b = num1;
        c = num2;
    }
}

else
{
    if (num2>num3)
    {
        max = num2;
        b=num3;
        c=num1;
    }
    else
    {
        max = num3;
        b = num2;
        c = num1;
    }   
}



    cout<< max <<" " <<b<<" "<<c<<endl;

    if (max*max == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }  
    
}



int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if (check(x,y,z))
    {
        cout<<"This is a pythagorian triplet";
    }
    else
    {
        cout<<"Not a pythagorian triplet";
    }
    
    

}