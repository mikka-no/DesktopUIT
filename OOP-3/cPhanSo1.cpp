#include <iostream>
using namespace std;

class cPhanSo {
private:
    int tu;
    int mau;

public:
    cPhanSo();
    cPhanSo(int tu, int mau);
    cPhanSo(int n);
    void nhap();
    void xuat();
    cPhanSo tong(const cPhanSo &b);
    cPhanSo hieu(const cPhanSo &b);
    cPhanSo tich(const cPhanSo &b);
    cPhanSo thuong(const cPhanSo &b);
};

cPhanSo::cPhanSo() {
    tu = 0;
    mau = 1;
}

cPhanSo::cPhanSo(int tu, int mau) {
    this->tu = tu;
    if (mau == 0) this->mau = 1;
    else this->mau = mau;
}

cPhanSo::cPhanSo(int n) {
    tu = n;
    mau = 1;
}

void cPhanSo::nhap() {
    cout << "Nhap tu: ";
    cin >> tu;
    do {
        cout << "Nhap mau: ";
        cin >> mau;
    } while (mau == 0);
}

void cPhanSo::xuat() {
    cout << tu << "/" << mau;
}

cPhanSo cPhanSo::tong(const cPhanSo &b) {
    cPhanSo kq;
    kq.tu = (tu*b.mau + b.tu*mau);
    kq.mau = mau*b.mau;
    return kq;
}

cPhanSo cPhanSo::hieu(const cPhanSo &b) {
    cPhanSo kq;
    kq.tu = (tu*b.mau - b.tu*mau);
    kq.mau = mau*b.mau;
    return kq;
}

cPhanSo cPhanSo::tich(const cPhanSo &b) {
    cPhanSo kq;
    kq.tu = tu*b.tu;
    kq.mau = mau*b.mau;
    return kq;
}

cPhanSo cPhanSo::thuong(const cPhanSo &b) {
    cPhanSo kq;                          // kq = 0/1
    if (b.tu == 0) {                     // b bằng 0 (ví dụ 0/5) → không chia được
        cout << "Loi: khong chia duoc cho 0" << endl;
        return kq;                       // trả 0/1 và thoát hàm ngay
    }
    kq.tu  = tu * b.mau;                 // chỉ chạy tới đây khi b.tu khác 0
    kq.mau = mau * b.tu;
    return kq;
}


int main() {
    cPhanSo a(1,2);
    cPhanSo b;
    b.nhap();
    cPhanSo c = a.tong(b);
    cout << "Tong cua 2 phan so la: ";
    c.xuat();
    return 0;
}