#include<iostream>
using namespace std;
// does not work with negative elements
// Works with non-negative elements only

int main(){
    int n, s;

    cin>>n>>s;

    int array[n];

    for (int i = 0; i < n; i++)

    {
        cin>>array[i];
    }

    int sum = 0, sindx = -1, eindx = -1, i =0, j=0;

    while (j<n && sum + array[j] <= s )
    {
        sum = sum + array[j];
        j++;
    }

    if (sum == s)
    {
         cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while (j<n)
    {
         sum += array[j];

            while (sum>s)
            {
                sum -= array[i];
                i++;
            }

            if (sum == s)
            {
                sindx = 1+1;
                eindx = j+1;
                break;
            }  
            j++;
    }

        cout<<sindx<<" "<<eindx<<endl;
        
    }
