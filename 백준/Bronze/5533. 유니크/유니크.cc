#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>game_1(n);
	vector<int>game_2(n);
	vector<int>game_3(n);
	int check_1[101]={0,};
	int check_2[101]={0,};
	int check_3[101]={0,};
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		game_1[i]=a;
		game_2[i]=b;
		game_3[i]=c;
		check_1[a]++;
		check_2[b]++;
		check_3[c]++;
	}
	for(int i=0;i<n;i++){
		int ans=0;
		if(check_1[game_1[i]]==1){
			ans+=game_1[i];
		}
		if(check_2[game_2[i]]==1){
			ans+=game_2[i];
		}
		if(check_3[game_3[i]]==1){
			ans+=game_3[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}
