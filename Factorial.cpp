#include<iostream>
using namespace std;

int factorial(int a){
   int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}

void fibonacci(int n){
    int t0=0;
    int t1=1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout<<t0<<endl;
        nextTerm = t0+t1;
        t0=t1;
        t1=nextTerm;
        
    }
    return;
}

int main(){

int n;
cin>>n;
cout<<factorial(n)<<endl;
fibonacci(n);

// Pascal Triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

for (int i = 0; i <n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
    }
    cout<<endl;
    
}


}




