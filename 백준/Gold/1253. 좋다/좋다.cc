#include <bits/stdc++.h> 
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int ans=0;
	for(int i=0;i<n;i++){
		int find = v[i];
		int s_idx=0;
		int e_idx=n-1;
		while(s_idx<e_idx){
			if(v[s_idx]+v[e_idx]==find){
				if(s_idx!=i&&e_idx!=i){
					ans++;
					break;
				}
				else if(s_idx==i)
					s_idx++;
				else if(e_idx==i)
					e_idx--;
			}
			else if(v[s_idx]+v[e_idx]>find){
				e_idx--;
			}
			else s_idx++;
		}
	}
	cout<<ans;
	
	return 0;
}