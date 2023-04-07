#include "NhanVienSanXuat.h"

NhanVienSanXuat::~NhanVienSanXuat()
{
    soSanPham = 0;
}

void NhanVienSanXuat::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so san pham: ";
    cin >> soSanPham;
    cin.ignore();
}

void NhanVienSanXuat::Xuat()
{
    NhanVien::Xuat();
    cout << "So san pham: " << soSanPham << endl;
}

double NhanVienSanXuat::tinhLuong()
{
    return tinhLuongCoBan() + soSanPham*2000;
}