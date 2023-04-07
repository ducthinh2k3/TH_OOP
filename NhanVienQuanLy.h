#pragma once
#include "NhanVien.h"

class NhanVienQuanLy : public NhanVien
{
    private:
        double heSoChucVu, thuong;
    public:
        NhanVienQuanLy() : NhanVien()
        {
            heSoChucVu = thuong = 0;
        };
        NhanVienQuanLy(string hoTen, int nam, double luongCoBan, double heSoChuVu, double thuong) : NhanVien(hoTen, nam, luongCoBan)
        {
            this->heSoChucVu = heSoChucVu;
            this->thuong = thuong;
        };
        NhanVienQuanLy(double heSoChucVu)
        {
            this->heSoChucVu = heSoChucVu;
        };
        NhanVienQuanLy(double heSoChucVu, double thuong)
        {
            this->heSoChucVu = heSoChucVu;
            this->thuong = thuong;
        };
        NhanVienQuanLy(const NhanVienQuanLy& obj) : NhanVien(obj)
        {
            heSoChucVu = obj.heSoChucVu;
            thuong = obj.thuong;
        };
        ~NhanVienQuanLy();
        void Nhap();
        void Xuat();
        double tinhLuong();

};