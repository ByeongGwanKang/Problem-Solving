#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<int> arr(3);
	while (true){
		cin>>arr[0]>>arr[1]>>arr[2];
		if(arr[0]==0)
			return 0;
		sort(arr.begin(), arr.end());
		if(arr[2]>=arr[0]+arr[1])
			cout<<"Invalid\n";
		else if(arr[0]==arr[1]&&arr[1]==arr[2])
			cout<<"Equilateral\n";
		else if(arr[0]==arr[1]||arr[0]==arr[2]||arr[1]==arr[2])
			cout<<"Isosceles\n";
		else cout<<"Scalene\n";
	}
	return 0;
}