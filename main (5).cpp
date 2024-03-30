// Scenario 2: Membership Eligibility
// Create a program that checks if a user is eligible for a premium membership based on age and
// subscription status. If the user is at least 18 years old and has a valid subscription, provide access;
// otherwise, deny access.
#include <iostream>
#include<string>
using namespace std;
int main()
{
  int age;
  string s;
  
 
  cout<<" what is your age ";
  cin>>age;
  cout<<" what is your subscription status ?  yes : no ";
  cin>>s;
  
  if( s=="yes" && age>=18){
      cout<<"you access premium membership ";
  }else{
       cout<<"you are not access premium membership ";
  }
    return 0;
}