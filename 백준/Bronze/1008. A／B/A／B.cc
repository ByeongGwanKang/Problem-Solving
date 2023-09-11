#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	double A,B;
	cin>>A>>B;
    cout << fixed;	//소수점 아래부터 유효숫자 계산
	cout.precision(9);	//유효숫자 표기
	cout<<A/B;
	return 0;
}