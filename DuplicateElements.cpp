/*
Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in 
the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.

*/

#include<iostream>
using namespace std;
void DuplicateFinder(int arr[], int n)
{
int a[n];
        
        for(int i=0;i<n;i++)
        {
            a[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            a[arr[i]]++ ; 
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i] > 1)
            {
                cout<< i;
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

    DuplicateFinder(arr,n);
    return 0;
}

