#include <iostream>
#include <queue>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;
    cout << "<";

    queue<int> queue_list;
    for (int i = 1; i <= N; i++) {
        queue_list.push(i);
    }

    while (1) {
        if (queue_list.size() == 1) {
            cout << queue_list.front() << ">";
            break;
        }

        for (int i = 1; i < K; i++) {
            int first = queue_list.front();
            queue_list.pop();
            queue_list.push(first);
        }

        cout << queue_list.front() << ", ";
        queue_list.pop();
    }

    return 0;

}