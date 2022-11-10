#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[500];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a + n);
	int min = INT_MAX;
	for(int i=0;i<n-1;i++){
		if(min>abs(a[i]-a[i+1])){
			min = abs(a[i]-a[i+1]);
		}
	}
	cout<<min;
	
}
