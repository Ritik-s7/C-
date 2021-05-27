#include<iostream>
#include<climits>
using namespace std;

// Solution 1 - Theeta(n2)

int volumeStored(int arr[], int n)
{
    int vol = 0;
    for (int i = 1; i < n-1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax,arr[j]);
        }

        int rmax = arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax = max(rmax,arr[j]);
        }

        vol = vol + (min(lmax,rmax)-arr[i]);
        
    }

    return vol;
    
}

// Solution 2 - Theeta(n)

int volumeStored2(int arr[], int n)
{
    int vol = 0;
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i],lmax[i-1]);
    }
    rmax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        rmax[i] = max(arr[i],rmax[i+1]);
    }

    for (int i = 1; i < n-1; i++)
    {
        vol = vol + (min(rmax[i],lmax[i]) - arr[i]);
    }
    
    return vol;

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
    cout << volumeStored(arr,n);
    cout << "\nMethod 2 : \n";
    cout << volumeStored2(arr,n);

    /*
    int st=0, end = 0;
    int volume = 0;
    int k = 0;

    while (arr[k]<arr[k+1])

    {
        k++;
        if (k==n)
        {
            cout << 0;
            return 0;
        }
        
    }
    st = k;
    int l=0;
     while (arr[n-l]<arr[n-l-1])
    {
        l++;
        if (l==n)
        {
            cout << 0;
            return 0;
        }
    }
    end = n-l;

    int smallpos = 0;
    int largepos = 0;
    int smallwall;
    int largewall;

    if (arr[st]<arr[end])
    {
        smallpos = st;
        smallwall = arr[st];
        largepos = end;
        largewall = arr[end];
    }

    else
    {
        smallpos = end;
        smallwall = arr[end];
        largepos = st;
        largewall = arr[st];
    }
    





    for (int i = smallpos; i < largepos; i++)
    {
        if(arr[i]<smallwall)
        {
            volume = volume + (smallwall-arr[i]);
        }
    }


    cout << volume ; 
    
*/
}