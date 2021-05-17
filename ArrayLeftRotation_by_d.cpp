#include<iostream>
using namespace std;

int main()
{

    int arr[] = {5,4,6,8,9,2,11,13};
    int n = 8;
    int d = 3;

    // Method 1 
    // O(n) 
/*
    int a1[d];
        for(int i = 0; i<d; i++)
        {
            a1[i] = arr[i];
        }

    for(int i=d; i<n;i++)
    {
        arr[i-d] = arr[i];

    }

    for(int i = 0; i<d; i++)
        {
            arr[n-d+i] = a1[i];
        }

*/
    // Method 2 - Shift by one to the left and repeat it d times


    // Method 3 

    //  {5,4,6,8,9,2,11};
    int d1 = d;
    int n1 = n;

    for (int i = 0; i < d; i++)
    {
        int temp = arr[i];
        arr[i] = arr[d-1];
        arr[d-1] = temp;
        d--;
        
    }

    d=d1;
    //  {4,5,6,8,9,2,11};
     for (int i = d; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        n--;
    }
    n=n1;
    // {4,5,11,2,9,8,6};
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        n--;
    }
    
        n=n1;
    // {6,8,9,2,11,5,4}; 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }



    return 0;
    

}