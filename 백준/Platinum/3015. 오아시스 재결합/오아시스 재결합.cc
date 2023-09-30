#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	stack<pair<int,int>>s;
	long long ans=0;
	for(int i=0;i<n;i++){
		int now;
		cin>>now;
		int same=1;
		//now가 top보다 작을 때 까지
		while(!s.empty()&&s.top().first<=now){
			if(s.top().first==now){
				ans+=s.top().second;
				same=s.top().second+1;
				s.pop();
			}
			else{
				ans+=s.top().second;
				s.pop();
				same=1;
			}
		}
		
		//top과 now의 쌍 하나 추가
		if(!s.empty()){
			ans++;
		}
		
		s.push({now,same});
	}
	cout<<ans;
    return 0;
}
