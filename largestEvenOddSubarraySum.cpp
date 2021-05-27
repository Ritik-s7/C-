#include<iostream>
#include<climits>
using namespace std;

// [2,5,6,7,8,9,9,5,5]
int evenOddSum(int arr[], int n)
{
    int maxele = 1;
    int currele  = 1;

    for (int i = 0; i < n-1; i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2!=0)||(arr[i]%2==1 && arr[i+1]%2!=1))
        {
            currele++;
            maxele = max(maxele,currele);
        }
        else
        {
            currele = 1;
        }
        
    }
    
    return maxele;
}

int main()
{

 int n;
    cin >> n;
    int arr[n];

    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << evenOddSum(arr,n);
    return 0;
}