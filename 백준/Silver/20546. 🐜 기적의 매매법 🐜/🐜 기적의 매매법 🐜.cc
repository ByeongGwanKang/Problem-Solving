#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int money;
	cin>>money;
	int jh=money;
	int jh_cnt=0;
	int sm=money;
	int sm_cnt=0;
	int sell=0,buy=0;
	int arr[15]={0,};
	for(int i=1;i<15;i++){
		cin>>arr[i];
	}
	//준현
	for(int i=1;i<15;i++){
		while(jh>=arr[i]){
			jh_cnt++;
			jh-=arr[i];
		}
	}
	int final_jh=jh+jh_cnt*arr[14];
	//성민
	for(int i=2;i<15;i++){
		if(arr[i]>arr[i-1]){
			sell++;
		}
		else{
			sell=0;
		}
		if(arr[i]<arr[i-1]){
			buy++;
		}
		else{
			buy=0;
		}
		//3일연속 상승하면 판매
		if(sell>=3){
			sm+=arr[i]*sm_cnt;
		}
		if(buy>=3){
			while(sm>=arr[i]){
				sm-=arr[i];
				sm_cnt++;
			}
		}
	}
	int final_sm=sm+sm_cnt*arr[14];
	if(final_sm>final_jh){
		cout<<"TIMING";
	}
	else if(final_sm==final_jh){
		cout<<"SAMESAME";
	}
	else{
		cout<<"BNP";
	}
	return 0;
}
