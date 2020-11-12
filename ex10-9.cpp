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
	vector<int> v; //vector 객체 생성

	while (true) {
		cout << "정수를 입력하세요 (0을 입력하면 종료)>>";

		int num;
		cin >> num;
		if (num == 0) return 0;

		v.push_back(num);
		printVector(v);
		cout << "평균=" << getAverage(v) << endl;
	}
}