#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int> a;
	//считывание
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp > 0) {
			a.push_back(temp);
		}
	}
	//обработка и вывод
//обработка
	int num_min = 0; //номер минимального элемента
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < a[num_min]) {
			num_min = i;
		}
	}
	//обмен значений элементов a[0] и a[num_min]
	int temp;
	temp = a[0];
	a[0] = a[num_min];
	a[num_min] = temp;
	//вывод
		cout << a[0] << " ";
	return 0;
}