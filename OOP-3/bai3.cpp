#include <iostream>
#include <cmath>          // để dùng sqrt (căn) và pow (lũy thừa)
using namespace std;

class cDiem {
    float x;              // mỗi đối tượng cDiem là MỘT điểm, chỉ có x và y
    float y;
public:
    void nhap();
    void xuat();
    float khoangCach(const cDiem &b);   // khoảng cách từ điểm này tới điểm b
};

void cDiem::nhap() {
    cout << "Nhap x, y: ";
    cin >> x >> y;
}

void cDiem::xuat() {
    cout << "(" << x << ", " << y << ")";   // chỉ in tọa độ; "A", "B", "tâm" do nơi dùng tự ghi
}

float cDiem::khoangCach(const cDiem &b) {
    // x, y (viết trần) là của điểm GỌI hàm (A); b.x, b.y là của điểm truyền vào (B)
    return sqrt(pow(b.x - x, 2) + pow(b.y - y, 2));
}

int main() {
    cDiem A, B;                    // tạo 2 ĐỐI TƯỢNG, mỗi cái là một điểm
    cout << "Diem A - ";
    A.nhap();
    cout << "Diem B - ";
    B.nhap();

    cout << "A = "; A.xuat(); cout << endl;
    cout << "B = "; B.xuat(); cout << endl;
    cout << "Khoang cach AB = " << A.khoangCach(B) << endl;   // "A ơi, tính khoảng cách tới B"
    return 0;
}