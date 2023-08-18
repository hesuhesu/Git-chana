#include <iostream>
#include<stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--) {

        stack<char> stack;
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); ++j)
        {
            if (stack.empty() || s[j] == '(') stack.push(s[j]);
            else if (stack.top() == '(') stack.pop();
        }

        if (stack.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}