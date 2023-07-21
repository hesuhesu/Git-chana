#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<vector<int>> vector1;

	vector<int> subvector0;
	vector<int> subvector1;
	vector<int> subvector2;

	vector1.push_back(subvector0);
	vector1.push_back(subvector1);
	vector1.push_back(subvector2);

	vector1.at(0).push_back(1);
	vector1.at(0).push_back(2);
	vector1.at(0).push_back(3);

	vector1.at(1).push_back(2);
	vector1.at(1).push_back(3);
	vector1.at(1).push_back(4);
	vector1.at(1).push_back(5);

	vector1.at(2).push_back(5);
	vector1.at(2).push_back(6);
	vector1.at(2).push_back(7);

	for (int i = 0; i < vector1.size(); i++) {
		cout << "vector" << i << endl;
		for (int j = 0; j < vector1[i].size(); j++) {
			cout << vector1[i].at(j) << endl;
		}
		cout << endl;
	}


	return 0;
}