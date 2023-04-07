#include "CongTy.h"

void CongTy::Nhap()
{
    cout << "--------- Quan li Nhan Vien ---------" << endl;
    cout << "0: ket thuc" << endl;
    cout << "1: NVVP" << endl;
    cout << "2: NVSX" << endl;
    cout << "3: NVQL" << endl;

    while (true)
    {
        int luaChon = 0, soLuongNVVP, soLuongNVSX, soLuongNVQL;
        do
        {
            cout << "Nhap lua chon: ";
            cin >> luaChon;
        } while (luaChon < 0 || luaChon > 3);

        switch (luaChon)
        {
        case 0:
            return;
        case 1:
            cout << "Nhap so luong sinh vien: ";
            cin >> soLuongNVVP;
            cin.ignore();
            for (int i = 0; i < soLuongNVVP; i++)
            {
                cout << endl;
                NhanVienVanPhong obj1;
                obj1.Nhap();
                dsNhanVienVP.push_back(obj1);
            }
            break;
        case 2:
            cout << "Nhap so luong sinh vien: ";
            cin >> soLuongNVSX;
            cin.ignore();
            for (int i = 0; i < soLuongNVSX; i++)
            {
                cout << endl;
                NhanVienSanXuat obj2;
                obj2.Nhap();
                dsNhanVienSX.push_back(obj2);
            }
            break;
        case 3:
            cout << "Nhap so luong sinh vien: ";
            cin >> soLuongNVQL;
            cin.ignore();
            for (int i = 0; i < soLuongNVQL; i++)
            {
                cout << endl;
                NhanVienQuanLy obj3;
                obj3.Nhap();
                dsNhanVienQL.push_back(obj3);
            }
            break;
        }
    }
}

void CongTy::Xuat()
{
    cout << endl
         << endl
         << "Danh sach nhan vien van phong" << endl;
    for (int i = 0; i < dsNhanVienVP.size(); i++)
    {
        dsNhanVienVP[i].Xuat();
        cout << endl;
    }

    cout << endl
         << endl
         << "Danh sach nhan vien san xuat" << endl;
    for (int i = 0; i < dsNhanVienSX.size(); i++)
    {
        dsNhanVienSX[i].Xuat();
    }

    cout << endl
         << endl
         << "Danh sach nhan vien van phong" << endl;
    for (int i = 0; i < dsNhanVienQL.size(); i++)
    {
        dsNhanVienQL[i].Xuat();
    }
}