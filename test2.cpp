#include<bits/stdc++.h>
using namespace std;

class KhachHang{
	private :
		string maKH,ten,diaChi,ngayGui;
		int tienGui,type,thoiGianGui;
	
	public:
	 void nhap(){
		cout<<"Nhap maKH:"<<endl;
		cin>>maKH;
		cout<<"Nhap ten:"<<endl;
		cin>>ten;
		cout<<"Nhap dia chi:"<<endl;
		cin>>diaChi;
		cout<<"Nhap loai"<<endl;
		cin>>type;
		cout<<"Nhap so tien gui"<<endl;
		cin>>tienGui;
		cout<<"Nhap ngay gui"<<endl;
		cin>>ngayGui;
		cout<<"Thoi gian gui"<<endl;
		cin>>thoiGianGui;
	}
	
	void xuat(){
		cout<<"MaKh - ten - diachi - loai - so tien gui - ngay gui - thoi gian gui"<<endl;
		cout<<this->maKH<<" "<<this->ten<<" "<<this->diaChi<<" "<<this->type<<" "<<this->tienGui<<" "<<this->ngayGui<<" "<<this->thoiGianGui<<endl;
	}
	
	void timKiemKhachHang(string name){
		if(name == this->ten){
			cout<<this->maKH<<" "<<this->ten<<endl;
		}
	}
	
	void tinhLaiSuat(){
		double Tong = 0;
		if(this->thoiGianGui == 1){
			Tong += this->tienGui * 0.06/12;
		}
		if(this->thoiGianGui == 3){
			Tong += this->tienGui * 0.07/4;
		}
		if(this->thoiGianGui == 6){
			Tong += this->tienGui * 0.08/2;
		}
		if(this->thoiGianGui == 12){
			Tong += this->tienGui * 0.09/1;
		}
		
		if(this->type == -1){
			Tong += 0.01 * this->tienGui + 0.01;
		}
		cout<<this->maKH<<this->ten<<Tong<<endl;
	}
	
	void DSkhacHangThanThiet(){
		if(this->thoiGianGui>6 && this->tienGui>1000000000){
			xuat();
		}
	}
};

int main(){
	int n;
	KhachHang a[100];
	for(int i=0;i<n;i++){
		a[i].nhap();		
	}
	for(int i=0;i<n;i++){
		a[i].xuat();		
	}
	string name;
	cout<<"nhap ten can tim"<<endl;
	cin>>name;
	for(int i=0;i<n;i++){
		a[i].timKiemKhachHang(name);		
	}
	
	cout<<"Danh sach khach hang tinh lai suat";
	for(int i=0;i<n;i++){
		a[i].tinhLaiSuat();		
	}
	
	for(int i=0;i<n;i++){
		a[i].DSkhacHangThanThiet();
	}
	
}

