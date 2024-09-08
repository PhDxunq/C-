#include <iostream>
#include <cstring>
using namespace std;

struct DiaChi
{
	char SoNha[25]; // Thuoc tinh
	char TenDuong[250];
	char TinhThanh[25];
};

struct SinhVien
{
	char MaSV[10];
	char TenSV[255];
//	DiaChi DiaChiNha;
//	DiaChi DiaChiTruong;
} sv1, sv2;// bien cau truc(doi tuong)

void NhapMang(SinhVien ds[], int total){
	for(int i = 0 ; i < total; i++){
		cout<< "Nhap Sinh Vien thu [" << i + 1 <<"]" << endl;
		cout<<"Nhap MaSV: ";
		cin >> ds[i].MaSV;
		// xoa bo nho dem
		cin.clear();
		cout<<"Nhap TenSV: ";
		cin >> ds[i].TenSV;
		cin.clear();
	} 
}

void XuatMang(SinhVien ds[], int total){
	for(int i = 0 ; i < total; i++){
		cout << ds[i].MaSV << "\t" << ds[i].TenSV <<endl;
	}
}
int main(){
	//Tao doi cua struct
	SinhVien sv3;
	SinhVien sv4;
	cin.getline(sv3.MaSV,10);
	cin.getline(sv3.TenSV,255);
	cout << "Ma SV: " << sv3.MaSV << endl;
	cout << "TenSV: " << sv3.TenSV << endl;
	
	//Mang Cau truc
	// Su dung "." de truy cap thuoc tinh
	const int total = 4;
	SinhVien ds[total];
	NhapMang(ds,total);
	XuatMang(ds,total);
	
	//Pointer Struct
	//Khoi tao doi tuong
	SinhVien* psv2 = new SinhVien; // khai bao con tro
	//Gan Gia tri
	strcpy(psv2->MaSV, "2");
	strcpy(psv2->TenSV, "Abvs");
	//Truy cap den thuoc tinh su dung "->"
	
	cout << "Ma psv2 la: " << psv2->MaSV << endl;
	cout << "TenSV: " << psv2->TenSV << endl;
}
