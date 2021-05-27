// If an element appears more than half the size of array, return any index of that element

#include<iostream>
using namespace std;

// Method 1  - O(n), A(N)

int majorityElement(int arr[], int n)
{
    int N  = 100002;
    int maxArr[N];
    int maxmtimes = 0;
    int maxNum;
    int maxmIdx;
    for (int i = 0; i < N; i++)
    {
        maxArr[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        maxArr[arr[i]] = maxArr[arr[i]]+1;
      //cout << arr[i] <<" " <<maxArr[arr[i]]<<endl;
    }
    
    for (int i = 0; i < N; i++)
    {
        if (maxArr[i]>maxmtimes)
        {
            maxmtimes = maxArr[i];
            maxNum = i;

        }
        
    }

    if (maxmtimes > (n/2))
    {
            for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxNum)
        {
            maxmIdx = i;
        }
        
    }
    return maxmIdx;

    }
    
    return -1;
}




// Method 2 O(n2), A(1)
 
int majorityElement2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j= i+1; j < n; j++)
        {
            if (arr[j]==arr[i])
            {
                count++;
            }
            
        }

        if (count > (n/2))
        {
            return i;
        }
        
    }
    return -1;
    
}




// Efficient Method - O(n), A(1)
// Moore's Voting Algorithm

 int majorityElements3(int arr[], int n)
 {
     // for  finding out the candidate

     int count = 1;
     int res = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count --;
        }

        if(count == 0)
        {
            count = 1;
            res = i;
        }
    }

    // for varifying that candidate is majority

    int appearance = 0;
    for (int i = 0; i < n; i++)
    {
        //cout << arr[res] << "  "<<arr[i]<<endl;
        if (arr[res]==arr[i])
        {
            appearance++;
            //cout << appearance << endl;
        }
    }

        if (appearance <= (n/2))
        {
            res = -1;
        }
       return res;
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

    cout << majorityElement(arr,n);
    cout << "\nMethod 2 O(n2): \n";
    cout << majorityElement2(arr,n);
    cout << "\nMethod 3 O(n1): \n";
    cout << majorityElements3(arr,n);
    return 0;
}