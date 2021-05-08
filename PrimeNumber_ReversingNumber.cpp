#include<iostream>
#include<cmath>

using namespace std;

int main(){
int n;
cin>>n;
bool flag =0;

for (int i = 2; i <= sqrt(n); i++)
{
    if (n%i==0)
    {
        cout<<"The Number is not Prime";
        flag = 1;
        break;
    }


} 

    if (flag == 0)
    {
    cout<<"The number is Prime";
    }



// Reversing a number

int num = n;
int RevNum = 0;
while (num!=0)
{
    int lastDig = num%10;
    RevNum = RevNum*10+lastDig;
    num=num/10;
}



cout<<"\n"<<RevNum;

}