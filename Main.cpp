#include<iostream>
using namespace std;

int Cau_1_1(int n) {
	if (n == 0) {
		return 0;
	}
	return n + Cau_1_1(n - 1);
}

float Cau_1_3(int n) {
	if (n == 0) {
		return 0;
	}
	return (n / n + 1) + (n - 1 / (n + 1) - 1);
}

int main() {
	int n;
	cout << "Nhap so luong: ";
	cin >> n;
	int result;
	result = Cau_1_3(n);
	cout << "Ket qua la: " << result;
	return 0;
}