#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<bool> arr(1000001,true);
	vector<int>prime;
	for(int i=2;i<=sqrt(1000001);i++){
		if(arr[i]==false){
			continue;
		}
		for(int j=i+i;j<1000001;j+=i){
			arr[j]=false;
		}
	}
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int cnt=0;
		for(int j=2;j<=n/2;j++){
			int low=j;
			int upp=n-j;
			if(arr[low]&&arr[upp]){
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}