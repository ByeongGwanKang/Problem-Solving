#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	int sum;
	int p;
	while(true){
		cin>>n;
		if(n==-1)
			return 0;
		sum=0;
		p=0;
		vector<int> arr(50000);
		for(int i=1;i<=n/2;i++){
			if(n%i==0){
				arr[p++]=i;
				sum+=i;
			}
		}
		if (sum != n)
        {
            cout << n << " is NOT perfect." << '\n';
        }
		else{
			cout<<n<<" = ";
			for(int i=0;i<p-1;i++){
				cout<<arr[i]<<" + ";
			}
			cout<<arr[p-1]<<"\n";
		}
	}	
	return 0;
}