// /Scenario 14: Password Recovery
// Design a simple password recovery system. Allow access if the user provides either the correct
// password or a valid recovery code. Ensure that users can gain access if either condition is satisfied.

#include <iostream>
#include<string>
using namespace std;
int main()
{
  int password=123456,p,r,rc=1234;
  
  cout<<"Enter Password and Recovery Code ";
  cin>>p;
  cin>>r;
 
 
  if(r==rc ||  p==password){
      cout<<"grant access";
  }else{
      cout<<"deny access";
  }

    return 0;
}