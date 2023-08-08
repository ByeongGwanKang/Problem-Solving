#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int n;
	cin>>n;
	int val;
	vector<int> arr(10001);
	for(int i=0;i<n;i++){
		cin>>val;
		arr[val]++;
	}
	for(int i=1;i<10001;){
		if(arr[i]>0){
			arr[i]--;
			cout<<i<<"\n";
		}
		else i++;
	}
	return 0;
}
