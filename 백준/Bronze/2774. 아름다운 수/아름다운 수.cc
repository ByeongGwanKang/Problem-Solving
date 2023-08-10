#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int t;
	cin>>t;
	int n;
	int temp;
	for(int i=0;i<t;i++){
		int cnt=0;
		vector<int> arr(10);
		cin>>n;
		while(n!=0){
			temp = n%10;
			arr[temp]++;
			n/=10;
		}
		for(int i=0;i<10;i++){
			if(arr[i]!=0)
				cnt++;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
