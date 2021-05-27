#include<iostream>
#include<climits>
using namespace std;

int Consecutive1(int arr[], int n)
{
    int curMax = 0;
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            curMax++;
            max1 = max(max1,curMax);
        }
        else
        {
            curMax =0;
        }
        
    }
    return max1;
}


int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Method 1 : \n";
    cout << Consecutive1(arr,n);
    //cout << "\nMethod 2 : \n";
    //cout << volumeStored2(arr,n);


    return 0;
}