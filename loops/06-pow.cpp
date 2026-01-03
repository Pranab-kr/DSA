#include <iostream>
using namespace std;

int main() {

  int n , pow , res;

  cout<<"Enter the num and pow - ";
  cin>>n>>pow;
  res = n;

  for (int i = 1 ; i < pow ; i++)
  {
    res = res * n;
  }

  cout<<res;
}
