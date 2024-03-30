// 7. **Scenario 7: Authentication System**
// Design a program for a secure system that requires two-factor authentication. The user needs to
// input both a valid username/password combination and a time-sensitive authentication code. Grant
// access only if both conditions are met.
#include <iostream>
#include<string>
using namespace std;
int main()
{
  int password=123456,p,r,rc=1234;
  string s, username="sameer";
  
  cout<<"Enter username , Password and Recovery Code ";
  cin>>s>>p>>r;
  
 
 
  if(r==rc &&  (p==password || s==username  )){
      cout<<"grant access";
  }else{
      cout<<"deny access";
  }

    return 0;
}