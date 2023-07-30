#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<int> stack_list;
vector<char> result;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, count = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        while (count <= x) {
            result.push_back('+');
            stack_list.push(count);
            count++;
        }

        if (x == stack_list.top()) {
            stack_list.pop();
            result.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }

    return 0;
}