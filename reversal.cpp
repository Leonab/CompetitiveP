#include<bits/stdc++.h>
using namespace std;

void reverseWords(string &s) {
            string ans = "";
            string cur = "";
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s[i] == ' ') {
                    if (cur.length() == 0) {
                        continue;
                    }
                    // found a word
                    reverse(cur.begin(), cur.end());
                    if (ans.length() > 0) {
                        ans.push_back(' ');
                    }
                    ans += cur;
                    cur = "";
                    continue;
                }
                cur.push_back(s[i]);

            }
            if (cur.length() > 0) {
                reverse(cur.begin(), cur.end());
                if (ans.length() > 0) {
                    ans.push_back(' ');
                }
                ans += cur;
            }
            s = ans;
            return;
    }

int main()
{
  string str;
  getline(cin, str);
  reverseWords(str);
  cout<<str;
  return 0;
}
