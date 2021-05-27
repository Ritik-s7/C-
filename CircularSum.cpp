#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n)
{
    int currentsum = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i <n; i++)
    {
        currentsum = max(currentsum+arr[i], arr[i]);
  
        maxSum = max(maxSum,currentsum);
    }
    return maxSum;

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

    int wrapSum;
    int nonWrapSum;


    nonWrapSum = kadane(arr,n);

    if (nonWrapSum < 0)
    {
   
        cout << nonWrapSum;
        return 0;

    }
    
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum = totalsum+arr[i];
        arr[i] = -1*arr[i];
    }

    wrapSum = totalsum + kadane(arr,n);
    
    cout << max(wrapSum,nonWrapSum) << endl; 

return 0;

}