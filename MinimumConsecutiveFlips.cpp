#include<iostream>
using namespace std;

// Method 1 - Some bug is there

void minmConsecutiveFlips(int arr[], int n)
{
    int onePairs = 0;
    int zeroPairs = 0;
    int counter = 0;
   
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            counter++;
        }
        else
        {
            if(arr[i]==0)
            {
                zeroPairs++;
            }
            else
            {
                onePairs++;
            }
        }
    }

    if (arr[n]==0)
    {
        zeroPairs++;
    }
    else
    {
        onePairs++;
    }
    
    if (zeroPairs<onePairs)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                cout << " From "<<i<< " to ";
            }
            while(arr[i]==0)
            {
                i++;
            }
            cout << (i-1) ;
        }
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==1)
            {
                cout <<"From "<<i<< " to ";
            }
            while(arr[i]==1)
            {
                i++;
            }
            cout << (i-1) <<endl;
        }
    }
}

// Method 2
// Method 2 - The atmost difference between zeroPairs and onePairs will be 1, difference will be 0 if both pairs are equal.
// If array is starting and ending with same element then this element would be occuring in more groups and if ending and starting 
// with diferent elements than both pairs will be same. 
// In both cases, we can check the second pair and find that element (0 OR 1) and flip all pairs corresponding to that element.

void minmConsecutiveFlips2(int arr[], int n)
{
    int toFlip;
    int flipTo;
    int st=0, end=0;
    if (arr[0]==0)
    {
        toFlip = 1;
        flipTo = 0;
    }
    else
    {
        toFlip = 0;
        flipTo = 1;
    }

   // cout << toFlip <<" "<< flipTo;

    for (int i = 1; i < n; i++)
    {
        if (arr[i]==toFlip)
        {
            st = i;
            cout << "From " << st << " to ";
        }
        
        
        while (arr[i]==toFlip)
        {
            arr[i] = flipTo;
            i++;
            end = i;
        }
        if(end == i)
        {
        cout << end-1 << endl;
        }
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

    // minmConsecutiveFlips(arr,n);
     minmConsecutiveFlips2(arr,n);


}