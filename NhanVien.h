#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
    private:
        string hoTen;
        int nam;
        double luongCoBan;
    public:
        NhanVien();
        NhanVien(string hoTen, int nam, double luongCoBan);
        NhanVien(string hoTen);
        NhanVien(int nam, double luongCoBan);
        NhanVien(const NhanVien &obj);
        ~NhanVien();
        void Nhap();
        void Xuat();
        double tinhLuongCoBan();
};