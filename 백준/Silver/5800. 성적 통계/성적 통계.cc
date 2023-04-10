#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main(void) {
	int k;
	cin >> k;
	int n;
	int gap;
	int max;

	for (int i = 0; i < k; i++) {
		cin >> n;
		max = 0;
		vector<int>grade(n);
		for (int j = 0; j < n; j++) {
			cin >> grade[j];
		}
		sort(grade.begin(), grade.end());
		for (int j = 0; j < n - 1; j++) {
			gap = grade[j + 1] - grade[j];
			if (max < gap)
				max = gap;
		}
		cout << "Class " << i+1 << "\n";
		printf("Max %d, Min %d, Largest gap %d\n", grade[n-1], grade[0], max);
	}


		return 0;
	}