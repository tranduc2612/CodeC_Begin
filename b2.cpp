#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n,x;
	cin>>n>>m;
	vector<long long> A,B;
	for(int i=0;i<n;i++){
		cin>>x;
		A.push_back(x);
	}
	for(int i=0;i<m;i++){
		long long dem = 0;
		cin>>x;
		for(auto v:A){
			if(v<=x){
				dem++;
			}
		}
		B.push_back(dem);
	}
	
	for(auto v:B){
		cout<<v<<endl;
	}
}

