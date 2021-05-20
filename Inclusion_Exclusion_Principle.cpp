#include<iostream>
using namespace std;
// How many numbers from 1 to n are divisible by a or b

int divisible(int n, int a, int b)
{
    int c1 = n/a;
    int c2 = n/b;

    int c3 = n/(a*b);

    return (c1+c2)-c3;
}

// Eucliud Algorithm to find GCD

int GCD(int a, int  b)
{
    while (b!=0)
    { 
        int remainder = a%b;
        a = b;
        b = remainder;
    }
    return a;
    
}


int main()
{
    cout<<divisible(40,5,7)<<endl;
    cout<<GCD(42,24);
}