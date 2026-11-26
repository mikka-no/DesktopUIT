#include <iostream>
#include "Candidate.h"
using namespace std;

// Constructor mặc định
Candidate::Candidate() {
    maSo = "A001";
    hoTen = "Tran Van A";
    gioiTinh = true;          // true = Nam, false = Nu
    namSinh = 2000;
    dtb = 8.5;
}

// Constructor khi biết đủ 5 thông tin
Candidate::Candidate(string maSo, string hoTen, bool gioiTinh, int namSinh, float dtb) {
    this->maSo = maSo;
    this->hoTen = hoTen;
    this->gioiTinh = gioiTinh;
    this->namSinh = namSinh;
    this->dtb = dtb;
}

// Copy constructor: tạo thí sinh mới từ thí sinh đã có
Candidate::Candidate(const Candidate& candidate) {
    maSo = candidate.maSo;
    hoTen = candidate.hoTen;
    gioiTinh = candidate.gioiTinh;
    namSinh = candidate.namSinh;
    dtb = candidate.dtb;
}

// Destructor: lớp không tự cấp phát bộ nhớ nên không có gì phải dọn
Candidate::~Candidate() {}

void Candidate::input() {
    cout << "Nhap ma so: ";
    cin >> maSo;
    cout << "Nhap ho ten: ";
    getline(cin >> ws, hoTen);
    cout << "Gioi tinh (1-Nam, 0-Nu): ";
    cin >> gioiTinh;
    cout << "Nhap nam sinh: ";
    cin >> namSinh;
    do {
        cout << "Diem trung binh (0-10): ";
        cin >> dtb;
    } while (dtb < 0 || dtb > 10);
}

int Candidate::getTuoi() {
    return 2026 - namSinh;
}

void Candidate::output() {
    cout << "Ma so: " << maSo << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Gioi tinh: ";
    if (gioiTinh) cout << "Nam" << endl;
    else cout << "Nu" << endl;
    cout << "Nam sinh: " << namSinh << endl;
    cout << "Diem trung binh: " << dtb << endl;
    cout << "Tuoi: " << getTuoi() << endl;
}

int main() {
    Candidate st1;                                         
    st1.input();
    Candidate st2("TS002", "Le Thi B", false, 2007, 7.5);  
    Candidate st3(st2);                                   

    cout << "--- Thi sinh 1 ---" << endl;
    st1.output();
    cout << "--- Thi sinh 2 ---" << endl;
    st2.output();
    cout << "--- Thi sinh 3 ---" << endl;
    st3.output();
    return 0;
}