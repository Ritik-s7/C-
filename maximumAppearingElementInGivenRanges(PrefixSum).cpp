#include<iostream>
#include<vector>
using namespace std;

int mostAppearing(int n, int l[], int r[])
{
    int arr[1000];

    for(int i=0; i<1000; i++)
    {
        arr[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }

    int maxm = arr[0];
    int res = 0;

    for(int i = 1; i<1000;i++)
    {
        arr[i]+=arr[i-1];
        if(maxm < arr[i])
    		{
    			maxm = arr[i];

    			res = i;
    		}
    }

        return res;
}
int main()
{

int l[] = {1,2,3};
int r[] = {3,5,7};
int n = 3;

cout << mostAppearing(n,l,r);

    return 0;
}