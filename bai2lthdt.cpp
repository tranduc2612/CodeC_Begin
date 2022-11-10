#include <bits/stdc++.h>
using namespace std;
class MonHoc
{
private:
    string maMon;
    string tenMon;
    int soTinChi;

public:
    MonHoc()
    {
        maMon = "";
        tenMon = "";
        soTinChi = 0;
    }
    MonHoc(const string &maMon, const string &tenMon, const int &soTinChi)
    {
        this->maMon = maMon;
        this->tenMon = tenMon;
        this->soTinChi = soTinChi;
    }
    void nhap()
    {
        cout << "Nhap ma mon hoc:";
        getline(cin, maMon);
        cout << "Nhap ten mon hoc";
        cin.ignore();
        getline(cin, tenMon);
        cout << "Nhap so tin chi: ";
        cin >> soTinChi;
    }
    void xuat()
    {
        cout << "Ma mon hoc: " << maMon << endl;
        cout << "Ten mon: " << tenMon << endl;
        cout << "So tin chi: " << soTinChi << endl;
    }
    int getSoTinChi() const
    {
        return soTinChi;
    }
    string getMaMonHoc()
    {
        return maMon;
    }
};
class DKHP
{
private:
    string maSV;
    string tenSV;
    int soMon;
    MonHoc *mh;

public:
    DKHP()
    {
        maSV = "";
        tenSV = "";
        soMon = 0;
        mh = nullptr;
    }
    DKHP(const string &maSV, const string &tenSV, const int &soMon, MonHoc *mh)
    {
        this->maSV = maSV;
        this->tenSV = tenSV;
        this->soMon = soMon;
        mh = new MonHoc[soMon];
        for (int i = 0; i < soMon; i++)
        {
            this->mh[i] = mh[i];
        }
    }
    void nhap()
    {
        cout << "Nhap ma sinh vien: ";
        getline(cin, maSV);
        cout << "Nhap ten sinh vien: ";
        cin.ignore();
        getline(cin, tenSV);
        cout << "Nhap so mon dang ky: ";
        cin >> soMon;
        cout << "Nhap danh sach cach mon: ";
        for (int i = 0; i < soMon; i++)
        {
            this->mh[i].nhap();
        }
    }
    int getTongTinChi()
    {
        int sum = 0;
        for (int i = 0; i < soMon; i++)
        {
            sum += mh[i].getSoTinChi();
        }
        return sum;
    }
    bool timMonHoc(const string &maMonHoc)
    {
        bool found = false;
        for (int i = 0; i < soMon; i++)
        {
            if (mh[i].getMaMonHoc() == maMonHoc)
            {
                found = true;
                break;
            }
        }
        return found;
    }
};
int main(int argc, char const *argv[])
{
    int m;
    cout << "Nhap m: ";
    cin >> m;
    MonHoc *mh = new MonHoc[m];
    for (int i = 0; i < m; i++)
    {
        mh[i].nhap();
    }
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    DKHP *sv = new DKHP[n];
    cout << "Nhap danh sach dang ky hoc phan cua " << n << " sinh vien:" << endl;
    for (int i = 0; i < n; i++)
    {
        sv[i].nhap();
    }
    cout << "Tong so tin chi da dang ky cua tung sinh vien: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "sinh vien thu " << i << ": " << sv[i].getTongTinChi() << endl;
    }
    string maMonHoc;
    cin.ignore();
    cout << "Nhap vao ma mon hoc can tim: ";
    getline(cin, maMonHoc);
    int soSVDK = 0;
    for (int i = 0; i < n; i++)
    {
        if (sv[i].timMonHoc(maMonHoc))
        {
            soSVDK += 1;
        }
    }
    cout << "So sinh vien dang ky mon hoc co ma mon hoc " << maMonHoc << " la " << soSVDK << endl;
    delete[] mh;
    return 0;
}

