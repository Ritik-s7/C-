#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int N = 1e6+2;  
    bool idx[N];

    
    for (int i = 0; i < n; i++)
    {
        idx[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i]>=0)
        {
            idx[array[i]] = true;
        }
        
    }
    int j=0;

    while (idx[j]==true)
    {
        j++;
    }

    cout<<j;

    
    


}