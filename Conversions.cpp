 #include<bits/stdc++.h>
 #include<math.h>
 using namespace std;
 
 // Binary to decimal

 int binaryToDecimal(int a){
     int count = 0;
     int lastDigit;
     int Decimal=0;
while (a!=0)
{
    lastDigit = a%10;
    Decimal += lastDigit*pow(2,count);
    count++;
    a=a/10;
}
return Decimal;

 }

 // Octal to Deci mal

 int octalToDecimal(int n)
 {
     int lastDigit;
     int Decimal=0;
     int factor=1;
     while (n!=0)
     {
        lastDigit = n%10;
        Decimal += lastDigit*factor;
        factor*=8;
        n=n/10;
     }
     return Decimal;

 }

 // Hexadecimal To Decimal

 int hexadecimalToDecimal(string n){

     int answer = 0;
     int factor=1;
     int s = n.size();

     for (int i = s-1; i >= 0; i--)
     {
         if (n[i]>='0' && n[i]<='9')
         {
             answer = answer+factor*(n[i]-'0');
         }
         else if (n[i]>='A' && n[i]<='F')
         {
             answer += factor*(n[i]-'A'+10);
         }

         factor *= 16;
         
     }
        return answer;     


 }

 // Decimal To Binary 

 int decimalToBinary(int n){
     int ans=0;
     int factor =1;
      while (factor<=n)
      {
          factor *= 2;  
           
      }
      factor=factor/2;
      while (factor>0)
      {
          int lastDigit = n/factor;
          n = n-lastDigit*factor;
          factor/=2;
          ans = lastDigit+ans*10;
      }
      return ans;
      
 }

 // Decimal to Octal

  int decimalToOctal(int n){
      int ans=0;
      int factor=1;
      while (factor<=n)
      {
          factor=factor*8;
      }
      factor=factor/8;
      while (factor>0)
      {
          int lastDigit=n/factor;
          n = n-factor*lastDigit;
          factor=factor/8;
          ans = lastDigit+ans*10;
      }
      return ans;
  }

  // Decimal to Hexadecimal

  string decimalTOHexaDecimal(int n){

      int factor=1;
      string ans="";
      while (factor<=n)
      {
          factor *= 16;
      }
      factor = factor/16;

      while (factor>0)
      {
          int lastdigit = n/factor;
          n=n-lastdigit*factor;
          factor=factor/16;

          if (lastdigit<=9)
          {
            ans = ans + to_string(lastdigit);
          }
          else
          {
              char c = 'A'+lastdigit-10;
              ans.push_back(c);
          }
      }
      return ans;

  }

 int main(){ 

      //string s;
     //cin>>s;
     int num;
     cin>>num;

     //cout<<binaryToDecimal(n)<<endl;
     //cout<<octalToDecimal(n)<<endl;
     //cout<<hexadecimalToDecimal(s)<<endl;
     //cout<<decimalToBinary(n)<<endl;
     //cout<<decimalToOctal(num)<<endl;
     cout<<decimalTOHexaDecimal(num)<<endl;

 }
 
