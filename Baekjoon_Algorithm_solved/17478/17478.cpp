/*

#include <iostream>

using namespace std;

string str = "";

void recur(int N) {

    string line = str;

    if (N == 0) {
        cout << line << "\"재귀함수가 뭔가요?\"\n";
        cout << line << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        cout << line << "라고 답변하였지.\n";
        return;
    }

    cout << line << "\"재귀함수가 뭔가요?\"\n";
    cout << line << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout << line << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << line << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";

    str += "____";
    recur(N - 1);

    cout << line << "라고 답변하였지.\n";
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";

    recur(N);
    return 0;
}

*/


#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string str = "";
    cin >> N;

    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    cout << "\"재귀함수가 뭔가요?\"\n";
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";

    for (int i = 0; i < N; i++) {
        str += "____";
        if (i == N - 1) {
            cout << str << "\"재귀함수가 뭔가요?\"\n";
            cout << str << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        }
        else {
            cout << str << "\"재귀함수가 뭔가요?\"\n";
            cout << str << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
            cout << str << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
            cout << str << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
        }
    }

    for (int i = 0; i < N; i++) {
        cout << str << "라고 답변하였지.\n";
        for (int j = 0; j < 4; j++) {
            str.pop_back();
        }
    }
    cout << "라고 답변하였지.\n";

    return 0;
}