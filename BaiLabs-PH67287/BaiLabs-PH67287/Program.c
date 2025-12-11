// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>

void thongTinThuCung()
{
	char maThuCung[50];
	char tenThuCung[10];
	int namSinh;
	printf("Nhap ma thu cung: ");
	scanf_s("%s", maThuCung, sizeof(maThuCung));
	printf("Nhap ten thu cung: ");
	scanf_s("%s", tenThuCung, sizeof(tenThuCung));
	printf("Nhap nam sinh: ");
	scanf_s("%d", &namSinh);
	printf("\n=== Thong tin mon hoc ===\n");
	printf("Ma thu cung: %s\n", maThuCung);
	printf("Ten thu cung %s\n", tenThuCung);
	printf("Nam sinh: %d\n", namSinh);
	printf("Tuoi thu cung: %d\n", 2025 - namSinh);
}

void tinhTong()
{
	system("cls");
	int n;
	do {
		printf("Nhap so nguyen duong n (n > 3): ");
		scanf("%d", &n);
	} while (n <= 3);
	int tong = 0;
	for (int i = 1; i <= n; i += 2)
	{
		tong += i;
	}
	printf("\nTong cac so le tu 1 den %d la: %d\n", n, tong);
	if (n % 5 == 0)
	{
		printf("So %d chia het cho 5.\n", n);
	}
	else
	{
		printf("So %d KHONG chia het cho 5.\n", n);
	}
}

void thongTinCuaHang()
{

}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongTinThuCung();
			break;
		case 2:
			tinhTong();
			break;
		case 3:
			thongTinCuaHang();
			break;
		case 0:
			printf("Thoat\n");
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3] \n");
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
		printf_s("1. Thong tin thu cung\n");
		printf_s("2. Tinh tong\n");
		printf_s("3. Thong tin cua hang\n");
		printf_s("0. Thoat\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf_s("%d", &chonChucNang);
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