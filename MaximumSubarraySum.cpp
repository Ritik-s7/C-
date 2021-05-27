#include<iostream>
#include<climits>
using namespace std;


int maxSubarraySum(int arr[], int n)
{
    int currsum = arr[0];
    int maxsum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currsum = max((currsum+arr[i]),arr[i]);
        maxsum = max(currsum,maxsum);

    }
    return maxsum;
    
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
    }

    int currsum[n+1];
    currsum[0]=0;

    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i-1]+arr[i-1];
    }

    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currsum[i]-currsum[j];
            maxSum = max(maxSum,sum); 
        }
        
    }

    cout << maxSum << endl;

    cout <<"Solution by function :\n";
    cout << maxSubarraySum(arr,n);
    
    


}