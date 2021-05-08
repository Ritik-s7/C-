#include<iostream>
using namespace std;

int main(){
   /* int rows, cols;
    cin>>rows>>cols;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n";

    for (int i=1;i<=rows;i++){
        cout<<"*";
        for(int j=1;j<cols-1;j++){

        if(i==1 || i==rows ){
            cout<<"*";
        }
        else if (1<i<rows){
            cout<<" ";
        }

        }
        cout<<"*";
        cout<<endl;
    }
    
    for (int i = 1; i <= rows; i++)
    {
       for (int j = 1; j <= cols; j++)
       {
           if (i==1 || i == rows || j == 1 || j == cols)
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
       }
       cout<<endl;
    }
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows+1-i; j > 0; j--)
        {
            cout<<"* ";

        }
        cout<<endl;
        
    }
    
  // Floyd's Triangle

    int count = 0;
    int incr = 0; 

   for (int i = 1; i<=rows; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           incr +=1;
           cout<<count+incr<<" ";
          
       }
       cout<<endl;
       
   }*/

   // Butterfly Pattern

   int n=4;
   int m = 2*n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
            int space = m-2*i;
        for (int j = 1; j < space; j++)
            {
                cout<<" ";
            }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }     
        cout<<endl;
        
    }

    for (int i = n; i <= n; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
            int space = m-2*i;
        for (int j = 1; j < space; j++)
            {
                cout<<" ";
            }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }     
        cout<<endl;
        
    }
}


