#include <iostream>
using namespace std;

int main() {

  int n ;

  cout<<"Enter the num - ";
  cin>>n;

  if (n <= 1) {
        cout << "Not a Prime Number";
        return 0;
    }

  for (int i = 2 ; i < n ; i++)
  {
    if (n % i == 0 )
    {
      cout<<n<<" - Not a Prime Number"<<endl;

      return 0;
    }

  }

  cout<<"Prime";

  return 0;

}
