#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<int> arr(5);
	vector<int> check(10);
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
	int cnt=0;
	for(int i=0;i<5;i++){
		check[arr[i]]++;	
	}
	for(int i=0;i<10;i++){
		if(check[i]==1||check[i]==3||check[i]==5)
			cout<<i;
	}
	return 0;
}
