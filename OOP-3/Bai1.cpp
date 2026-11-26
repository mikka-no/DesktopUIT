#include <iostream>
using namespace std;

class SinhVien {
    string hoTen;
    float diemToan;
    float diemVan;
public:
    void nhap();
    void xuat();
    float dtb();
    string xepLoai();
};
void SinhVien::nhap() {
    cout << "Nhap Ten sinh vien: ";
    getline(cin >> ws, hoTen);
    cout << "Nhap diem Toan: ";
    do {
        cin >> diemToan;
    } while (diemToan < 0 || diemToan > 10);
    cout << "Nhap diem Van: ";
    do {
        cin >> diemVan;
    } while (diemVan < 0 || diemVan > 10);
}

float SinhVien::dtb() {
    return (diemToan + diemVan)/2;
}

string SinhVien::xepLoai() {
    if (dtb() >= 8) return "Hoc sinh Gioi";
    else if (dtb() >= 6.5) return "Hoc sinh Kha";
    else if (dtb() >= 5) return "Hoc sinh Trung Binh";
    else return "Hoc sinh Yeu";
}

void SinhVien::xuat() {
    cout << "Ten sinh vien: " << hoTen << endl;
    cout << "Diem Toan: " << diemToan << endl;
    cout << "Diem Van: " << diemVan << endl;
    cout << "Diem trung binh: " << dtb() << endl;
    cout << "Xep loai: " << xepLoai();
    
}

int main() {
    SinhVien ab;
    ab.nhap();
    ab.xuat();
    return 0;
}



