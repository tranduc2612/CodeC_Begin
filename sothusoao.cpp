#include <bits/stdc++.h>
using namespace std;
class sophuc {
    private:
        double thuc, ao;
    public:
    	sophuc(){
		}
		sophuc(int a, int b){
			this->thuc = a;
			this->ao = b;
		}
        friend istream& operator>>(istream& is, sophuc &s)
        {
            is >> s.thuc >> s.ao;
            return is;
        }
        friend ostream& operator<<(ostream& os, sophuc s)
        {
        	if(s.thuc != 0)
            	os << s.thuc;
            if(s.ao != 0){
            	if (s.ao > 1)
                	os << " + " << s.ao << "i";
            	else if(s.ao == 1) os << " + i";
            	else if(s.ao < -1) os << " - " << abs(s.ao) << "i";
            	else os << " - i";
			}         
 
            return os;
        }
        sophuc operator + (sophuc &p){
        	sophuc kq;
        	kq.thuc = thuc + p.thuc;
        	kq.ao = ao + p.ao;
        return kq;
		}
		sophuc operator * (sophuc &p){
			sophuc kq(1,0);
			kq.thuc = thuc * p.thuc - ao * p.ao;
			kq.ao = thuc * p.ao + ao * p.thuc;
			return kq;
		}
};
class danhsach {
    private:
        sophuc *a;
        int n;
    public:
        danhsach()
        {
            a = NULL;
            n = 0;
        }
        danhsach(int n)
        {
            this->n = n;
            a = new sophuc[n];
        }
        friend istream& operator>>(istream& is, danhsach &d)
        {
            cout << "Nhap so phan tu: ";
            is >> d.n;
            d.a = new sophuc[d.n];
            for (int i = 0; i < d.n; i++)
            {
                cout << "Nhap so ao thu " << i+1 << ": ";
                is >> d.a[i];
            }
            return is;
        }
        friend ostream& operator<<(ostream& os, danhsach d)
        {
            os << "Danh sach so phuc vua nhap la: " << endl;
            for (int i = 0; i < d.n; i++)
            {
                os << d.a[i] << endl;
            }
            return os;
        }
        sophuc operator + (danhsach t){
        	sophuc kq;
        	for(int i=0;i< t.n ; i++){
        		kq = kq + t.a[i];
			}
			return kq;
		}
		sophuc operator * (danhsach t){
			sophuc kq(1,0);
			for(int i=0; i<n; i++){
				kq = kq * t.a[i];
			}
			return kq;
		}
};
int main(){
	danhsach x;
	cin >> x;
	cout << x;
	cout << "Tong: " << x.operator +(x) << endl;
	cout << "Tich: " << x.operator *(x);
	return 0;
}
