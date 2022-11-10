#include <bits/stdc++.h>
using namespace std;

int find(int *a,int L,int R,int k){
	if(L==R){
		return a[L];
	}
	int i = L
	swap(a[L],a[(L+R)/2]);
	for(int j=i+1;j<=R;j++){
		if(a[j]<a[L]){
			swap(a[++i],a[j]);
		}
	}
}




