#include <iostream>
using namespace std;

int main() {

  int n;

  cout<<"Enter the number - ";

  cin>>n;

  cout<<"Squres from 1 to "<<n<<" - "<<endl;

  for (int i = 1; i <= n; i++)
  {
    cout<<i<<" squres is - "<<i*i<<endl;
  }

}
