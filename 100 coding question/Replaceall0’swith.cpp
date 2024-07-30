#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
  int num1 ,num2=0;
  cin>>num1;
  if(num1==0){
    num2=1;
  }
  while(num1>0){
   int rem=num1%10;
   if(rem==0)
   rem=1;
   num1=num1/10;
   num2=num2*10+rem;

  }
  num1=0;  //store the reverse of num2 

    return 0;
}