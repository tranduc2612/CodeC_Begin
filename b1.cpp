#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long n,a,b;
	char c[2];
	cin>>n;
	vector<int> V;
	while(n--){
		long long dem = 0;
		cin>>a>>b>>c;
		for(int i=a-1;i<b;i++){
			if(c[0] == s[i]){
				dem++;
			}
		}
		V.push_back(dem);
	}
	
	for(auto v:V){
		cout<<v<<" ";
	}
}

