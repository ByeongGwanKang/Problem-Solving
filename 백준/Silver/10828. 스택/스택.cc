#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

void push (int* arr, int &top) {
	int n;
	cin >> n;
	arr[top] = n;
	top++;
}

void pop(int* arr, int& top) {
	if (top == 0) {
		cout << -1 << "\n";
	}
	else {
		cout << arr[top - 1] << "\n";
		top--;
	}
}

void size(int top) {
	cout << top << "\n";
}

void empty(int top) {
	if (top == 0)
		cout << 1 << "\n";
	else cout << 0 << "\n";
}

void topf(int* arr, int top) {
	if (top == 0)
		cout << -1 << "\n";
	else cout << arr[top - 1] << "\n";
}
int main(void) {
	int* arr = new int[10000];
	int n;
	cin >> n;
	string str;
	int top=0;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			push(arr, top);
		}
		if (str == "pop") {
			pop(arr, top);
		}
		if (str == "size") {
			size(top);
		}
		if (str == "empty") {
			empty(top);
		}
		if (str == "top") {
			topf(arr, top);
		}
	}
	delete arr;

	return 0;
}