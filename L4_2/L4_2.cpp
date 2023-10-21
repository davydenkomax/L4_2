/*
	Дано вещественное число — цена 1 кг конфет. Вывести стоимость
	1.2, 1.4, . . . , 2 кг конфет.
*/
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	//Объявление переменных
	double price, totalprice;
	double weight = 1.2;

	//Ввод значения переменной price
	cout << "Введите вещественное число(цену за 1кг конфет): ";
	cin >> price;

	//Цикл пока weight <= 2.0
	while (weight <= 2.0) {
		totalprice = price * weight;
		//Вывод результата
		cout << "Цена за " << weight << "кг конфет = " << totalprice << endl;
		weight += .2; //Аналогичная запись weight = weight + 0.2
	}
}