#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,d;
	cin>>n>>d;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int temp=i;
		while(temp>=10){
			if(temp%10==d){
				cnt++;
			}
			temp/=10;
		}
		if(temp%10==d){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}