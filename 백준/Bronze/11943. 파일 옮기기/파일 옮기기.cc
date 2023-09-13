#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ans_1=a+d;
	int ans_2=b+c;
	cout<<min(ans_1,ans_2);
	return 0;
}
