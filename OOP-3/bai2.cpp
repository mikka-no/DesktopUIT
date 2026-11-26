#include <iostream>
using namespace std;

class cDiem {
    float x;
    float y;
public:
    void nhap();
    void xuat();
};

class cDuongTron {
    cDiem tam;
    float r;
public:
    void nhap();
    void xuat();
    float chuVi();
    float dienTich();
};

void cDiem::nhap() {
    cout << "Nhap x, y: ";
    cin >> x >> y; 
}

void cDiem::xuat() {
    cout << "Toa do tam la: " << "(" << x << ", " << y << ")";
}

void cDuongTron::nhap() {
    tam.nhap();
    cout << "Nhap ban kinh: ";
    do {
        cin >> r;
    } while (r <= 0);
}

float cDuongTron::chuVi() {
    return 2 * 3.14 * r;
}

float cDuongTron::dienTich() {
    return 3.14 * r * r;
}

void cDuongTron::xuat() {
    cout << "Toa do tam: ";
    tam.xuat();
    cout << endl;
    cout << "Ban Kinh: " << r << endl;
    cout << "Chu Vi: " << chuVi() << endl;
    cout << "Dien tich: " << dienTich() << endl;
}

int main() {
    cDuongTron c;
    c.nhap();
    c.xuat();
    return 0;
}