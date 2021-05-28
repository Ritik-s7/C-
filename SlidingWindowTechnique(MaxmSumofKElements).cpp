// Find the maximum sum of k consecutive elements in an array
#include<iostream>
#include<climits>
using namespace std;


// Method 1 - Naive Approach O((n-k)(k)) ~ O(n2)
int maxmSum(int arr[], int n, int k)
{
    int maxmSum = INT_MIN;
    for (int i = 0; i < n-k+1; i++)
    {
        int currSum = 0;
        for (int j = i; j < i+k; j++)
        {
            currSum = currSum + arr[j];
            //cout << currSum << endl;
        }
        maxmSum = max(maxmSum,currSum);
        //cout<<"Max =  "<<maxmSum<<endl;
    }
    return maxmSum;
}

// Method 2 - Window sliding technique (My way) - Traversing in array only once - O(n)

int maxmSum2(int  arr[], int n, int k)
{
    int maxSum = INT_MIN;
    int count = 0;
    int currSum = 0;
    int stidx = 0;
    for(int i=0; i<n; i++)
    {
        currSum = currSum + arr[i];
        //cout << "CurrSum = "<< currSum << endl;
        count++;
        if(count==k)
    {
        count--;
        maxSum = max(maxSum,currSum);
        //cout <<"Max = "<< maxSum << endl;
        currSum = currSum - arr[stidx];
        //cout <<"CurrSum "<< currSum <<  endl;
        stidx++;
    }
    }
    return maxSum;
}


// Method 2.a - Sliding window teechnique (Other Way)
int maxmSum3(int arr[], int n, int k)
{
    int maxSum = INT_MIN;
    int currsum = 0;

    for(int i=0;i<k;i++)
    {
        currsum += arr[i];
    }
    maxSum = currsum;

    for (int i = k; i < n; i++)
    {
        currsum = currsum - arr[i-k] + arr[i];
        maxSum = max(maxSum,currsum);
    }

    return maxSum;
}

int main()
{
 int n,k;
    cin >> n >> k;
    int arr[n];

    for(int i =0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    cout << maxmSum(arr,n,k)<<endl;
    cout << maxmSum2(arr,n,k)<<endl;
    cout << maxmSum3(arr,n,k)<<endl;


    return 0;
}