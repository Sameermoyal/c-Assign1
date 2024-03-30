// Scenario 1: Access Control
// You are developing a simple login system. Write a C++ program that prompts the user for a username
// and password. If both the username and password match predefined values, grant access.
// Otherwise, deny access.
#include <iostream>
#include<string>
using namespace std;
int main()
{
  string u,username = "sameer";
  int p,password = 1234;
  
  cout<<"Enter username ";
  cin>>u;
  cout<<"Enter password";
  cin>>p;
  if(u==username && p==password){
      cout<<"grant access";
  }else{
      cout<<"deny access";
  }

    return 0;
}