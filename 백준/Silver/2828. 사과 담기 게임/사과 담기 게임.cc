#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	int j;
	cin>>j;
	int ans=0;
	int low=1;
	int high=m;
	for(int i=0;i<j;i++){
		int apple;
		cin>>apple;
		if(apple>=low&&apple<=high){
			continue;
		}
		else if(apple<low){
			int temp=low-apple;
			low-=temp;
			high-=temp;
			ans+=temp;
		}
		else{
			int temp=apple-high;
			low+=temp;
			high+=temp;
			ans+=temp;
		}
	}
	cout<<ans;
	return 0;
}
