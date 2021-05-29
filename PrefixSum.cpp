// Given a fixed array and multiple queries of following type on the array, how to efficiently perform these queries - 
// I/P - arr[] = {2,8,3,9,6,5,4}

// Queries getSum(l,r)
//         getSum(0,2)
//         getSum(1,3)
//         getSum(2,6)

// O/P - 13 20 27

#include<iostream>
using namespace std;

//Method 1 - Brute Force - run a loop from l to r for each query - O(n)

// Method 2 - Prefixsum Technique - O(1) time complexity for each query 

int prefixSum(int arr[], int n, int l, int r)
{
    // an array that will contain sum of all elements upto ith index.
    int prefix_sum[n];
    prefix_sum[0]=arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
        //cout << prefix_sum[i] << endl;
    } 
    
    if(l!=0)
    {
        return (prefix_sum[r]-prefix_sum[l-1]);
    }
    else
    {
        return (prefix_sum[r]);
    }

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

    cout << prefixSum(arr,n,1,3);


    return 0;
}