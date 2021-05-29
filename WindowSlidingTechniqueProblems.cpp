// Ques 1 - Find fist M N-bonacci numbers
// Ques 2 - Find number of distinct elements in each window of size k - (this problem uses concept of Hashing too)

#include<iostream>
using namespace std;

void Nbonacci(int n, int m)
{
    //n = window size, m = numbers to print
    int arr[m] = {0};
    arr[n-1] = 1;
    arr[n] = 1;
    int st = 0;
    int sum = 1;

    for(int i = n+1; i<m; i++)
    {
        sum = sum + arr[i-1] - arr[i-n-1];
        arr[i] = sum;
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr[i]<<" "<<endl;
    }
    


}


int main()
{
int n,k;
    cin >> n >> k;
    int arr[n];

    for(int i =0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    Nbonacci(n,k);

    return 0;
}