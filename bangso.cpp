#include<bits/stdc++.h>
using namespace std;
int main(){
 	int n,m,a[1005][1005],c[1005][1005];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++) cin>>a[i][j];
	for(int i=1;i<=n;i++) 
	for(int j=1;j<=m;j++)
	if(i==1&&j==1) c[i][j] = a[i][j];
	else if(i==1) c[i][j] = a[i][j]+c[i][j-1];
	else if(j==1) c[i][j] = a[i][j]+c[i-1][j];
	else c[i][j] = a[i][j] + max(c[i-1][j],c[i][j-1]);
	cout<<c[n][m];
}

