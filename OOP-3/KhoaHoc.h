//
// Created by Sử Nhật Hạ on 18/11/2026.
//

#ifndef DEMOCODEB04_KHOAHOC_H
#define DEMOCODEB04_KHOAHOC_H
#include <vector>

#include "Candidate.h"

enum ThuocTinh {
    MA_SO,
    HO_TEN,
    NAM_SINH,
    GIOI_TINH,
    DTB
};

class KhoaHoc {
    std::vector<Candidate*> dsThiSinh;
public:
    KhoaHoc();
    ~KhoaHoc();

    bool them(Candidate* candidate);
    Candidate* xoa(string maso);
    Candidate* xoa(Candidate* candidate);

    Candidate* timTheoMaSo(string maSoThiSinh);
    vector<Candidate*> timTheoHoTen(string hoTenThiSinh);
    vector<Candidate*> timTheoDTB(float dtb);

    void sapXep(ThuocTinh thuocTinh);

private:
    /*
        return -1 if c1 < c2
                0 if c1 == c2
                1 if c1 > c2
    */
    static int soSanh(Candidate* c1, Candidate* c2);
    static int soSanh(Candidate* c1, Candidate* c2, ThuocTinh thuocTinh);
};



#endif //DEMOCODEB04_KHOAHOC_H
