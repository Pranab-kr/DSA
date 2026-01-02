#include <iostream>
using namespace std;

int main() {

  int n;

  cout<<"Enter the number - ";

  cin>>n;

  cout<<"Even Numbers from 1 to "<<n<<" - "<<endl;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      cout<<i<<endl;
    }

  }

}
