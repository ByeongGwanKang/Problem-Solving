#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include<queue>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); //c++입출력만 사용하기
	queue<int>q;
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		q.pop();
		int temp = q.front();
		q.pop();
		q.push(temp);
	}
	cout << q.front();
	return 0;
}