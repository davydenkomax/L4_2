/*
	���� ������������ ����� � ���� 1 �� ������. ������� ���������
	1.2, 1.4, . . . , 2 �� ������.
*/
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	//���������� ����������
	double price, totalprice;
	double weight = 1.2;

	//���� �������� ���������� price
	cout << "������� ������������ �����(���� �� 1�� ������): ";
	cin >> price;

	//���� ���� weight <= 2.0
	while (weight <= 2.0) {
		totalprice = price * weight;
		//����� ����������
		cout << "���� �� " << weight << "�� ������ = " << totalprice << endl;
		weight += .2; //����������� ������ weight = weight + 0.2
	}
}