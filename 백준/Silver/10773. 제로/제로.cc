#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
#include <stack>
using namespace std;

int main(void) {
	int sum = 0;
	int k;
	int n;
	stack<int> stack;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0)
			stack.pop();
		else
			stack.push(n);
	}
	while (!stack.empty()) {
		sum += stack.top();
		stack.pop();
	}
	cout << sum;
	return 0;
}