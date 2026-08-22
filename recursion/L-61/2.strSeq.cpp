#include <iostream>
#include <string>
#include <vector>
using namespace std;

void genSeq(string str, int idx, int n, vector<string> &ans, string &tmp) {
  if (idx == n) {
    ans.push_back(tmp);
    return;
  }
  // dont take one
  genSeq(str, idx + 1, n, ans, tmp);

  // take one
  tmp.push_back(str[idx]);
  genSeq(str, idx + 1, n, ans, tmp);
  tmp.pop_back(); // cleanup the taking
}

int main(int argc, char *argv[]) {
  string str = "abc";
  vector<string> ans;
  string tmp;

  genSeq(str, 0, str.size(), ans, tmp);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
