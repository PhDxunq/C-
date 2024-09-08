#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int nhietDo = 37;
	int* controT; // khai bao con tro
	controT = &nhietDo; // gan dia chi cua bien vao con tro
	cout << "Dia chi cua con tro: "<< controT <<endl; // Dia chi cua con tro
	cout << "Gia tri cua con tro: " << *controT << endl; //Gia tri cua con tro dung *ten bien
	*controT = 38; // Gia tri cua con tro
	cout << "Gia tri cua con tro: " << *controT << endl;
	//Con tro va Mang
	
	int mang[] = {1,2,3,4,5};
	int* conTroM;
	conTroM = mang;
	//Duyet Mang 1 chieu
	for (int i = 0; i < sizeof(mang)/sizeof(int); i++){
		cout<< *(conTroM + i) << " "; 
		// Dung *(conTroM + i) de lay gia tri
	}
	cout << endl;
	//Mang 2 chieu
	
	const int dong =3;
	const int cot = 4;
	
	int** conTroCapHai = new int* [dong]; //
	for ( int i = 0; i < dong; i++){
		// Di Chuyen con tro ben trong de cap phat bo nho
		*(conTroCapHai + i) = new int[cot];
	}
	
	//Xuat dia chi 
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << &conTroCapHai[i][j] << " ";
		}
		cout << endl;
	}
	//Xuat gia tri
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << conTroCapHai[i][j] << " ";
		}
		cout << endl;
	}
	
	//Mang Ky Tu
	
	char* chuoi = new char[51]; // Chua vi tri cuoi cho null
	
	//Nhap xuat chuoi: su dung cin.getlin(<tenmang>,soluong chuoi)
	
	const int max = 15;
	char chuoi3[max];
	cout << "Nhap vao chuoi: ";
	cin.getline(chuoi3,max);
	cout << "Ten chuoi: " << chuoi3 <<endl;
	
	cin.clear(); // xoa trang thai loi
	//Su dung con tro
	char* chuoi4 = new char[max];
	cout << "Nhap vao chuoi: ";
	cin.getline(chuoi4,max);
	cout << "Ten chuoi: " << chuoi4 <<endl;
	//Sao chep mang ki tu
	// strcpy_s(<chuoi dich>, <sizeof(<chuoi dich>)>, <chuoi muon sao chep>);
	// strncpy_s(<chuoi dich>, <sizeof(<chuoi dich>)>, <chuoi muon sao chep>, <so ki tu muon sao chep>);
	// Noi chuoi
	// strcat_s(str1, str2)// noi chuoi 2 vao chuoi 1
	// strncat_s(str1, sizeof(str1), str2, <so luong ki tu>)
	// Tim kiem ky tu
	// strchr(str, kyTuMuonTim) 
	// Tim kiem chuoi
	// strstr(str1, str2)
	// So sanh chuoi
	// strcmp(str1,str2)
	// 0 neu str1 = str2
	// 1 neu str1 > str2
	// -1 neu str1 < str2
	// strncmp(str1,str2, n) so san n ky tu
}
