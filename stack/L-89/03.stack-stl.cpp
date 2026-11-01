#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);

  cout << s.top() << endl;

  s.pop();

  cout << s.top() << endl;
  cout << s.size() << endl;
  cout << s.empty() << endl;
  return 0;
}
