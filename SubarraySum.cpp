#include<iostream>
using namespace std;

// Given an array of size n. Output sum of each subarray of the given array

int main(){
int n;
cin>>n;
int array[n];
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}

for (int i = 0; i < n; i++)
{
    int sum = 0;
    for (int j= i; j < n; j++)
    {
        sum = sum+array[j];
        //cout<<sum<<endl;
    }
    
}


cout<<"\n"<<endl;
// Length of Maximum Sub-Array

int max_len = 2;
int pd = array[1]-array[0];
int curr_len = 2;
int j = 2;
while (j<n)
{
    if ((array[j]-array[j-1])==pd)
    {
        curr_len++;
    }
    else
    {
        curr_len=2;
        pd = array[j]-array[j-1];
    }

    j++;
    
if (curr_len>=max_len)
{
    max_len=curr_len;
}
}

cout<<max_len<<endl;


// Record Breaking days

int rcbDays=0;
int mx = array[0];
array[n] = -1;

if (n==1)
{
    cout<<"1"<<endl;
    return 0;
}


for (int i = 0; i < n; i++)
{
    if (array[i]>mx)
    {
        mx = array[i];
        if (array[i]>array[i+1])
        {
            rcbDays++;
        }
        
    }
    
}
cout<<rcbDays<<endl;


}