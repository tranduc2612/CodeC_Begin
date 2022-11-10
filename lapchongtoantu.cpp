#include<bits/stdc++.h>
using namespace std;
class VDV{
	private:
		string name;
		int age;
	public:
		VDV(){
			name = "";
			age = 0;	
		}
		void nhap(){
			cout<<"nhap ten:";
			fflush(stdin);
			getline(cin,name);
			cout<<"nhap tuoi:";
			cin>>age;
		}
		void in(){
			cout<<name<<setw(20)<<age;
		}
		~VDV(){
			name = "";
			age = 0;	
		}
};

class VDVBOI{
	private:
		VDV* list;
		int n;
//		float achiv;
	public:
		friend istream& operator>>(istream& is, VDVBOI& z){
			cout<<"nhap n:";
			is>>z.n;
			z.list = new VDV[z.n+1];
			for(int i=0;i<z.n;i++){
				cout<<"Van dong vien thu "<<i+1<<"\n";
				z.list[i].nhap();
//				cout<<"Nhap thanh tich:";
//				cin>>z.list[i].achiv;
			}
			return is;
		}
		friend ostream& operator<<(istream& os, VDVBOI& z){
			cout<<"ten"<<setw(20)<<"tuoi"<<setw(10)<<"thanh tich"<<endl;
			for(int i=0;i<z.n;i++){
				os << z.list[i].in();
//				cout<<setw(10)<<achiv<<endl;
			}
			return os;
		}
		
};



int main(){
	VDVBOI a;
	cin>>a;
	cout<<a;
}
