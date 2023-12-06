#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int first[10]={0,};
	int second[10]={0,};
	int f_sum=0;
	int s_sum=0;
	for(int i=0;i<9;i++){
		cin>>first[i];
	}
	for(int i=0;i<9;i++){
		cin>>second[i];
	}
	for(int i=0;i<9;i++){
		f_sum+=first[i];
		//이기고 있던적이 있는지
		if(f_sum>s_sum){
			cout<<"Yes";
			return 0;
		}
		s_sum++;
	}
	cout<<"No";
	return 0;
}
