#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	
	cin >> phepToan;
	if(hieu()){
		cout<<"Hieu la:"<<hieu()
	}
	system("pause");
	return 0;
}
<<<<<<< HEAD
int hieu(int a, int b){
	int hieu=a-b;
	return hieu;
=======
int tong(int a, int b){
	int tong=a+b;
	return tong;
>>>>>>> 6796b6ae59b19808c15dd3a834133dcdabe1400c
}