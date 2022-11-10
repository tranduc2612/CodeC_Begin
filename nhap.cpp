#include<bits/stdc++.h>

using namespace std;

class Hang{
	private:
		string maHang, tenHang;
		int soLuong;
		int donGia;
	public:
		Hang(){
			soLuong =0;
		}
		void nhap(){
			cout<<"Nhap ma hang:";
			cin>>maHang;
			cin.ignore();
			cout<<"Nhap ten hang:";
			getline(cin,tenHang);
			cout<<"So luong:";
			cin>>soLuong;
			cout<<"Don gia:";
			cin>>donGia;
		}
		
		void in(){
			cout<<setw(7)<<left<<maHang<<setw(5)<<tenHang<<setw(10)<<soLuong<<setw(5)<<donGia;
		}
};

class Maytinh:public Hang{
	private:
		string heDieuHanh;
		float trongLuong;
		int gia;
	public:
		void Nhap(){
			Hang::nhap();
			cout<<"Nhap he dieu hanh:";
			cin>>heDieuHanh;
			cout<<"Nhap trong luong:";
			cin>>trongLuong;
			cout<<"Nhap gia:";
			cin>>gia;
		}
		void In(){
			Hang::in();
			cout<<setw(5)<<left<<heDieuHanh<<trongLuong<<"kg"<<setw(5)<<gia<<"VND"<<endl;
		}	
		string getHeDieuHanh(){
			return heDieuHanh;
		}
		float getTrongLuong(){
			return trongLuong;
		}
		int getGia(){
			return gia;
		}
};

int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	Maytinh *a = new Maytinh[n+1];
	cout<<"----Nhap danh sach cac san pham----"<<endl;
	for(int i=0;i<n;i++){
		cout<<"San pham thu"<< i+1<<endl;
		a[i].Nhap();
	}
	cout<<"\n";
	cout<<"----Danh sach cac san pham----"<<endl;
	cout<<"Ma hang - Ten Hang - So luong - Don gia - He dieu hanh - Trong luong - Gia"<<endl;
	for(int i=0;i<n;i++){
		a[i].In();
	}
	
	cout<<"----Danh sach cac may tinh Win khong qua 2.5kg----"<<endl;
	int kt = 0;
	for(int i=0;i<n;i++){
		if(a[i].getHeDieuHanh()=="win" || a[i].getHeDieuHanh()=="Win"){
			if(a[i].getTrongLuong()<=2.5){
				a[i].In();
				kt = 1;
			}
		}
	}
	if(kt==0){
		cout<<"Trong san pham khong co san pham Win nao qua 2.5kg"<<endl;
	}
	
	cout<<"----May tinh Mac re nhat----"<<endl;
	int min = INT_MAX;
	kt = 0;
	Maytinh reNhat;
	for(int i=0;i<n;i++){
		if(a[i].getGia()<min){
			min = a[i].getGia();	
			reNhat = a[i];
			kt = 1;	
		}	
	}
	if(kt == 0){
		cout<<"Khong co may tinh Mac nao !"<<endl;	
	}else{
		reNhat.In();
	}
}
