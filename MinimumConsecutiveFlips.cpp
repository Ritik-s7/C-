#include<iostream>
using namespace std;

// Method 1

int minmConsecutiveFlips(int arr[], int n)
{
    int onePairs = 0;
    int zeroPairs = 0;
    int i = 0;
    int counter = 0;
    if(arr[0]==0)
    {
        while (arr[i] ==0 && counter <= n)
        {
            i++;
            counter++;
        }
        zeroPairs++;
        while (arr[i] ==1  && counter <= n)
        {
            i++;
            counter++;
        }
        onePairs++;
    }
    
    return zeroPairs;

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

    cout << minmConsecutiveFlips(arr,n);


}