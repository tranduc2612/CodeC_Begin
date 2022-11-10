#include<bits/stdc++.h>
using namespace std;
class Cauthu{
	private:
		int soao;
		string hoten;
		int ngay, thang, nam;
		float luong;
		float thoihan;
	public:
		int getSoao(){
			return soao;
		}
		void setLuong(float l){
			luong = l;
		}
		void Nhap()
		{
			cout<<"Nhap so ao:";
			cin>>soao;
			cout<<"Nhap ho ten:";
			fflush(stdin); 
			getline(cin, hoten); 
			cout<<"Nhap ngay thang nam sinh:";
			cin>>ngay>>thang>>nam;
			cout<<"Nhap luong:";
			cin>>luong;
			cout<<"Thoi han hop dong (nam):";
			cin>>thoihan;
		}
		void In(){
			cout<<soao<<"\t"<<hoten<<"\t"<<ngay<<"/"<<thang<<"/"<<nam<<"\t"<<luong<<"\t"<<thoihan;
		}
};
class CauLacBo{
	private:
		vector<Cauthu> v;
	public:
		void Them()
		{
			Cauthu c;
			c.Nhap();
			v.push_back(c);
		}
		void Xoa()
		{
			int so;
			cout<<"So ao cau thu can xoa:";
			cin>>so;
			vector<Cauthu>::iterator it = v.begin();
			for(;it!=v.end(); it++)
				if((*it).getSoao()==so)
				{
					v.erase(it);
					return;
				}
			cout<<"Khong tim thay";			
		}
		void CapNhatLuong()
		{
			int so;
			float lmoi;
			cout<<"So ao cau thu can thay doi luong:";
			cin>>so;
			cout<<"Luong moi:";
			cin>>lmoi;
			vector<Cauthu>::iterator it = v.begin();
			for(;it!=v.end(); it++)
				if((*it).getSoao()==so)
				{
					(*it).setLuong(lmoi);
					return;
				}
			cout<<"Khong tim thay cau thu so ao da nhap";			
		}
		void NhapDanhSachCauThu()
		{
			int n;
			cout<<"So cau thu:";
			cin>>n;
			for(int i=0;i<n;i++)
				Them();
		}
		void InThongTin1CauThu()
		{
			int so;
			cout<<"So ao cau thu can in:\n";
			cin>>so;
			vector<Cauthu>::iterator it = v.begin();
			for(;it!=v.end(); it++)
				if((*it).getSoao()==so)
				{
					(*it).In();
					return;
				}
			cout<<"Khong tim thay";
		}
		void InDanhSachCauThu()
		{
			cout<<"Danh sach cac cau thu cua cau lac bo \n";
			vector<Cauthu>::iterator it = v.begin();
			for(;it!=v.end(); it++)
			{
				cout<<"\n";
				(*it).In();
				
			}	
		}	
};
int main()
{
	CauLacBo c;
	int choise;
	do{
		cout<<"\n1. Them cau thu";
		cout<<"\n2. Xoa cau thu";
		cout<<"\n3. Cap nhat luong";
		cout<<"\n4. Nhap danh sach cau thu";
		cout<<"\n5. In thong tin 1 cau thu";
		cout<<"\n6. In danh sach cau thu";
		cout<<"\n7. Ket thuc";
		cout<<"\nNhap 1 so tu 1..7 de chon chuc nang:";
		cin>>choise;
		switch(choise){
			case 1:
				c.Them();
				break;
			case 2:
				c.Xoa();
				break;
			case 3:
				c.CapNhatLuong();
				break;
			case 4:
				c.NhapDanhSachCauThu();
				break;
			case 5:
				c.InThongTin1CauThu();
				break;
			case 6:
				c.InDanhSachCauThu();
				break;
		}	
		
	}while(choise!=7);
}
