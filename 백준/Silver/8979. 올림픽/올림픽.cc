#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[1005][4]={0,};
	int n,k;
	cin>>n>>k;
	int find_g,find_s,find_b;
	for(int i=0;i<n;i++){
		int idx,gold,silver,bronze;
		cin>>idx>>gold>>silver>>bronze;
		arr[idx][0]=gold;
		arr[idx][1]=silver;
		arr[idx][2]=bronze;
		if(idx==k){
			find_g=gold;
			find_s=silver;
			find_b=bronze;
		}
	}
	int ans=1;
	for(int i=1;i<=n;i++){
		if(i==k){
			continue;
		}
		//금메달 수 계산
		if(arr[i][0]>find_g){
			ans++;
		}
		else if(arr[i][0]==find_g){
			if(arr[i][1]>find_s){
				ans++;
			}
			else if(arr[i][1]==find_s){
				if(arr[i][2]>find_b){
					ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}