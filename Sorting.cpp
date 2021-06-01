#include<iostream>
using namespace std;


// Selection Sort

void SelectionSort(int arr[],int n){
for (int i = 0; i < n-1; i++)
{

    for (int j = i+1; j <=n; j++)
    {
        if (arr[j]<arr[i])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
        
    }
    
}

for (int k = 0; k < n; k++)
{
    cout<<arr[k]<<endl;
}


}




// Bubble Sort


void bubbleSort(int arr[], int n){
    int counter = 1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]=temp; 
            }
            
        }
        counter++;
        
    }
    
        for (int j = 0; j < n; j++)
        {
            cout<<arr[j]<<endl;
        }
        
    }



    
 // Insertion Sort

void insertionSort(int arr[], int n){
    int current = 1;
    while (current<n)
    {
        for (int i = 0; i < n; i++)
        {
            while (arr[current]<arr[i])
            {
                int temp = arr[current];
                arr[current] = arr[i];
                arr[i]=temp;
                for (int j = 0; j < n; j++)
                {
                    cout<<arr[j]<< " ";
                }
                cout <<""<<endl;
            }
    
        }
         current++;
    }
    
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<endl;
    }
    
}




// Insertion Sort Code -2
void insertionSort2(int arr[],int n){
for (int i = 1; i < n; i++)
{
    int current = arr[i];
    int j =  i-1;
    while (arr[j]>current && j >=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
    
}
for (int j = 0; j < n; j++)
{
    cout<<arr[j]<<endl;
}

}

// QuickSort

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
insertionSort(array,n);
 
    
}