#include <iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    string str;
    stack <char> stack;

    cin.ignore();

    while (T--) {
        getline(cin, str);
        str += ' ';

        for (int i = 0; i < str.size(); i++) {

            if (str[i] == ' ') {

                while (!stack.empty()) {
                    cout << stack.top();
                    stack.pop();
                }cout << ' ';
            }
            else {
                stack.push(str[i]);
            }
        }cout << endl;
    }

    return 0;
}