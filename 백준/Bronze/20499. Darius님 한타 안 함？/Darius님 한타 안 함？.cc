#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int k,d,a;
	char q,w;
	cin>>k>>q>>d>>w>>a;
	if(k+a<d||d==0){
		cout<<"hasu";
	}
	else{
		cout<<"gosu";
	}
	return 0;
}
