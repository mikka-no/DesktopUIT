//
// Created by Sử Nhật Hạ on 18/11/2026.
//

#ifndef DEMOCODEB04_CANDIDATE_H
#define DEMOCODEB04_CANDIDATE_H

#include <string>

using namespace std;

class Candidate {
    string maSo;
    string hoTen;
    bool gioiTinh;
    int namSinh;
    float dtb;

public:
    Candidate();
    Candidate(
        string maSo,
        string hoTen,
        bool gioiTinh,
        int namSinh,
        float dtb);
    Candidate(const Candidate& candidate);
    virtual ~Candidate();

    void input();
    void output();
    int getTuoi();

    friend istream& operator>>(istream& is, const Candidate& candidate);
    friend ostream& operator<<(ostream& os, const Candidate& candidate);
};


#endif //DEMOCODEB04_CANDIDATE_H
