#include "NhanVien.h"

NhanVien::NhanVien()
{
    cout << "Default constructor cha" << endl;
    hoTen = "";
    nam = 1;
    luongCoBan = 0;
}

NhanVien::NhanVien(string hoTen, int nam, double luongCoBan)
{
    cout << "Full constructor cha" << endl;
    this->hoTen = hoTen;
    this->nam = nam;
    this->luongCoBan = luongCoBan;
}

NhanVien::NhanVien(string hoTen)
{
    cout << "One para constructor cha" << endl;
    this->hoTen = hoTen;
}

NhanVien::NhanVien(int nam, double luongCoBan)
{
    cout << "Two para constructor cha" << endl;
    this->nam = nam;
    this->luongCoBan = luongCoBan;
}

NhanVien::NhanVien(const NhanVien &obj)
{
    cout << "Copy constructor cha" << endl;
    this->hoTen = obj.hoTen;
    this->nam = obj.nam;
    this->luongCoBan = obj.luongCoBan;
}

NhanVien::~NhanVien()
{
    cout << "Destructor cha" << endl;
    hoTen = "";
    nam = 1;
    luongCoBan = 0;
}

void NhanVien::Nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap nam vao lam: ";
    cin >> nam;
    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << hoTen << endl;
    cout << "Nam vao lam: " << nam << endl;
    cout << "Luong co ban: " << luongCoBan << endl;
}

double NhanVien::tinhLuongCoBan()
{
    return luongCoBan;
}
