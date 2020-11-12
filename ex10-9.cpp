#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v) {
	int num = v.size();
	for (int i = 0; i < num; i++) {
		cout << v[i] << ' '; //v.at(i);
	}
	cout << endl;
}

double getAverage(vector<int>& v) {
	int num = v.size();
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += v[i];
	}
	return (double)sum / num;
}

int main() {
	vector<int> v; //vector ��ü ����

	while (true) {
		cout << "������ �Է��ϼ��� (0�� �Է��ϸ� ����)>>";

		int num;
		cin >> num;
		if (num == 0) return 0;

		v.push_back(num);
		printVector(v);
		cout << "���=" << getAverage(v) << endl;
	}
}