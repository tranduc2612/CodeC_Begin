#include<bits/stdc++.h>
using namespace std;
class MAYBAY{
	private:
		int donGia,soLuong;
		string MMB,tenSX;
	public:
		DIEUHOA(){
			MMB="";
			tenSX="";
			donGia = 0;
			soLuong = 0;
		}
		friend istream& operator>>(istream& is,MAYBAY &a){
			cout<<"Nhap ma may bay:";
			fflush(stdin);
			getline(cin,a.MMB);
			cout<<"Nhap ten hang san xuat:";
			fflush(stdin);
			getline(cin,a.tenSX);
			cout<<"Nhap don gia:";
			is>>a.donGia;
			cout<<"Nhap so luong:";
			is>>a.soLuong;
			cout<<"\n";
			return is;
		}
		friend ostream& operator<< (ostream& os, MAYBAY a){
			os << a.MMB <<setw(5)<< a.tenSX <<setw(10)<< a.donGia <<setw(10)<< a.soLuong << endl;
			return os ;
		}
		int getDonGia(){
			return donGia;
		}
		string getMMB(){
			return MMB;
		};
		string getTenSX(){
			return tenSX;
		};
		bool operator=(MAYBAY b)
		{
			if(donGia == b.getDonGia()){
				return true	;
			}
			return false;
		}
		double thanhTien(){
			return donGia*soLuong+0.1*donGia*soLuong;
		}
		
		~MAYBAY(){
			
		}
};

int main(){
	int n;
	cout<<"Nhap n:";
	cin>>n;
	MAYBAY a[n+1];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin may bay thu "<<i+1<<endl;
		cin>>a[i];
	}
	cout<< "MSX" <<setw(10)<< "Ten SX" <<setw(10)<< "Don gia" <<setw(10)<< "So luong" << endl;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].getDonGia()>a[j].getDonGia()){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"Sau khi sap xep tang gian theo don gia"<<endl;
	cout<< "MSX" <<setw(10)<< "Ten SX" <<setw(10)<< "Don gia" <<setw(10)<< "So luong" << endl;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"Thong tin may bay co gia be hon 5000000USD"<<endl;
	cout<< "MSX" <<setw(10)<< "Ten SX" <<setw(10)<< "Don gia" <<setw(10)<< "So luong" << endl;
	for(int i=0;i<n;i++){
		if(a[i].getDonGia()>5000000){
			cout<<a[i];
		}
	}
	
	vector<MAYBAY> Vo;
	for(int i=0;i<n;i++){
		if(a[i].getMMB() != "MAYB 0107"){
			Vo.push_back(a[i]);
		}
	}
	cout<<"Thong tin may bay khi khong co ma hang MAYB 0107"<<endl;
	cout<< "MSX" <<setw(10)<< "Ten SX" <<setw(10)<< "Don gia" <<setw(10)<< "So luong" << endl;
	for(auto v:Vo){
		cout<<v;
	}
	vector<MAYBAY> V1;
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i].getTenSX() == "BOING"){
			cout<<a[i];
			dem++;
		}
		V1.push_back(a[i]);
	}
	
	if(dem==0){
		int k;
		MAYBAY b;
		cout<<"Nhap vi tri muon chen:";
		cin>>k;
		cout<<"Nhap them thong tin can chen\n";
		cin>>b;
		V1.insert(V1.begin()+k-1,b);
		cout<<"Thong tin khi chen them\n";
		cout<< "MSX" <<setw(10)<< "Ten SX" <<setw(10)<< "Don gia" <<setw(10)<< "So luong" << endl;
		for(auto v:V1){
			cout<<v;
		}
	}else{
		cout<<"Thong tin cua nhung hang BOING co trong danh sach\n";
		cout<< "MSX" <<setw(10)<< "Ten SX" <<setw(10)<< "Don gia" <<setw(10)<< "So luong" << endl;
		for(auto v:V1){
			cout<<v;
		}
	}
}

