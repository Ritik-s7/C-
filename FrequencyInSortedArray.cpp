#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {10,10,10,30,30,40};
    int n = 6;
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        if (arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            cout << arr[i] << " " << count << endl;
            count = 1;
        }
        

    }

    // Method 2 

     count = 1;
     int i = 1;

    while(i<n)
    {
        while (i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }

        cout << arr[i-1] << " " << count << endl;
        count = 1;
        i++;    

    }
            if(n==1 || arr[n-1]!=arr[n-2])
        {
            cout << arr[n-1] << " " << 1 << endl;
        }
     

}