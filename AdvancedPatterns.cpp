#include<iostream>
using namespace std;

int main(){
   /* int rows;
    int cols;
    cin>>rows>>cols;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    
    }*/
    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }

    cout<<"        "<<endl;
    
    // Rhombus Pattern

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
 }
      cout<<"        "<<endl;

    // Number Pattern
        
   for (int i = 1; i <= n; i++)
   {
       for (int j = 0; j <= n-i; j++)
       {
           cout<<" ";
       }
        for (int j = 1; j <= i; j++)
       {
           cout<<j<<" ";
       }
       cout<<endl;
       
   }

   cout<<endl;

   // Palindromic Pattern

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= 2*(n-i); j++)
       {
           cout<<" ";
       }
        for (int j = i; j >= 1; j--)
       {
           cout<<j<<" ";
       }
        for (int j = 2; j <= i; j++)
       {
           cout<<j<<" ";
       }

       cout<<endl;
   }
   
   
    

}