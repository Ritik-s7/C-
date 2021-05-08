#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin>>savings;

    if(savings >= 5000)
    {
        if(savings>10000)
        {
            cout<<"Hey, let's go for a road trip";
        }
        else
        {
            cout<<"Let's go to a restaurant";
        }
    }
    else if(2000<savings<5000)
    {
        cout<<"hii, give me a treat";
    }
    else{
        cout<<"Bye!!";
    }

    return 0;

}