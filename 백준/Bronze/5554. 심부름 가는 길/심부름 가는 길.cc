#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int a,b,c,d;
	int sum=0;
	cin>>a>>b>>c>>d;
	sum=a+b+c+d;
	int min=0;
	while(sum>=60){
		sum-=60;
		min++;
	}
	cout<<min<<"\n"<<sum;
	return 0;
}