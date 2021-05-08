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
    

    int N = 1e6+02;

    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[array[i]] != -1)
        { 
            
                minidx = min(minidx,idx[array[i]]);
            
        } 
        else
        {
            idx[array[i]] = i;
        }
 
    }
    if(minidx == 1e6+02)
    {
        cout<<-1<<endl; 
        return 0;
    }
    else
    {
        minidx+=1;
    }

cout<<minidx<<endl;
    
    
    
}