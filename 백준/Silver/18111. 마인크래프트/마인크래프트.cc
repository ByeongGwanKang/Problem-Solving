#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(0); 
	cin.tie(0);
	int n,m,b;
	cin>>n>>m>>b;
	int ans_t=INT_MAX;
	int time;
	int ans_h;
	int arr[501][501];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	for(int h=0;h<=256;h++){
		int down = 0;
		int up=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]>h){
					down+=arr[i][j]-h;
				}
				else{
					up+=h-arr[i][j];
				}
			}
		}
		if(b+down>=up){
			time=2*down+up;
			if(time<=ans_t){
				
				if(time==ans_t){
					ans_h=max(h,ans_h);
				}
				else {
					ans_h=h;
				}
				ans_t=time;
			}
		}
	}
	cout<<ans_t<<" "<<ans_h;
	return 0;
}
