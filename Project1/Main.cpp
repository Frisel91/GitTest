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
		if (temp % 2 != 0) {
			a.push_back(temp);
		}
	}
	if (a.size() != 0) {


		cout << a.size() << endl;//��������� � �����
	//���������
		int num_min = 0; //����� ������������ ��������
		for (int i = 0; i < a.size(); i++) {
			if (a[i] < a[num_min]) {
				num_min = i;
			}
		}
		//����� �������� ��������� a[0] � a[num_min]
		int temp;
		temp = a[0];
		a[0] = a[num_min];
		a[num_min] = temp;
		//�����
		//for (auto now : a) {
		cout << a[num_min] << " ";
	}
	else
	{
		cout << 0;
	}
	//}
	return 0;
}