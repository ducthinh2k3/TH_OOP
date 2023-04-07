#pragma once
#include "NhanVienVanPhong.h"
#include "NhanVienQuanLy.h"
#include "NhanVienSanXuat.h"
#include <vector>

class CongTy
{
    private:
        vector<NhanVienVanPhong> dsNhanVienVP;
        vector<NhanVienSanXuat> dsNhanVienSX;
        vector<NhanVienQuanLy> dsNhanVienQL;
    public:
        void Nhap();
        void Xuat();
        double tinhLuong();
};