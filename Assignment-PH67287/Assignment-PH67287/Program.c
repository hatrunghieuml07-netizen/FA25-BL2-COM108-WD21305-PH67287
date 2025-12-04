// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#define MAX 100
#include <stdlib.h>
#include <time.h>

void kiemTraSoNguyen()
{
	int x;

	system("cls");
	printf("Kiem tra so ngyen\n");
	printf("Nhap vao so x: \n");
	scanf_s("%d", &x);

	//kiem tra so Nguyen
	printf("So %d la so nguyen.\n", x);

	//kiem tra so nguyen to
	int i, laNguyenTo = 1;  

	if (x < 2)
		laNguyenTo = 0;    
	else {
		for (i = 2; i <= x - 1; i++) 
		{
			if (x % i == 0) 
			{
				laNguyenTo = 0; 
				break;
			}
		}
	}

	if (laNguyenTo == 1)
		printf("So %d la so nguyen to.\n", x);
	else
		printf("So %d khong phai la so nguyen to.\n", x);

	// kiem tra so chinh phuong
	int can = sqrt(x);     
	if (can * can == x)
		printf("So %d la so chinh phuong.\n", x);
	else
		printf("So %d khong phai la so chinh phuong.\n", x);
	
}

void timUocSoChungVaBoiSoChungNhoNhat2So()
{
	int x, y;

	system("cls");
	printf("Tim Uoc So Chung Va Boi So Chung Nho Nhat 2 So\n");
	printf("Nhap so nguyen x:\n ");
	scanf_s("%d", &x);

	printf("Nhap so nguyen y:\n ");
	scanf_s("%d", &y);

	int a = x, b = y;  
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	int uscln = a; 
	int bscnn = (x * y) / uscln;

	printf("Uoc so chung lon nhat (USCLN) = %d\n", uscln);
	printf("Boi so chung nho nhat (BSCNN) = %d\n", bscnn);
}

void tinhTienChoQuanKaraoke()
{
	int batDau, ketThuc, gio;
	float tien;


	system("cls");
	printf("Tinh tien quan karaoke\n");
	printf("Nhap gio bat dau (12-23):\n ");
	scanf_s("%d", &batDau);

	printf("Nhap gio ket thuc (12-23):\n ");
	scanf_s("%d", &ketThuc);

	if (batDau < 12 || batDau > 23 || ketThuc < 12 || ketThuc > 23 || ketThuc <= batDau)
	{
		printf("Gio nhap khong hop le!\n");

	}
	gio = ketThuc - batDau;
    tien = 0;

	if (gio <= 3) {
		// 3 gio dau
		tien = gio * 150000;
	}
	else {
		// 3 gio dau
		tien = 3 * 150000;

		// cac gio sau giam 30%
		tien = tien + (gio - 3) * (150000 * 0.7);
	}

	// giam 10% tu 14 den 17h
	if (batDau >= 14 && batDau <= 17) {
		tien = tien * 0.9;
	}
	printf("So gio su dung: %d\n", gio);
	printf("Tong tien: %.0f VND\n", tien);
}

void tinhTienDien()
{
	int kwh;
	float tien = 0;

	system("cls");
	printf("Tinh tien dien\n");
	// nguoi dung nhap
	printf("Nhap so kWh su dung:\n ");
	scanf_s("%d", &kwh);

	if (kwh <= 50)
	{
		tien = kwh * 1678;
	}
	else if (kwh <= 100)
	{
		tien = 50 * 1678 + (kwh - 50) * 1734;
	}
	else if (kwh <= 200)
	{
		tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
	}
	else if (kwh <= 300)
	{
		tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
	}
	else if (kwh <= 400)
	{
		tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
	}
	else
	{
		tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
	}

	printf("Tien dien phai tra: %.0f VND\n", tien);
}

void chucNangDoiTien()
{
	int tien;
	int menhgia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int soTo;

	system("cls");
	printf("Nhap vao so tien can doi: ");
	scanf("%d", &tien);

	printf("Ket qua doi tien:\n");

	for (int i = 0; i < 9; i++) 
	{
		soTo = tien / menhgia[i];
		if (soTo > 0) 
		{
			printf("%d to menh gia %d\n", soTo, menhgia[i]);
		}
		tien = tien % menhgia[i];
	}

}

void  chucNangTinhLaiSuat()
{
	double tien_vay;
	double lai_suat = 0.05;  // 5%/tháng
	double goc_moi_thang, so_du, lai, tong;
	system("cls");
	printf("Nhap so tien vay: ");
	scanf("%lf", &tien_vay);

	goc_moi_thang = tien_vay / 12;
	so_du = tien_vay;
	
	printf("\n=== BANG TRA GOP 12 THANG ===\n");
	printf("Thang\tGoc tra\t\tLai\t\tTong tra\tSo du con lai\n");

	for (int i = 1; i <= 12; i++) 
	{
		lai = so_du * lai_suat;
		tong = goc_moi_thang + lai;

		printf("%d\t%.0lf\t\t%.0lf\t\t%.0lf\t\t%.0lf\n",
			i, goc_moi_thang, lai, tong, so_du - goc_moi_thang);

		so_du -= goc_moi_thang;
	}
}

void chuongTrinhMuaXe()
{
	double giaXe = 500000000; // 500 trieu
	double phanTramVay;
	double tienVay, tienTraTruoc, tienTraHangThang;
	int namVay = 24;
	int soThang = namVay * 12;
	double laiSuatNam = 0.072; // 7.2%
	double laiSuatThang = laiSuatNam / 12; // 0.006/tháng
	int chon;


	system("cls");
	printf("Chuong trinh vay tien mua xe\n");
	printf("Nhap vao so phan tram vay toi da (VD: 80): ");
	scanf_s("%lf", &phanTramVay);

	tienVay = giaXe * (phanTramVay / 100.0);
	tienTraTruoc = giaXe - tienVay;
	tienTraHangThang = (tienVay * (1 + laiSuatThang * soThang)) / soThang;
	printf("\nTien tra truoc: %.0lf VND\n", tienTraTruoc);
	printf("Tien tra hang thang: %.0lf VND\n", tienTraHangThang);
	printf("Tong tien phai tra sau %d nam: %.0lf VND\n", namVay, tienTraHangThang * soThang + tienTraTruoc);
}

void chuongTrinhTroChoi()
{
	int soNguoiChon[2];
	int soMayTinh[2];
	int trung = 0;
	int chon;


	system("cls");
	// nguoi dung nhap
	printf("FPOLY-LOTT\n");
	printf("Nhap vao 2 so tu 01 den 15:\n");
	for (int i = 0; i < 2; i++) 
	{
		printf("So thu %d: ", i + 1);
		scanf_s("%d", &soNguoiChon[i]);
	if (soNguoiChon[i] < 1 || soNguoiChon[i] > 15) 
	{
		printf("So khong hop le! Vui long nhap tu 1 den 15.\n");
		i--;
	}
	}
	srand(time(NULL));
	soMayTinh[0] = rand() % 15 + 1;
	do {
		soMayTinh[1] = rand() % 15 + 1;
	} while (soMayTinh[1] == soMayTinh[0]); 
	for (int i = 0; i < 2; i++) {
		if (soNguoiChon[i] == soMayTinh[0] || soNguoiChon[i] == soMayTinh[1]) {
			trung++;
		}
	}
	printf("\nSo trung thuong: %02d %02d\n", soMayTinh[0], soMayTinh[1]);

	if (trung == 0) {
		printf("Chuc ban may man lan sau!\n");
	}
	else if (trung == 1) {
		printf("Chuc mung! Ban da trung giai nhi!\n");
	}
	else if (trung == 2) {
		printf("Chuc mung! Ban da trung giai nhat!\n");
	}
}

int UCLN(int a, int b)
{
	if (b == 0) return a;
	return UCLN(b, a % b);
}
void xayDungChuongTrinhToanPhanSo()
{
	int tu1, mau1, tu2, mau2;
	int tu, mau, u;
	int chon;

	system("cls");
	// phan so 1
	printf("Chuong trinh toan phan so\n");
	printf("Nhap phan so thu nhat:\n");
	printf("Tu so: ");
	scanf_s("%d", &tu1);
	do 
	{
		printf("Mau so (khac 0): ");
		scanf_s("%d", &mau1);
		if (mau1 == 0) printf("Mau so phai khac 0!\n");
	} while (mau1 == 0);

	// phan so 2
	printf("Nhap phan so thu hai:\n");
	printf("Tu so: ");
	scanf_s("%d", &tu2);
	do {
		printf("Mau so (khac 0): ");
		scanf_s("%d", &mau2);
		if (mau2 == 0) printf("Mau so phai khac 0!\n");
	} while (mau2 == 0);

	//tong
	tu = tu1 * mau2 + tu2 * mau1;
	mau = mau1 * mau2;
	u = UCLN(tu, mau);
	tu /= u;
	mau /= u;
	if (mau < 0) { tu = -tu; mau = -mau; }
	printf("Tong: %d/%d\n", tu, mau);

	// hieu
	tu = tu1 * mau2 - tu2 * mau1;
	mau = mau1 * mau2;
	u = UCLN(tu, mau);
	tu /= u;
	mau /= u;
	if (mau < 0) { tu = -tu; mau = -mau; }
	printf("Hieu: %d/%d\n", tu, mau);

	// tich
	tu = tu1 * tu2;
	mau = mau1 * mau2;
	u = UCLN(tu, mau);
	tu /= u;
	mau /= u;
	if (mau < 0) { tu = -tu; mau = -mau; }
	printf("Tich: %d/%d\n", tu, mau);

	// thuong
	tu = tu1 * mau2;
	mau = mau1 * tu2;
	u = UCLN(tu, mau);
	tu /= u;
	mau /= u;
	if (mau < 0) { tu = -tu; mau = -mau; }
	printf("Thuong: %d/%d\n", tu, mau);
}

void sinhVien()
{
	system("cls");
	printf("Sap Xep Thong Tin Sinh Vien\n");
	//nguoi dung nhap
	printf("Nhap ho ten sinh vien (Ko Dau): \n");
	char hoTen[100];
	getchar();
	fgets(hoTen, sizeof(hoTen), stdin);
	printf("Nhap diem sinh vien (1-10): \n");
	
	double diem;
	if (scanf("%lf", &diem) != 1) return;
	const char* hocLuc;
	if (diem >= 9.0)
		hocLuc = "Xuat sac";
	else if (diem >= 8.0)
		hocLuc = "Gioi";
	else if (diem >= 6.5)
		hocLuc = "Kha";
	else if (diem >= 5.0)
		hocLuc = "Trung binh";
	else
		hocLuc = "Yeu";
	printf("\nThong tin sinh vien:\n");
	printf("Ho ten: %s", hoTen);
	printf("Diem: %.2lf\n", diem);
	printf("Hoc luc: %s\n", hocLuc);
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			timUocSoChungVaBoiSoChungNhoNhat2So();
			break;
		case 3:
			tinhTienChoQuanKaraoke();
			break;
		case 4:
			tinhTienDien();
			break;
		case 5:
			chucNangDoiTien();
			break;
		case 6:
			chucNangTinhLaiSuat();
			break;
		case 7:
			chuongTrinhMuaXe();
			break;
		case 8:
			sinhVien();
			break;
		case 9:
			chuongTrinhTroChoi();
			break;
		case 10:
			xayDungChuongTrinhToanPhanSo();
			break;
		case 0:
			printf("Thoat\n");
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-10]");
			break;
		}
		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{


	int chonChucNang;
	do
	{
		printf_s("==========Menu==========\n");
		printf_s("1. Kiem tra so nguyen\n");
		printf_s("2. Tim uoc so chung va boi so chung nho nhat 2 so\n");
		printf_s("3. Tinh tien quan karaoke\n");
		printf_s("4. Tinh tien dien\n");
		printf_s("5. Chuc nang doi tien\n");
		printf_s("6. Chuc nang tinh lai suat ngan hang vay tra gop\n");
		printf_s("7. Xay dung chuong trinh vay tien mua xe\n");
		printf_s("8. Sap xep thong tin sinh vien\n");
		printf_s("9. Xay dung game FPOLY-LOTT (2/15)\n");
		printf_s("10. Xay dung chuong trinh toan phan so\n");
		printf_s("0. Thoat\n");
		printf("Hay chon chuc nang [0-10]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);

}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184