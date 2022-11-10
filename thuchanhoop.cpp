#include<bits/stdc++.h>
using namespace std;

class VDV{
	private:
		string ho,ten;
		int tuoi,hc;
	public:
		VDV(){
			ho,ten="";
			tuoi,hc=0;
		}
		friend istream& operator>> (istream& is, VDV &a){
			cout<<"nhap ho:";
			is>>a.ho;
			cout<<"nhap ten:";
			is>>a.ten;
			cout<<"nhap tuoi:";
			is>>a.tuoi;
			cout<<"nhap so huy chuong:";
			is >> a.hc;
			cout<<"\n";
			return is;
		}
		friend ostream& operator<< (ostream& os, VDV a){
			os << a.ho << setw(20)<<left<< a.ten << setw(20)<<left<< a.tuoi << setw(20)<<left<< a.hc << endl;
			return os ;
		}
		
		string getho(){
			return ho;
		}
		
		string getten(){
			return ten;
		}
		int gettuoi(){
			return tuoi;
		}
		int gethc(){
			return hc;
		}
		
		~VDV(){
			
		}
		
};

class VDVXEDAP : VDV{
	private:
		VDV* list;
		int n;
	public:
		VDVXEDAP(){
			
		}
		void nhapDS(){
			cout<<"nhap n:";
			cin>>n;
			list = new VDV[n+1];
			for(int i=0;i<n;i++){
				cout<<"Sinh vien thu"<<i+1<<endl;
				cin>>list[i];
			}
		}
		
		void xuatDS(){
			cout<<"Ho" << setw(20)<<left<< "Ten" << setw(20) <<left<< "Tuoi" << setw(20)<<left<< "Huy Chuong" << endl;
			for(int i=0;i<n;i++){
				cout<<list[i];
			}
		}
		
		double price(){
			int time;
			cout << "nhap thoi gian thi dau:";
			cin>>time;
			if(time<60){
				return (list->gethc() * 5000000)+(20/100)*(list->gethc() * 5000000);
			}
			return list->gethc() * 5000000;
		}
		int &operator*()
		{
			int dem = 0;
			for(int i=0;i<n;i++){
				if(list[i].getho()=="Nguyen"&&list[i].gettuoi()==18){
					dem++;
				}
			}
			return dem	;
		}
		void XoaPhanTu(){
    	int pos = 0;
    	if(n <= 0){
        	return;
    	}
    	
    	for(int i = pos; i < n - 1; i++){
       	 	list[i] = list[i+1];
    	}
    	--n;
		}
//		void sapxep(){
//			for(int i=0;i<n-1;i++){
//				for(int j=i+1;i<n;j++){
//					if(list[j]!=0&&list[i]<list[j]){
//						swap(list[i],list[j]);
//					}
//				}
//			}
//		}
		
		~VDVXEDAP(){
			
		}
};

int main(){
	VDV a;
	cin>>a;
	cout<<a;
	
}
