#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B, N;
    int result = 0;
    cin >> A >> B >> N;

    if (A % B == 0) {
        cout << result;
        return 0;
    }

    for (int i = 0; i < N + 1; i++) {
        result = A / B;
        A = A % B * 10;
    }
    cout << result;

    return 0;
}