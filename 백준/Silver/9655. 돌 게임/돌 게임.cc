#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<int> v(1000);
	for(int i=0;i<1000;i++){
		if(i%2==0){  //숫자가 1 3 5..상근
			v[i]=0;
		}
		else v[i]=1;
	}
	int n;
	cin>>n;
	if(v[n-1]==0)
		cout<<"SK";
	else cout<<"CY";
	return 0;
}