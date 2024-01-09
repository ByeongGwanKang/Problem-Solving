#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int star_a=0;
		int circle_a=0;
		int square_a=0;
		int tri_a=0;
		int star_b=0;
		int circle_b=0;
		int square_b=0;
		int tri_b=0;
		int a,b;
		cin>>a;
		for(int j=0;j<a;j++){
			int val;
			cin>>val;
			if(val==4){
				star_a++;
			}
			else if(val==3){
				circle_a++;
			}
			else if(val==2){
				square_a++;
			}
			else{
				tri_a++;
			}
		}
		cin>>b;
		for(int j=0;j<b;j++){
			int val;
			cin>>val;
			if(val==4){
				star_b++;
			}
			else if(val==3){
				circle_b++;
			}
			else if(val==2){
				square_b++;
			}
			else{
				tri_b++;
			}
		}
		if(star_a>star_b){
			cout<<"A\n";
		}
		else if(star_a<star_b){
			cout<<"B\n";
		}
		else {
			if(circle_a>circle_b){
				cout<<"A\n";
			}
			else if(circle_a<circle_b){
				cout<<"B\n";
			}
			else{
				if(square_a>square_b){
					cout<<"A\n";
				}
				else if(square_a<square_b){
					cout<<"B\n";
				}
				else{
					if(tri_a>tri_b){
						cout<<"A\n";
					}
					else if(tri_a<tri_b){
						cout<<"B\n";
					}
					else{
						cout<<"D\n";
					}
				}
			}
		}
	}
	return 0;
}
