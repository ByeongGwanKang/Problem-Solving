#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void push_front(int* arr, int& front, int cap, int& cnt) {
	int val;
	cin >> val;
	arr[front] = val;
	front--;
	if (front < 0) {
		front = cap-1;
	}
	cnt++;
}

void push_back(int* arr, int& back, int cap, int&cnt) {
	int val;
	cin >> val;
	arr[back] = val;
	back++;
	if (back > cap - 1) {
		back = 0;
	}
	cnt++;
}

void pop_front(int* arr, int& front, int cap, int& cnt) {
	if (cnt == 0)
		cout << -1 << "\n";
	else {
		front++;
		if (front > cap - 1) {
			front = 0;
		}
		cnt--;
		cout << arr[front] << "\n";
	}
}

void pop_back(int* arr, int& back, int cap, int& cnt) {
	if (cnt == 0)
		cout << -1 << "\n";
	else {
		back--;
		if (back <0) {
			back = cap-1;
		}
		cnt--;
		cout << arr[back] << "\n";
	}
}

void size(int& cnt) {
	cout << cnt << "\n";
}

void empty(int& cnt) {
	if (cnt == 0)
		cout << 1 << "\n";
	else cout << 0 << "\n";
}

void prt_front(int* arr, int& front, int cap, int& cnt) {
	int temp = front;
	if (cnt == 0)
		cout << -1 << "\n";
	else {
		front++;
		if (front > cap - 1) {
			front = 0;
		}
		cout << arr[front] << "\n";
	}
	front = temp;
}

void prt_back(int* arr, int& back, int cap, int& cnt) {
	int temp = back;
	if (cnt == 0)
		cout << -1 << "\n";
	else {
		back--;
		if (back <0) {
			back = cap-1;
		}
		cout << arr[back] << "\n";
	}
	back = temp;
}


int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	int front = 0;
	int back = 1;
	int cnt = 0;
	int* arr = new int[10000];
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push_front") {
			push_front(arr, front, 10000, cnt);
		}
		else if (str == "push_back") {
			push_back(arr, back, 10000, cnt);
		}
		else if (str == "pop_front") {
			pop_front(arr, front, 10000, cnt);
		}
		else if (str == "pop_back") {
			pop_back(arr, back, 10000, cnt);
		}
		else if (str == "size") {
			size(cnt);
		}
		else if (str == "empty") {
			empty(cnt);
		}
		else if (str == "front") {
			prt_front(arr, front, 10000, cnt);
		}
		else if (str == "back") {
			prt_back(arr, back, 10000, cnt);
		}
	}

	
	return 0;
}
