#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

void push(int* arr, int& back) {
	int n;
	cin >> n;
	arr[back] = n;
	back++;
}

void pop(int* arr, int& front, int&back) {
	if (front == back) {
		cout << -1 << "\n";
	}
	else {
		cout << arr[front] << "\n";
		front++;
	}
}

void size(int front, int back) {
	cout << back-front << "\n";
}

void empty(int &front, int &back) {
	if (back == front)
		cout << 1 << "\n";
	else cout << 0 << "\n";
}

void frontf(int* arr, int &front, int&back) {
	if (back == front)
		cout << -1 << "\n";
	else cout << arr[front] << "\n";
}

void backf(int* arr, int& front, int& back) {
	if (back == front)
		cout << -1 << "\n";
	else cout << arr[back-1] << "\n";
}
int main(void) {
	int* arr = new int[10000];
	int n;
	cin >> n;
	string str;
	int front = 0, back = 0;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			push(arr, back);
		}
		if (str == "pop") {
			pop(arr, front,back);
		}
		if (str == "size") {
			size(front, back);
		}
		if (str == "empty") {
			empty(front, back);
		}
		if (str == "front") {
			frontf(arr, front,back);
		}
		if (str == "back") {
			backf(arr, front, back);
		}
	}
	delete arr;

	return 0;
}