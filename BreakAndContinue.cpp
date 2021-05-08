#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for(int i =1; i<31; i++){

        if (i%2==0)
        {
            continue;
        }
        

        cout<<"Today is ";
        cout<<i;
        cout<<", you can go out today!!"<<endl;

    if (pocketmoney == 0)
    {
        cout<<"No money, can't go now!!";
         break;
    }


        pocketmoney = pocketmoney-300;
    }
    return 0;
}