#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i=0;i<3;i++){
		int hs,ms,ss;
		cin>>hs>>ms>>ss;
		int hf,mf,sf;
		cin>>hf>>mf>>sf;
		int ans_h,ans_m,ans_s;
		ans_s=sf-ss;
		if(ans_s<0){
			ans_s+=60;
			mf--;
		}
		ans_m=mf-ms;
		if(ans_m<0){
			ans_m+=60;
			hf--;
		}
		ans_h=hf-hs;
		cout<<ans_h<<" "<<ans_m<<" "<<ans_s<<"\n";
	}
	return 0;
}
