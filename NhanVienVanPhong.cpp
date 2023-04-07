#include "NhanVienVanPhong.h"

NhanVienVanPhong::~NhanVienVanPhong()
{
    cout << "Destructor con" << endl;
    soNgayLam = troCap = 0;
}

void NhanVienVanPhong::Xuat()
{
    NhanVien::Xuat();
    cout << "So ngay lam: " << soNgayLam << endl;
    cout << "Tro cap: " << troCap << endl;
}

void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap ngay lam: ";
    cin >> soNgayLam;
    cout << "Nhap tro cap: ";
    cin >> troCap;
    cin.ignore();
}

double NhanVienVanPhong::tinhLuong()
{
    return tinhLuongCoBan() + soNgayLam * 100000 + troCap;
}