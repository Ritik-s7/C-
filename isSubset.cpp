#include<iostream>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    
    bool flag = true;
    int s = 1e6+2;
    int arr[s];
    
    for(int i=0; i<s;  i++){
        arr[i]=0;
    }
    
    for(int i=0; i<n;  i++){
        arr[a1[i]]= 1;
    }
    
    for(int i=0; i<m;  i++){
        if(arr[a2[i]] != 1)
        {
            flag = false;
        }
        
    }
    
    if (flag == true){
        return "Yes";
    }
    
    else {
        return "No";
    }
    
}

int main()
{

int a1[] = {11,1,13,21,3,7};
int a2[]={11,3,7,1};



cout << isSubset(a1,a2,6,4);


}