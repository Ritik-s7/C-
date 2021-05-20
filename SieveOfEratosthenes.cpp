#include<iostream>
using namespace std;

void sieve(int n)
{
    int prime[100];
    for (int i = 0; i < n; i++)
    {
        prime[i] = 1;
    }
    

    int ct =2;
    while((ct*ct)<n)
    {
        for (int i=(ct*ct); i<n;i=i+ct)
    {
        if (i % ct == 0)
        {
            prime[i]=0;
        }

    } 
    ct++;
    }
for (int i=2; i<n;i++)
    {
        if(prime[i]==1)
        {
            cout << i << endl;
        }
    }
}


void  primeFactor(int n)
{
    int spf[100]={0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i]==i)
        {
            for (int j = i*i; j <= n; j=j+i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
            
        }
        
    }

    while (n!=1)
    {
           cout << spf[n] <<endl;
           n = n / spf[n];
    }
    
    
    
}

int main()
{

    int n;
    cin >> n;

    //sieve(n);
    primeFactor(n);

}