#include<iostream>
using namespace std;

int main()
{

    int a[] = {5,14,16,8,9,2,11,13};
    int n = 8;

    int arr[n];
        int cur_ldr = a[n-1];
        int ct = 0;
        arr[ct] = cur_ldr;
        ct++;
        
        for(int i=n-2;i>=0;i--){
            if(a[i] > cur_ldr){
                cur_ldr = a[i];
                arr[ct] = cur_ldr;
                ct++;
            }
        }
        int size = arr[n]/arr[0];

        for (int i = 0; i < size-1; i++)
    {
        cout << arr[i] << endl;
    }

return 0;
}