// /8. **Scenario 8: Voting Eligibility**

// Create a program that checks if a person is eligible to vote. The eligibility criteria include being at
// least 18 years old and not having a criminal record. Grant voting access only if both conditions are
// satisfied.
#include <iostream>
#include<string>
using namespace std;
int main()
{
  int age;
  string s;
  
  cout<<"Enter your age ";
  cin>>age;

  cout<<"have a any previous criminal record ?  yes : no ";
  cin>>s;
  
  if(age>=18 && s=="no"){
      cout<<"you are eligible for voting";
  }else{
       cout<<"you are not eligible for voting";
  }
    return 0;
}