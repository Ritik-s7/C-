#include<iostream>
#include<climits>
using namespace std;

int main()
{

    int a[] = {40,30,20,10};
    int n = 4;




  // Method - 1 O(n2)
  /* 
    int maxdif = INT_MIN;
    int diff = 0;
   for(int i=0; i<n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            diff = a[j]-a[i];
            if (diff>maxdif)
            {
                maxdif = diff;
            }
            
        }
    }
*/

     // Method - 2 O(n)

    // int a[] = {5,14,16,8,9,2,11,13};
    // int a[] = {40,30,20,10};
    // int n = 8;

     int low = a[0];
     int diff = a[1]-a[0];

     for (int i = 0; i < n; i++)
     {
         if(diff>=(a[i]-low))
         {
             diff = a[i]-low;
         }
         low = min(a[i],low);
     }
         
        cout << diff;
        
        return 0;
}