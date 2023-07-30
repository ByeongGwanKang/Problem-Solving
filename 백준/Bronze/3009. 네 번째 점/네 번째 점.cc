#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<int> arr(6);
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
	if(arr[0]==arr[2])
		cout<<arr[4];
	else if (arr[0]==arr[4])
		cout<<arr[2];
	else cout<<arr[0];
	cout<<" ";
	if(arr[1]==arr[3])
		cout<<arr[5];
	else if (arr[1]==arr[5])
		cout<<arr[3];
	else cout<<arr[1];
	return 0;
}