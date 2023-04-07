#include "NhanVienQuanLy.h"

NhanVienQuanLy::~NhanVienQuanLy()
{
    heSoChucVu = thuong = 0;
}

void NhanVienQuanLy::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap he so chuc vu: ";
    cin >> heSoChucVu;
    cout << "Nhap tien thuong: ";
    cin >> thuong;
    cin.ignore();
}

void NhanVienQuanLy::Xuat()
{
    NhanVien::Xuat();
    cout << "He so chuc vu: " << heSoChucVu << endl;
    cout << "Tien thuong: " << thuong << endl;
}

double NhanVienQuanLy::tinhLuong()
{
    return tinhLuongCoBan() * heSoChucVu + thuong;
}