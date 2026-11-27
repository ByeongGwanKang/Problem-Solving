#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    long long min_price=1234567890;
    cin>>n;
    int price;
    vector<int>edge(n-1);
    long long res=0;
    
    for(int i=0;i<n-1;i++){
        cin>>edge[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>price;
        if(min_price>price){
            min_price=price;
        }
        res+=min_price*edge[i];
    }   
    cin>>price;
    cout<<res;
    return 0;
}