#pragma once
#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien
{
private:
    int soNgayLam;
    double troCap;

public:
    NhanVienVanPhong() : NhanVien()
    {
        cout << "Default constructor con" << endl;
        soNgayLam = troCap = 0;
    };
    NhanVienVanPhong(string hoTen, int nam, double luongCoBan, int soNgayLam, double troCap) : NhanVien(hoTen, nam, luongCoBan)
    {
        cout << "Full constructor con" << endl;
        this->soNgayLam = soNgayLam;
        this->troCap = troCap;
    };
    NhanVienVanPhong(int soNgayLam)
    {
        cout << "One constructor con int" << endl;
        this->soNgayLam = soNgayLam;
    };
    NhanVienVanPhong(double troCap)
    {
        cout << "One constructor con double" << endl;
        this->troCap = troCap;
    };
    NhanVienVanPhong(const NhanVienVanPhong &obj) : NhanVien(obj)
    {
        cout << "Copy constructor con" << endl;
        soNgayLam = obj.soNgayLam;
        troCap = obj.troCap;
    };
    ~NhanVienVanPhong();
    void Xuat();
    void Nhap();
    double tinhLuong();
};
