#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int> a;
	//����������
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp > 0) {
			a.push_back(temp);
		}
	}
	//��������� � �����
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
}