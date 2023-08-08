#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	stack<char> s;
	string str;
	int i = 0;
	getline(cin, str);
	while (str[i] != '\0')
	{
		if (str[i] == '<')
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			while (true)
			{
				cout << str[i];
				if (str[i] == '>')
					break;
				i++;
			}
		}
		else if (isalnum(str[i]))
		{
			s.push(str[i]);
		}
		else
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			cout << " ";
		}
		i++;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}

	return 0;
}