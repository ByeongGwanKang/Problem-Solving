#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<int> arr(3);
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr.begin(), arr.end());
	while(arr[2]>=arr[0]+arr[1]){
		arr[2]--;
	}
	cout<<arr[0]+arr[1]+arr[2];
	return 0;
}
