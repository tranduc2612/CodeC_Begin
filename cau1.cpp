#include <bits/stdc++.h>
using namespace std;


int main(){
	long n,dem=0;
	pair<int,int> toado[1000];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>toado[i].first>>toado[i].second;
	}
	int max1=INT_MIN,max2=INT_MIN;
	for(int i=1;i<=n;i++){
		if(toado[i].first>max1){
			max1 = toado[i].first;
		}
		if(toado[i].second>max2){
			max2 = toado[i].second;
		}
	}
	int stepx,stepy;
	if(max1>max2){
		for(int i=1;i<=n;i++){
			stepx = toado[i].first;
			stepy = toado[i].second;
			for(int j=i+1;j<=n;j++){
				while(stepx<=max1){
					stepy++;
					stepx++;
					if(toado[j].first == stepx &&toado[j].second == stepy){
						dem++;
					}
				}
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			stepx = toado[i].first;
			stepy = toado[i].second;
			for(int j=i+1;j<=n;j++){
				while(stepx<=max2){
					stepy++;
					stepx++;
					if(toado[j].first == stepx &&toado[j].second == stepy){
						dem++;
					}
				}
			}
		}
	}
	cout<<dem+1;
	
}
