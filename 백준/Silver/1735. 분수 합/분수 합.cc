#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int a_top,a_bot,b_top,b_bot;
	cin>>a_top>>a_bot>>b_top>>b_bot;
	int ans_top=a_top*b_bot+a_bot*b_top;
	int ans_bot=a_bot*b_bot;
	int ans_gcd=gcd(ans_top,ans_bot);
	cout<<ans_top/ans_gcd<<" "<<ans_bot/ans_gcd;
	
	return 0;
}