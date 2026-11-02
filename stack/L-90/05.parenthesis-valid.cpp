#include <iostream>
#include <stack>
using namespace std;

bool check(string str) {
  stack<char> st;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ')') { // closing ')' when then pop '(' from stack
      if (st.empty())
        return 0;
      else
        st.pop();
    } else // opening '(' push
      st.push(str[i]);
  }
  return st.empty();
}

int main(int argc, char *argv[]) {
  string str = "((())";

  cout << check(str) << endl;

  return 0;
}
