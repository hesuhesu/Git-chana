#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    string A, B;
    cin >> A >> B;

    int result = 50;
    for (int i = 0; i < B.length() - A.length() + 1; i++) {
        int count = 0;

        for (int j = 0; j < A.length(); j++) {
            if (A[j] != B[j + i]) {
                count++;
            }
        }

        if (count == 0) {
            result = 0;
            break;
        }
        if (count < result) {
            result = count;

        }
    }
    cout << result;

    return 0;
}