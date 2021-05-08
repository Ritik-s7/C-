#include<iostream>
using namespace std;
#include<math.h>


    void prime(int a, int b)
    {
        
        for (int i = a; i <= b; i++)
        {
            bool flag = 0;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i%j==0)
                {
                    flag=1;
                    break; 
                }
                
            }
            if (flag==0)
            {
                cout<<i<<endl;
            }
        

        }
        
    }


int main(){
int a,b;
cin>>a>>b;
cout<<('9'-'0')*5<<"........";

prime(a,b);

}