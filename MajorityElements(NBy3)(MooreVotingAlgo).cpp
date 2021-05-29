#include<iostream>
using namespace std;

// Find elemennts which are occuring more than (n/3) times in an array of size n.

void majorityElementsNby3(int arr[], int n)
{
    int First = INT_MAX, second = INT_MAX;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if(First==arr[i])
        {
            count1++;
        }
        else if(second==arr[i])
        {
            count2++;
        }
        else if(count1==0)
        {
            count1 = 1;
            First = arr[i];
        }

        else if (count2==0)
        {
            count2=1;
            second = arr[i];
        }
        else
        {
            count1--;
            count2--;
        }   
    }
    int c1=0, c2=0;
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i]==First)
        {
            c1++;
        }
        else if (arr[i]==second)
        {
            c2++;
        }
    }

    if (c1 > (n/3))
    {
        cout << First <<endl;
    }
    if (c2 > (n/3))
    {
        cout << second << endl;
    }
    else
    {
        cout << -1 <<endl;
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


    majorityElementsNby3(arr,n);
    return 0;
}
