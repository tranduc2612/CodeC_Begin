#include<bits/stdc++.h> 

using namespace std;


class Sinhvien {
private:
	string ten,gioitinh ;
	int sbd; 
	int toan, ly, hoa;
	int tongdiem;
	int namsinh; 
public:
	void Nhap() {
		cout<< "So bao danh: ";
		cin>>sbd; 
		cout<< "Ho va ten: ";
		cin.ignore();
		getline(cin, ten);
		cout<< "Gioi tinh: ";
		getline(cin, gioitinh);
		cout << "Nam sinh: ";
		cin >> namsinh; 
		cout << "Diem mon toan: ";
		cin >> toan;
		cout << "Diem mon ly: ";
		cin >> ly;
		cout << "Diem mon hoa: ";
		cin >> hoa;
		tinhdiem();
	}
	void Xuat() {
		cout << "So bao danh : " << sbd << " Ban: " << ten;
		cout << "\nGioi tinh: "<< gioitinh ;
		cout<< "\nSinh nam: " << namsinh;
		cout << "\nDiem 3 mon toan, ly, hoa la: " << toan << ";" << ly << ";" << hoa ; 
		cout << "\nCo tong diem la: " << tongdiem;
	}
	void tinhdiem() {
	  	tongdiem = toan + ly + hoa;
	}
};
int main() {
	int n;
	cout<< "Nhap n = "; 
	Sinhvien HG[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		HG[i].Nhap();
	}
	for (int i = 0; i < n; i++) {
		HG[i].Xuat();
	}
	for (int i = 0; i < n; i++) {
		HG[i].tinhdiem();
	}
}
