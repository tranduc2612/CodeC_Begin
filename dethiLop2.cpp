#include<bits/stdc++.h>
using namespace std; 
class Nguoi{
private: 
    string name, age;
public:
    void nhap() {
        cin.ignore();
        cout <<"\nNhap ten: ";
        getline(cin, name);
        cout <<"Nhap tuoi: ";
        cin >> age;
    }
    void xuat() {
        cout << setw(20) << left << name << setw(5) << age;
    }
};
class NhanVien:public Nguoi {
private: 
    float hsl; // he so luong
    int loai;
public: 
    float tienluong() {
        float luong2;
        if(loai == 1) luong2 = 3;
        if(loai == 2) luong2 = 2;
        if(loai == 3) luong2 = 1;
        return 1.45*hsl + luong2;
    }
    void nhap() {
        Nguoi::nhap();
        cout << "Nhap he so luong: ";
        cin >> hsl;
        cout << "Nhap loai: ";
        cin >> loai;
    }
    void xuat() {
        Nguoi::xuat();
        cout << setw(5) << hsl << setw(5) << loai << setw(7) << tienluong() << "\n";
    }
};
int main() {
    NhanVien a[100];
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        a[i].nhap();
    }
    cout << "Danh sach nhan vien vua nhap vao la: \n";
    cout << setw(20) << left << "Ho ten" << setw(5) << "Tuoi" << setw(5) << "Hsl" << setw(5) << "Loai" << setw(7) << "Tien luong" << "\n";
    for(int i=0; i<n; i++) {
        a[i].xuat();
    }
    
    cout << "Nhan vien co tien luong duoc linh cao nhat la: \n";
    float max = -1;
    for(int i=0; i<n; i++) {
        if(a[i].tienluong() > max) max = a[i].tienluong();
    }
    if(max == -1) cout << "Khong co nhan vien nao";
    else {
        cout << setw(20) << left << "Ho ten" << setw(5) << "Tuoi" << setw(5) << "Hsl" << setw(5) << "Loai" << setw(7) << "Tien luong" << "\n";
        for(int i=0; i<n; i++) {
        	if(a[i].tienluong() == max) a[i].xuat();
        }
    }
}
