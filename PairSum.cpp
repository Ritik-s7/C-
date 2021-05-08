#include<iostream>
#include<climits>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        if(arr[low]+arr[high] == k)
        {
            cout<< low<<" "<< high<< endl;
            return true;
        }

        else if (arr[low]+arr[high] > k)
        {
            high -= 1;
        }

        else
        {
            low += 1;
        }
        
    }
    return false;

}

int main()
{

int arr[] = {2,4,7,11,14,16,20,21};
cout<<pairSum(arr,8,31)<<endl;

}