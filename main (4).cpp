// Scenario 13: Event Invitation
// Create a program for an exclusive event. Users are invited if they are either VIP guests or have
// purchased a premium ticket. Use the OR logical operator to check the conditions and grant access
// accordingly.
#include <iostream>
#include<string>
using namespace std;
int main()
{
  
  string s,st;
  
 
  cout<<" are you vip guests ?  yes : no ";
  cin>>s;
  cout<<" are you purchased a premium ticket ?  yes : no ";
  cin>>st;
  
  if( s=="yes" || st=="yes"){
      cout<<"you are invited  ";
  }else{
       cout<<"you are not invited";
  }
    return 0;
}