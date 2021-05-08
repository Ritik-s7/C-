#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int mx=array[0];

    for (int j = 0; j < n; j++)
    {
        mx = max(array[j],mx);
        cout<<mx<<endl;
    }
    
} 