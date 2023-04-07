#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
private:
    int soSanPham;

public:
    NhanVienSanXuat() : NhanVien()
    {
        soSanPham = 0;
    };
    NhanVienSanXuat(string hoTen, int nam, double luongCoBan, int soSanPham) : NhanVien(hoTen, nam, luongCoBan)
    {
        this->soSanPham = soSanPham;
    };
    NhanVienSanXuat(int soSanPham)
    {
        this->soSanPham = soSanPham;
    };
    NhanVienSanXuat(string hoTen, int soSanPham) : NhanVien(hoTen)
    {
        this->soSanPham = soSanPham;
    };
    NhanVienSanXuat(const NhanVienSanXuat &obj) : NhanVien(obj)
    {
        this->soSanPham = obj.soSanPham;
    };
    ~NhanVienSanXuat();
    void Nhap();
    void Xuat();
    double tinhLuong();
};