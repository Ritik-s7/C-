#include<iostream>
using namespace std;

//Method - 1 : Naive Approach - Loop i=0 to n and inside it run another loop to find leftSum and RightSum for each i and check if they are equal for some i.
// O(n2) Time complexicity


//Method 2 : Prefix Sum Technique

bool Equilibrium(int arr[], int n)
{
    int prefix_sum[n];
    prefix_sum[0]=arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
        //cout<<prefix_sum[i]<<endl;
    }
    int st; 
    int  end = prefix_sum[n-1];
    // cout << end <<endl;
    if (prefix_sum[n-2]==0 || end-prefix_sum[0]==0)
    {
        return true;
    }
    for (int i = 0; i < n-1; i++)
    {
        st = prefix_sum[i];
        if (st==(end-prefix_sum[i+1]))
        {
            return true;   
        }
        
    }
    return false;
    
    
} 

bool EquilibriumPoint2(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int lSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (lSum == sum - arr[i])
    {
        return true;
    }

    else
    {
        lSum += arr[i];
        sum -= arr[i];
    }
    }
    
    return false;
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i =0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    cout << Equilibrium(arr,n);
    cout << EquilibriumPoint2(arr,n);

    return 0;
}
