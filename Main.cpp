#include<iostream>
using namespace std;

int Cau_1_1(int n) {
	if (n == 0) {
		return 0;
	}
	return n + Cau_1_1(n - 1);
}

int main() {
	int n;
	cout << "Nhap so luong: ";
	cin >> n;
	int result;
	result = Cau_1_1(n);
	cout << "Ket qua la: " << result;
	return 0;
}