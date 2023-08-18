#include <iostream>
#include <stack> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    string str;
    stack<int> stack;

    cin >> N;

    for (int i = 0; i < N; i++) {

        cin >> str;

        if (str == "push") {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if (str == "pop") {
            if (!stack.empty()) {
                cout << stack.top() << "\n";
                stack.pop();
            }
            else {
                cout << "-1" << "\n";
            }
        }
        else if (str == "size") {
            cout << stack.size() << "\n";
        }
        else if (str == "empty") {
            if (stack.empty()) {
                cout << "1" << "\n";
            }
            else {
                cout << "0" << "\n";
            }
        }
        else if (str == "top") {

            if (!stack.empty()) {
                cout << stack.top() << "\n";
            }
            else {
                cout << "-1" << "\n";
            }
        }
    }
    return 0;
}