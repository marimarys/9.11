﻿#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	//диапазон от -20 до 20
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41;
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//Array1.Дано целое число N(> 0).Сформировать и вывести целочисленный
		//массив размера N, содержащий N первых положительных нечетных чисел : 1, 3, 5, . . . .
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2;
		cout << mas[i] << ' ';
	}*/
	/*Array2.Дано целое число N(> 0).Сформировать и вывести целочисленный
	массив размера N, содержащий степени двойки от первой до N - й: 2, 4, 8, 16, . . . .*/	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << ' ';
	}*/
	/*Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать
	и вывести массив размера N, содержащий N первых членов данной прогрессии :
	A, A + D, A + 2·D, A + 3·D, . . . .*/
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}*/
/*	Array4.Дано целое число N(> 1), а также первый член A и знаменатель D
		геометрической прогрессии.Сформировать и вывести массив размера N,
		содержащий N первых членов данной прогрессии :
	A, A·D, A·D
		2
		, A·D
		3
		, . . . .*/
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << ' ';
	}*/
	//Array7◦ Дан массив размера N.Вывести его элементы в обратном порядке.
	const int size = 10;
	int n;
	cin >> n;
	int mas[size];
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 11;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = size - 1; i >= 0; i--) {
		cout << i << endl;
	}
}