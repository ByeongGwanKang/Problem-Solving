#include <iostream>
#include <vector>

int main(void) {
	using namespace std;
	int n, m, a, b, temp;
	int arr[101] = { 0 };
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		for (a; a < b; a++, b--) {

			temp = arr[b];
			arr[b] = arr[a];
			arr[a] = temp;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}