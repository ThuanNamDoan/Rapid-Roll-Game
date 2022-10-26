#include <stdio.h>

#include "rapid.h"
#include "screen.h"

void quaBong(char a[][max], int hang, int cot)
{
	a[hang][cot] = 'O';
}

void thanhNgangKhongGai(char a[][max], int hang, int cot)
{
	char s[max];

	for (int i = 0; i < doDaiThanhNgang; i++)
		s[i] = char(205);
	s[doDaiThanhNgang] = '\0';

	chenChuoi(a, s, hang, cot);
}

void thanhNgangCoGai(char a[][max], int hang, int cot)
{
	char s[max];

	for (int i = 0; i < doDaiThanhNgang; i++)
		s[i] = char(207);
	s[doDaiThanhNgang] = '\0';

	chenChuoi(a, s, hang, cot);
}

void khungTroChoi(char a[][max])
{
	diChuyen(-2, -2);

	a[0][0] = char(201);
	a[0][chieuRongKhungTroChoi - 1] = char(187);
	a[chieuDaiKhungTroChoi - 1][0] = char(200);
	a[chieuDaiKhungTroChoi - 1][chieuRongKhungTroChoi - 1] = char(188);

	for (int i = 1; i < chieuRongKhungTroChoi - 1; i++)
		a[0][i] = char(205);
	for (int i = 1; i < chieuRongKhungTroChoi - 1; i++)
		a[chieuDaiKhungTroChoi - 1][i] = char(207);

	for (int i = 1; i < chieuDaiKhungTroChoi - 1; i++)
		a[i][0] = char(186);
	for (int i = 1; i < chieuDaiKhungTroChoi - 1; i++)
		a[i][chieuRongKhungTroChoi - 1] = char(186);

	for (int i = 1; i < chieuDaiKhungTroChoi - 1; i++)
		for (int j = 1; j < chieuRongKhungTroChoi - 1; j++)
			a[i][j] = char(32);
}

void bangChonTroChoi(int x, int y, int diemCao1, int diemCao2, int diemCao3)
{
	tenTroChoi(x, 5 + y);
	bieuTuongTroChoi(7 + x, 27 + y);

	char a[max][max];

	a[0][0] = char(201);
	a[0][chieuDaiBangChonTroChoi - 1] = char(187);
	a[chieuRongBangChonTroChoi - 1][0] = char(200);
	a[chieuRongBangChonTroChoi - 1][chieuDaiBangChonTroChoi - 1] = char(188);

	for (int i = 1; i < chieuDaiBangChonTroChoi - 1; i++)
		a[0][i] = char(205);
	for (int i = 1; i < chieuDaiBangChonTroChoi - 1; i++)
		a[chieuRongBangChonTroChoi - 1][i] = char(205);

	for (int i = 1; i < chieuRongBangChonTroChoi - 1; i++)
		a[i][0] = char(186);
	for (int i = 1; i < chieuRongBangChonTroChoi - 1; i++)
		a[i][chieuDaiBangChonTroChoi - 1] = char(186);

	for (int i = 1; i < chieuRongBangChonTroChoi - 1; i++)
		for (int j = 1; j < chieuDaiBangChonTroChoi - 1; j++)
			a[i][j] = char(32);

	chenMangHaiChieuKiTu(a, chieuRongBangChonTroChoi, chieuDaiBangChonTroChoi, 14 + x, y, true);

	diChuyen(16 + x, 1 + y);
	printf("        TRO CHOI MOI");
	diChuyen(17 + x, 1 + y);
	printf("         nhan phim a");
	diChuyen(19 + x, 1 + y);
	printf("     HUONG DAN TRO CHOI");
	diChuyen(20 + x, 1 + y);
	printf("   sang trai: nhan phim j");
	diChuyen(21 + x, 1 + y);
	printf("   sang phai: nhan phim l");
	diChuyen(23 + x, 1 + y);
	printf("        DIEM CAO NHAT");
	diChuyen(24 + x, 1 + y);
	printf("           %5d", diemCao1);
	diChuyen(25 + x, 1 + y);
	printf("           %5d", diemCao2);
	diChuyen(26 + x, 1 + y);
	printf("           %5d", diemCao3);
	diChuyen(29 + x, 1 + y);
	printf("            THOAT");
	diChuyen(30 + x, 1 + y);
	printf("        nham phim Esc");
}

void bangChonKetThuc(int x, int y, int diemHienTai, int diemCao1, int diemCao2, int diemCao3)
{
	tenTroChoi(x, 5 + y);
	bieuTuongTroChoi(7 + x, 27 + y);

	char a[max][max];

	a[0][0] = char(201);
	a[0][chieuDaiBangChonTroChoi - 1] = char(187);
	a[chieuRongBangChonTroChoi - 1][0] = char(200);
	a[chieuRongBangChonTroChoi - 1][chieuDaiBangChonTroChoi - 1] = char(188);

	for (int i = 1; i < chieuDaiBangChonTroChoi - 1; i++)
		a[0][i] = char(205);
	for (int i = 1; i < chieuDaiBangChonTroChoi - 1; i++)
		a[chieuRongBangChonTroChoi - 1][i] = char(205);

	for (int i = 1; i < chieuRongBangChonTroChoi - 1; i++)
		a[i][0] = char(186);
	for (int i = 1; i < chieuRongBangChonTroChoi - 1; i++)
		a[i][chieuDaiBangChonTroChoi - 1] = char(186);

	for (int i = 1; i < chieuRongBangChonTroChoi - 1; i++)
		for (int j = 1; j < chieuDaiBangChonTroChoi - 1; j++)
			a[i][j] = char(32);

	chenMangHaiChieuKiTu(a, chieuRongBangChonTroChoi, chieuDaiBangChonTroChoi, 14 + x, 0 + y, true);

	diChuyen(16 + x, 1 + y);
	printf("       CHUC MUNG BAN!");
	diChuyen(18 + x, 1 + y);
	printf("      DIEM CUA BAN: %d", diemHienTai);
	diChuyen(20 + x, 1 + y);
	printf("        TRO CHOI MOI");
	diChuyen(21 + x, 1 + y);
	printf("         nhan phim a");
	diChuyen(23 + x, 1 + y);
	printf("        DIEM CAO NHAT");
	diChuyen(24 + x, 1 + y);
	printf("           %5d", diemCao1);
	diChuyen(25 + x, 1 + y);
	printf("           %5d", diemCao2);
	diChuyen(26 + x, 1 + y);
	printf("           %5d", diemCao3);
	diChuyen(29 + x, 1 + y);
	printf("            THOAT");
	diChuyen(30 + x, 1 + y);
	printf("        nham phim Esc");
}

void xoaThanhNgang(char a[][max], int hang, int cot)
{
	for (int i = 0; i < doDaiThanhNgang; i++)
		a[hang][cot + i] = char(32);
}

void xoaQuaBong(char a[][max], int hang, int cot)
{
	a[hang][cot] = char(32);
}

void bangGhi(int x, int y, int diem, int luotChoi)
{
	tenTroChoi(x, y);
	doiMau(7);

	char a[max][max];

	a[0][0] = char(201);
	a[0][chieuDaiBangGhi - 1] = char(187);
	a[chieuRongBangGhi - 1][0] = char(200);
	a[chieuRongBangGhi - 1][chieuDaiBangGhi - 1] = char(188);

	for (int i = 1; i < chieuDaiBangGhi - 1; i++)
		a[0][i] = char(205);
	for (int i = 1; i < chieuDaiBangGhi - 1; i++)
		a[chieuRongBangGhi - 1][i] = char(205);

	for (int i = 1; i < chieuRongBangGhi - 1; i++)
		a[i][0] = char(186);
	for (int i = 1; i < chieuRongBangGhi - 1; i++)
		a[i][chieuDaiBangGhi - 1] = char(186);

	for (int i = 1; i < chieuRongBangGhi - 1; i++)
		for (int j = 1; j < chieuDaiBangGhi - 1; j++)
			a[i][j] = char(32);

	chenMangHaiChieuKiTu(a, chieuRongBangGhi, chieuDaiBangGhi, 7 + x, 4 + y, true);

	diChuyen(9 + x, 5 + y);
	printf("           DIEM: %d", diem);
	diChuyen(10 + x, 5 + y);
	printf("         SINH MENH: %d", luotChoi);
}
void bieuTuongTroChoi(int x, int y)
{
	char a[max][max];

	a[0][0] = 32;  a[0][1] = 32;  a[0][2] = 32;  a[0][3] = 32;  a[0][4] = 32;  a[0][5] = 32;  a[0][6] = 32;  a[0][7] = 254;  a[0][8] = 254;  a[0][9] = 254;  a[0][10] = 32;  a[0][11] = 32;  a[0][12] = 254;  a[0][13] = 32;  a[0][14] = 32;  a[0][15] = 32;  a[0][16] = 32;  a[0][17] = 32;  a[0][18] = 32;  a[0][19] = 32;  a[0][20] = 254;  a[0][21] = 254;  a[0][22] = 254;  a[0][23] = 254;  a[0][24] = 254;  a[0][25] = 254;  a[0][26] = 254;  a[0][27] = 32;  a[0][28] = 32;  a[0][29] = 32;  a[0][30] = 32;  a[0][31] = 32;  a[0][32] = 32;  a[0][33] = 32;  a[0][34] = 32;  a[0][35] = 32; a[0][36] = 32;
	a[1][0] = 32;  a[1][1] = 32;  a[1][2] = 32;  a[1][3] = 32;  a[1][4] = 32;  a[1][5] = 32;  a[1][6] = 32;  a[1][7] = 32;  a[1][8] = 32;  a[1][9] = 32;  a[1][10] = 254;  a[1][11] = 254;  a[1][12] = 32;  a[1][13] = 32;  a[1][14] = 32;  a[1][15] = 32;  a[1][16] = 32;  a[1][17] = 254;  a[1][18] = 254;  a[1][19] = 254;  a[1][20] = 32;  a[1][21] = 32;  a[1][22] = 32;  a[1][23] = 32;  a[1][24] = 32;  a[1][25] = 32;  a[1][26] = 32;  a[1][27] = 254;  a[1][28] = 254;  a[1][29] = 254;  a[1][30] = 32;  a[1][31] = 32;  a[1][32] = 32;  a[1][33] = 32;  a[1][34] = 32;  a[1][35] = 32; a[1][36] = 32;
	a[2][0] = 32;  a[2][1] = 32;  a[2][2] = 32;  a[2][3] = 254;  a[2][4] = 254;  a[2][5] = 254;  a[2][6] = 32;  a[2][7] = 32;  a[2][8] = 254;  a[2][9] = 254;  a[2][10] = 254;  a[2][11] = 254;  a[2][12] = 254;  a[2][13] = 32;  a[2][14] = 32;  a[2][15] = 254;  a[2][16] = 254;  a[2][17] = 254;  a[2][18] = 32;  a[2][19] = 32;  a[2][20] = 32;  a[2][21] = 32;  a[2][22] = 32;  a[2][23] = 32;  a[2][24] = 32;  a[2][25] = 32;  a[2][26] = 32;  a[2][27] = 32;  a[2][28] = 32;  a[2][29] = 254;  a[2][30] = 254;  a[2][31] = 32;  a[2][32] = 32;  a[2][33] = 32;  a[2][34] = 32;  a[2][35] = 32; a[2][36] = 32;
	a[3][0] = 32;  a[3][1] = 32;  a[3][2] = 32;  a[3][3] = 254;  a[3][4] = 32;  a[3][5] = 32;  a[3][6] = 254;  a[3][7] = 254;  a[3][8] = 32;  a[3][9] = 32;  a[3][10] = 32;  a[3][11] = 32;  a[3][12] = 32;  a[3][13] = 254;  a[3][14] = 254;  a[3][15] = 32;  a[3][16] = 32;  a[3][17] = 254;  a[3][18] = 32;  a[3][19] = 32;  a[3][20] = 32;  a[3][21] = 32;  a[3][22] = 32;  a[3][23] = 32;  a[3][24] = 32;  a[3][25] = 32;  a[3][26] = 32;  a[3][27] = 32;  a[3][28] = 32;  a[3][29] = 32;  a[3][30] = 32;  a[3][31] = 254;  a[3][32] = 254;  a[3][33] = 32;  a[3][34] = 32;  a[3][35] = 32; a[3][36] = 32;
	a[4][0] = 32;  a[4][1] = 32;  a[4][2] = 32;  a[4][3] = 254;  a[4][4] = 32;  a[4][5] = 32;  a[4][6] = 32;  a[4][7] = 32;  a[4][8] = 32;  a[4][9] = 32;  a[4][10] = 32;  a[4][11] = 32;  a[4][12] = 32;  a[4][13] = 32;  a[4][14] = 32;  a[4][15] = 32;  a[4][16] = 32;  a[4][17] = 254;  a[4][18] = 32;  a[4][19] = 32;  a[4][20] = 32;  a[4][21] = 32;  a[4][22] = 32;  a[4][23] = 32;  a[4][24] = 32;  a[4][25] = 32;  a[4][26] = 32;  a[4][27] = 32;  a[4][28] = 32;  a[4][29] = 32;  a[4][30] = 32;  a[4][31] = 32;  a[4][32] = 254;  a[4][33] = 254;  a[4][34] = 32;  a[4][35] = 32; a[4][36] = 32;
	a[5][0] = 32;  a[5][1] = 32;  a[5][2] = 32;  a[5][3] = 32;  a[5][4] = 254;  a[5][5] = 254;  a[5][6] = 32;  a[5][7] = 32;  a[5][8] = 254;  a[5][9] = 32;  a[5][10] = 32;  a[5][11] = 32;  a[5][12] = 254;  a[5][13] = 32;  a[5][14] = 32;  a[5][15] = 254;  a[5][16] = 254; a[5][17] = 32;  a[5][18] = 32;  a[5][19] = 32;  a[5][20] = 32;  a[5][21] = 32;  a[5][22] = 32;  a[5][23] = 32;  a[5][24] = 32;  a[5][25] = 32;  a[5][26] = 32;  a[5][27] = 32;  a[5][28] = 32;  a[5][29] = 32;  a[5][30] = 32;  a[5][31] = 254;  a[5][32] = 254;  a[5][33] = 254;  a[5][34] = 32;  a[5][35] = 32; a[5][36] = 32;
	a[6][0] = 32;  a[6][1] = 32;  a[6][2] = 32;  a[6][3] = 32;  a[6][4] = 32;  a[6][5] = 254;  a[6][6] = 32;  a[6][7] = 254;  a[6][8] = 32;  a[6][9] = 254;  a[6][10] = 32;  a[6][11] = 254;  a[6][12] = 32;  a[6][13] = 254;  a[6][14] = 32;  a[6][15] = 254;  a[6][16] = 32;  a[6][17] = 32;  a[6][18] = 32;  a[6][19] = 32;  a[6][20] = 32;  a[6][21] = 32;  a[6][22] = 32;  a[6][23] = 32;  a[6][24] = 32;  a[6][25] = 32;  a[6][26] = 32;  a[6][27] = 32;  a[6][28] = 32;  a[6][29] = 32;  a[6][30] = 32;  a[6][31] = 32;  a[6][32] = 254;  a[6][33] = 254;  a[6][34] = 254;  a[6][35] = 32; a[6][36] = 32;
	a[7][0] = 32;  a[7][1] = 32;  a[7][2] = 32;  a[7][3] = 32;  a[7][4] = 254;  a[7][5] = 32;  a[7][6] = 32;  a[7][7] = 32;  a[7][8] = 32;  a[7][9] = 32;  a[7][10] = 32;  a[7][11] = 32;  a[7][12] = 32;  a[7][13] = 32;  a[7][14] = 32;  a[7][15] = 32;  a[7][16] = 254;  a[7][17] = 32;  a[7][18] = 32;  a[7][19] = 32;  a[7][20] = 32;  a[7][21] = 32;  a[7][22] = 32;  a[7][23] = 32;  a[7][24] = 32;  a[7][25] = 32;  a[7][26] = 32;  a[7][27] = 32;  a[7][28] = 32;  a[7][29] = 32;  a[7][30] = 32;  a[7][31] = 32;  a[7][32] = 254;  a[7][33] = 254;  a[7][34] = 254;  a[7][35] = 254; a[7][36] = 32;
	a[8][0] = 32;  a[8][1] = 254;  a[8][2] = 254;  a[8][3] = 32;  a[8][4] = 254;  a[8][5] = 32;  a[8][6] = 32;  a[8][7] = 32;  a[8][8] = 32;  a[8][9] = 32;  a[8][10] = 32; a[8][11] = 32;  a[8][12] = 32;  a[8][13] = 32;  a[8][14] = 32;  a[8][15] = 32;  a[8][16] = 254;  a[8][17] = 32;  a[8][18] = 32;  a[8][19] = 32;  a[8][20] = 32;  a[8][21] = 32;  a[8][22] = 32;  a[8][23] = 32;  a[8][24] = 32;  a[8][25] = 32;  a[8][26] = 32;  a[8][27] = 32;  a[8][28] = 32;  a[8][29] = 32;  a[8][30] = 32;  a[8][31] = 254;  a[8][32] = 254;  a[8][33] = 254;  a[8][34] = 254;  a[8][35] = 254; a[8][36] = 32;
	a[9][0] = 32;  a[9][1] = 254;  a[9][2] = 254;  a[9][3] = 254;  a[9][4] = 254;  a[9][5] = 32;  a[9][6] = 32;  a[9][7] = 254;  a[9][8] = 32;  a[9][9] = 32;  a[9][10] = 254;  a[9][11] = 32;  a[9][12] = 32;  a[9][13] = 254;  a[9][14] = 32;  a[9][15] = 32;  a[9][16] = 254;  a[9][17] = 32;  a[9][18] = 32;  a[9][19] = 32;  a[9][20] = 32;  a[9][21] = 32;  a[9][22] = 32;  a[9][23] = 32;  a[9][24] = 32;  a[9][25] = 32;  a[9][26] = 32;  a[9][27] = 32;  a[9][28] = 32;  a[9][29] = 32;  a[9][30] = 32;  a[9][31] = 254;  a[9][32] = 254;  a[9][33] = 254;  a[9][34] = 254;  a[9][35] = 254; a[9][36] = 32;
	a[10][0] = 32; a[10][1] = 254; a[10][2] = 254; a[10][3] = 32; a[10][4] = 254; a[10][5] = 254; a[10][6] = 32; a[10][7] = 32; a[10][8] = 254; a[10][9] = 254; a[10][10] = 254;  a[10][11] = 254; a[10][12] = 254; a[10][13] = 32; a[10][14] = 32; a[10][15] = 254; a[10][16] = 32; a[10][17] = 32; a[10][18] = 32; a[10][19] = 32; a[10][20] = 32; a[10][21] = 32; a[10][22] = 32; a[10][23] = 32; a[10][24] = 32; a[10][25] = 32; a[10][26] = 32; a[10][27] = 32; a[10][28] = 32; a[10][29] = 32; a[10][30] = 32; a[10][31] = 254;  a[10][32] = 254; a[10][33] = 254; a[10][34] = 254; a[10][35] = 254; a[10][36] = 254;
	a[11][0] = 32; a[11][1] = 32; a[11][2] = 254; a[11][3] = 32; a[11][4] = 32; a[11][5] = 254; a[11][6] = 254; a[11][7] = 32; a[11][8] = 32; a[11][9] = 32; a[11][10] = 32; a[11][11] = 32; a[11][12] = 32; a[11][13] = 32; a[11][14] = 254; a[11][15] = 254; a[11][16] = 32; a[11][17] = 32; a[11][18] = 32; a[11][19] = 32; a[11][20] = 32; a[11][21] = 32; a[11][22] = 32; a[11][23] = 32; a[11][24] = 32; a[11][25] = 32; a[11][26] = 32; a[11][27] = 32; a[11][28] = 32; a[11][29] = 32; a[11][30] = 32; a[11][31] = 254; a[11][32] = 254; a[11][33] = 254; a[11][34] = 254; a[11][35] = 254; a[11][36] = 254;
	a[12][0] = 32; a[12][1] = 32; a[12][2] = 32; a[12][3] = 254; a[12][4] = 32; a[12][5] = 32; a[12][6] = 254; a[12][7] = 254; a[12][8] = 254; a[12][9] = 254; a[12][10] = 254; a[12][11] = 254; a[12][12] = 254; a[12][13] = 254; a[12][14] = 32; a[12][15] = 32; a[12][16] = 254; a[12][17] = 32; a[12][18] = 32; a[12][19] = 32; a[12][20] = 32; a[12][21] = 32; a[12][22] = 32; a[12][23] = 32; a[12][24] = 32; a[12][25] = 32; a[12][26] = 32; a[12][27] = 32; a[12][28] = 32; a[12][29] = 32; a[12][30] = 32; a[12][31] = 254; a[12][32] = 254; a[12][33] = 254; a[12][34] = 254; a[12][35] = 254; a[12][36] = 254;
	a[13][0] = 32; a[13][1] = 32; a[13][2] = 32; a[13][3] = 32; a[13][4] = 254; a[13][5] = 254; a[13][6] = 32; a[13][7] = 254; a[13][8] = 32; a[13][9] = 32; a[13][10] = 32; a[13][11] = 32; a[13][12] = 254; a[13][13] = 32; a[13][14] = 254; a[13][15] = 32; a[13][16] = 32; a[13][17] = 254; a[13][18] = 32; a[13][19] = 32; a[13][20] = 32; a[13][21] = 32; a[13][22] = 32; a[13][23] = 32; a[13][24] = 32; a[13][25] = 32; a[13][26] = 32; a[13][27] = 32; a[13][28] = 32; a[13][29] = 32; a[13][30] = 254; a[13][31] = 254; a[13][32] = 254; a[13][33] = 254; a[13][34] = 254; a[13][35] = 254; a[13][36] = 254;
	a[14][0] = 32; a[14][1] = 32; a[14][2] = 32; a[14][3] = 32; a[14][4] = 254; a[14][5] = 32; a[14][6] = 254; a[14][7] = 254; a[14][8] = 32; a[14][9] = 32; a[14][10] = 32; a[14][11] = 32; a[14][12] = 254; a[14][13] = 254; a[14][14] = 32; a[14][15] = 254; a[14][16] = 32; a[14][17] = 32; a[14][18] = 254; a[14][19] = 32; a[14][20] = 32; a[14][21] = 32; a[14][22] = 32; a[14][23] = 32; a[14][24] = 32; a[14][25] = 32; a[14][26] = 32; a[14][27] = 32; a[14][28] = 32; a[14][29] = 32; a[14][30] = 254; a[14][31] = 254; a[14][32] = 254; a[14][33] = 254; a[14][34] = 254; a[14][35] = 254; a[14][36] = 254;
	a[15][0] = 32; a[15][1] = 32; a[15][2] = 32; a[15][3] = 32; a[15][4] = 254; a[15][5] = 254; a[15][6] = 32; a[15][7] = 254; a[15][8] = 32; a[15][9] = 32; a[15][10] = 32; a[15][11] = 32; a[15][12] = 254; a[15][13] = 32; a[15][14] = 254; a[15][15] = 254; a[15][16] = 32; a[15][17] = 254; a[15][18] = 32; a[15][19] = 254; a[15][20] = 32; a[15][21] = 32; a[15][22] = 32; a[15][23] = 32; a[15][24] = 32; a[15][25] = 32; a[15][26] = 32; a[15][27] = 32; a[15][28] = 32; a[15][29] = 32; a[15][30] = 254; a[15][31] = 254; a[15][32] = 254; a[15][33] = 254; a[15][34] = 254; a[15][35] = 254; a[15][36] = 254;
	a[16][0] = 32; a[16][1] = 32; a[16][2] = 32; a[16][3] = 254; a[16][4] = 254; a[16][5] = 32; a[16][6] = 254; a[16][7] = 254; a[16][8] = 32; a[16][9] = 32; a[16][10] = 32; a[16][11] = 32; a[16][12] = 254; a[16][13] = 254; a[16][14] = 32; a[16][15] = 254; a[16][16] = 254; a[16][17] = 32; a[16][18] = 254; a[16][19] = 254; a[16][20] = 254; a[16][21] = 32; a[16][22] = 32; a[16][23] = 32; a[16][24] = 32; a[16][25] = 32; a[16][26] = 32; a[16][27] = 32; a[16][28] = 32; a[16][29] = 32; a[16][30] = 254; a[16][31] = 254; a[16][32] = 254; a[16][33] = 254; a[16][34] = 254; a[16][35] = 254; a[16][36] = 254;
	a[17][0] = 32; a[17][1] = 32; a[17][2] = 32; a[17][3] = 254; a[17][4] = 254; a[17][5] = 254; a[17][6] = 32; a[17][7] = 254; a[17][8] = 32; a[17][9] = 32; a[17][10] = 32; a[17][11] = 32; a[17][12] = 254; a[17][13] = 32; a[17][14] = 254; a[17][15] = 254; a[17][16] = 254; a[17][17] = 32; a[17][18] = 254; a[17][19] = 254; a[17][20] = 254; a[17][21] = 32; a[17][22] = 32; a[17][23] = 32; a[17][24] = 32; a[17][25] = 32; a[17][26] = 32; a[17][27] = 32; a[17][28] = 32; a[17][29] = 32; a[17][30] = 254; a[17][31] = 254; a[17][32] = 254; a[17][33] = 254; a[17][34] = 254; a[17][35] = 254; a[17][36] = 32;
	a[18][0] = 32; a[18][1] = 32; a[18][2] = 32; a[18][3] = 254; a[18][4] = 254; a[18][5] = 32; a[18][6] = 254; a[18][7] = 254; a[18][8] = 32; a[18][9] = 32; a[18][10] = 32; a[18][11] = 32; a[18][12] = 254; a[18][13] = 254; a[18][14] = 32; a[18][15] = 254; a[18][16] = 254; a[18][17] = 32; a[18][18] = 32; a[18][19] = 32; a[18][20] = 32; a[18][21] = 32; a[18][22] = 32; a[18][23] = 32; a[18][24] = 32; a[18][25] = 32; a[18][26] = 32; a[18][27] = 32; a[18][28] = 32; a[18][29] = 254; a[18][30] = 254; a[18][31] = 254; a[18][32] = 254; a[18][33] = 254; a[18][34] = 254; a[18][35] = 254; a[18][36] = 32;
	a[19][0] = 32; a[19][1] = 32; a[19][2] = 32; a[19][3] = 254; a[19][4] = 254; a[19][5] = 254; a[19][6] = 32; a[19][7] = 254; a[19][8] = 32; a[19][9] = 32; a[19][10] = 32; a[19][11] = 32; a[19][12] = 254; a[19][13] = 32; a[19][14] = 254; a[19][15] = 254; a[19][16] = 254; a[19][17] = 32; a[19][18] = 32; a[19][19] = 32; a[19][20] = 32; a[19][21] = 32; a[19][22] = 32; a[19][23] = 32; a[19][24] = 32; a[19][25] = 32; a[19][26] = 32; a[19][27] = 32; a[19][28] = 254; a[19][29] = 254; a[19][30] = 254; a[19][31] = 254; a[19][32] = 254; a[19][33] = 254; a[19][34] = 254; a[19][35] = 254; a[19][36] = 32;
	a[20][0] = 32; a[20][1] = 32; a[20][2] = 32; a[20][3] = 254; a[20][4] = 254; a[20][5] = 32; a[20][6] = 254; a[20][7] = 32; a[20][8] = 32; a[20][9] = 32; a[20][10] = 32; a[20][11] = 32; a[20][12] = 32; a[20][13] = 254; a[20][14] = 32; a[20][15] = 254; a[20][16] = 254; a[20][17] = 32; a[20][18] = 32; a[20][19] = 32; a[20][20] = 32; a[20][21] = 32; a[20][22] = 32; a[20][23] = 32; a[20][24] = 32; a[20][25] = 32; a[20][26] = 32; a[20][27] = 32; a[20][28] = 254; a[20][29] = 254; a[20][30] = 254; a[20][31] = 254; a[20][32] = 254; a[20][33] = 254; a[20][34] = 254; a[20][35] = 32; a[20][36] = 32;
	a[21][0] = 32; a[21][1] = 32; a[21][2] = 32; a[21][3] = 32; a[21][4] = 254; a[21][5] = 254; a[21][6] = 32; a[21][7] = 254; a[21][8] = 254; a[21][9] = 254; a[21][10] = 254; a[21][11] = 254; a[21][12] = 254; a[21][13] = 32; a[21][14] = 254; a[21][15] = 254; a[21][16] = 32; a[21][17] = 32; a[21][18] = 32; a[21][19] = 32; a[21][20] = 32; a[21][21] = 32; a[21][22] = 32; a[21][23] = 32; a[21][24] = 32; a[21][25] = 32; a[21][26] = 32; a[21][27] = 254; a[21][28] = 254; a[21][29] = 254; a[21][30] = 254; a[21][31] = 254; a[21][32] = 254; a[21][33] = 254; a[21][34] = 32; a[21][35] = 32; a[21][36] = 32;
	a[22][0] = 32; a[22][1] = 32; a[22][2] = 32; a[22][3] = 254; a[22][4] = 254; a[22][5] = 254; a[22][6] = 32; a[22][7] = 32; a[22][8] = 32; a[22][9] = 32; a[22][10] = 32; a[22][11] = 32; a[22][12] = 32; a[22][13] = 32; a[22][14] = 254; a[22][15] = 254; a[22][16] = 254; a[22][17] = 32; a[22][18] = 32; a[22][19] = 32; a[22][20] = 32; a[22][21] = 32; a[22][22] = 32; a[22][23] = 32; a[22][24] = 32; a[22][25] = 32; a[22][26] = 32; a[22][27] = 254; a[22][28] = 254; a[22][29] = 254; a[22][30] = 254; a[22][31] = 254; a[22][32] = 254; a[22][33] = 254; a[22][34] = 32; a[22][35] = 32; a[22][36] = 32;
	a[23][0] = 32; a[23][1] = 32; a[23][2] = 254; a[23][3] = 32; a[23][4] = 254; a[23][5] = 254; a[23][6] = 254; a[23][7] = 254; a[23][8] = 254; a[23][9] = 254; a[23][10] = 254; a[23][11] = 254; a[23][12] = 254; a[23][13] = 254; a[23][14] = 254; a[23][15] = 254; a[23][16] = 254; a[23][17] = 254; a[23][18] = 32; a[23][19] = 32; a[23][20] = 32; a[23][21] = 32; a[23][22] = 32; a[23][23] = 32; a[23][24] = 32; a[23][25] = 32; a[23][26] = 32; a[23][27] = 254; a[23][28] = 254; a[23][29] = 254; a[23][30] = 254; a[23][31] = 254; a[23][32] = 254; a[23][33] = 32; a[23][34] = 32; a[23][35] = 32; a[23][36] = 32;
	a[24][0] = 32; a[24][1] = 254; a[24][2] = 32; a[24][3] = 254; a[24][4] = 254; a[24][5] = 32; a[24][6] = 32; a[24][7] = 32; a[24][8] = 32; a[24][9] = 32; a[24][10] = 32; a[24][11] = 32; a[24][12] = 32; a[24][13] = 32; a[24][14] = 32; a[24][15] = 254; a[24][16] = 254; a[24][17] = 32; a[24][18] = 254; a[24][19] = 32; a[24][20] = 32; a[24][21] = 32; a[24][22] = 32; a[24][23] = 32; a[24][24] = 32; a[24][25] = 32; a[24][26] = 254; a[24][27] = 254; a[24][28] = 254; a[24][29] = 254; a[24][30] = 254; a[24][31] = 32; a[24][32] = 32; a[24][33] = 32; a[24][34] = 32; a[24][35] = 32; a[24][36] = 32;
	a[25][0] = 32; a[25][1] = 254; a[25][2] = 254; a[25][3] = 254; a[25][4] = 32; a[25][5] = 32; a[25][6] = 32; a[25][7] = 32; a[25][8] = 32; a[25][9] = 32; a[25][10] = 32; a[25][11] = 32; a[25][12] = 32; a[25][13] = 32; a[25][14] = 32; a[25][15] = 32; a[25][16] = 254; a[25][17] = 254; a[25][18] = 254; a[25][19] = 254; a[25][20] = 32; a[25][21] = 32; a[25][22] = 32; a[25][23] = 32; a[25][24] = 32; a[25][25] = 254; a[25][26] = 254; a[25][27] = 254; a[25][28] = 254; a[25][29] = 254; a[25][30] = 32; a[25][31] = 32; a[25][32] = 32; a[25][33] = 32; a[25][34] = 32; a[25][35] = 32; a[25][36] = 32;
	a[26][0] = 32; a[26][1] = 254; a[26][2] = 254; a[26][3] = 32; a[26][4] = 32; a[26][5] = 32; a[26][6] = 32; a[26][7] = 32; a[26][8] = 32; a[26][9] = 32; a[26][10] = 32; a[26][11] = 32; a[26][12] = 32; a[26][13] = 32; a[26][14] = 32; a[26][15] = 32; a[26][16] = 32; a[26][17] = 254; a[26][18] = 254; a[26][19] = 32; a[26][20] = 254; a[26][21] = 254; a[26][22] = 254; a[26][23] = 254; a[26][24] = 254; a[26][25] = 254; a[26][26] = 254; a[26][27] = 32; a[26][28] = 32; a[26][29] = 32; a[26][30] = 32; a[26][31] = 32; a[26][32] = 32; a[26][33] = 32; a[26][34] = 32; a[26][35] = 32; a[26][36] = 32;
	a[27][0] = 32; a[27][1] = 254; a[27][2] = 32; a[27][3] = 32; a[27][4] = 32; a[27][5] = 32; a[27][6] = 32; a[27][7] = 32; a[27][8] = 32; a[27][9] = 32; a[27][10] = 32; a[27][11] = 32; a[27][12] = 32; a[27][13] = 32; a[27][14] = 32; a[27][15] = 32; a[27][16] = 32; a[27][17] = 32; a[27][18] = 254; a[27][19] = 32; a[27][20] = 32; a[27][21] = 32; a[27][22] = 32; a[27][23] = 32; a[27][24] = 32; a[27][25] = 32; a[27][26] = 32; a[27][27] = 32; a[27][28] = 32; a[27][29] = 32; a[27][30] = 32; a[27][31] = 32; a[27][32] = 32; a[27][33] = 32; a[27][34] = 32; a[27][35] = 32; a[27][36] = 32;
	
	doiMau(7);
	chenMangHaiChieuKiTu(a, 28, 37, x, y, false);
}

void tenTroChoi(int x, int y)
{
	char a[max][max];

	a[0][0] = 32;  a[0][1] = 32;  a[0][2] = 32;  a[0][3] = 32;  a[0][4] = 32;  a[0][5] = 32;  a[0][6] = 32;  a[0][7] = 32;  a[0][8] = 32; a[0][9] = 32;  a[0][10] = 32;  a[0][11] = 32;  a[0][12] = 32;  a[0][13] = 32;  a[0][14] = 32;  a[0][15] = 32;  a[0][16] = 32;  a[0][17] = 32;   a[0][18] = 32;   a[0][19] = 32;   a[0][20] = 32; a[0][21] = 32; a[0][22] = 32; a[0][23] = 32; a[0][24] = 32; a[0][25] = 32; a[0][26] = 32; a[0][27] = 32; a[0][28] = 32; a[0][29] = 32; a[0][30] = 32; a[0][31] = 32; a[0][32] = 32; a[0][33] = 32; a[0][34] = 32; a[0][35] = 32; a[0][36] = 32; a[0][37] = 32; a[0][38] = 32;
	a[1][0] = 32;  a[1][1] = 178;  a[1][2] = 178;  a[1][3] = 32;  a[1][4] = 32;  a[1][5] = 32;  a[1][6] = 178;  a[1][7] = 32;  a[1][8] = 32;  a[1][9] = 178;  a[1][10] = 178;  a[1][11] = 32;  a[1][12] = 32;  a[1][13] = 178;  a[1][14] = 178;  a[1][15] = 178;  a[1][16] = 32;  a[1][17] = 178;   a[1][18] = 178;   a[1][19] = 32;   a[1][20] = 32; a[1][21] = 32; a[1][22] = 32; a[1][23] = 178; a[1][24] = 178; a[1][25] = 32; a[1][26] = 32; a[1][27] = 178; a[1][28] = 178; a[1][29] = 178; a[1][30] = 32; a[1][31] = 178; a[1][32] = 32; a[1][33] = 32; a[1][34] = 32; a[1][35] = 178; a[1][36] = 32; a[1][37] = 32; a[1][38] = 32;
	a[2][0] = 32;  a[2][1] = 178;  a[2][2] = 32;  a[2][3] = 178;  a[2][4] = 32;  a[2][5] = 178;  a[2][6] = 32;  a[2][7] = 178;  a[2][8] = 32;  a[2][9] = 178;  a[2][10] = 32;  a[2][11] = 178;  a[2][12] = 32;  a[2][13] = 32;  a[2][14] = 178;  a[2][15] = 32;  a[2][16] = 32;  a[2][17] = 178;   a[2][18] = 32;   a[2][19] = 178;   a[2][20] = 32; a[2][21] = 32; a[2][22] = 32; a[2][23] = 178; a[2][24] = 32; a[2][25] = 178; a[2][26] = 32; a[2][27] = 178; a[2][28] = 32; a[2][29] = 178; a[2][30] = 32; a[2][31] = 178; a[2][32] = 32; a[2][33] = 32; a[2][34] = 32; a[2][35] = 178; a[2][36] = 32; a[2][37] = 32; a[2][38] = 32;
	a[3][0] = 32;  a[3][1] = 178;  a[3][2] = 178;  a[3][3] = 32;  a[3][4] = 32;  a[3][5] = 178;  a[3][6] = 178;  a[3][7] = 178;  a[3][8] = 32;  a[3][9] = 178;  a[3][10] = 178;  a[3][11] = 32;  a[3][12] = 32;  a[3][13] = 32;  a[3][14] = 178;  a[3][15] = 32;  a[3][16] = 32;  a[3][17] = 178;   a[3][18] = 32;   a[3][19] = 178;   a[3][20] = 32; a[3][21] = 32; a[3][22] = 32; a[3][23] = 178; a[3][24] = 178; a[3][25] = 32; a[3][26] = 32; a[3][27] = 178; a[3][28] = 32; a[3][29] = 178; a[3][30] = 32; a[3][31] = 178; a[3][32] = 32; a[3][33] = 32; a[3][34] = 32; a[3][35] = 178; a[3][36] = 32; a[3][37] = 32; a[3][38] = 32;
	a[4][0] = 32;  a[4][1] = 178;  a[4][2] = 32;  a[4][3] = 178;  a[4][4] = 32;  a[4][5] = 178;  a[4][6] = 32;  a[4][7] = 178;  a[4][8] = 32;  a[4][9] = 178;  a[4][10] = 32;  a[4][11] = 32;  a[4][12] = 32;  a[4][13] = 178;  a[4][14] = 178;  a[4][15] = 178;  a[4][16] = 32;  a[4][17] = 178;   a[4][18] = 178;   a[4][19] = 32;   a[4][20] = 32; a[4][21] = 32; a[4][22] = 32; a[4][23] = 178; a[4][24] = 32; a[4][25] = 178; a[4][26] = 32; a[4][27] = 178; a[4][28] = 178; a[4][29] = 178; a[4][30] = 32; a[4][31] = 178; a[4][32] = 178; a[4][33] = 178; a[4][34] = 32; a[4][35] = 178; a[4][36] = 178; a[4][37] = 178; a[4][38] = 32;
	a[5][0] = 32;  a[5][1] = 32;  a[5][2] = 32;  a[5][3] = 32;  a[5][4] = 32;  a[5][5] = 32;  a[5][6] = 32;  a[5][7] = 32;  a[5][8] = 32;  a[5][9] = 32;  a[5][10] = 32;  a[5][11] = 32;  a[5][12] = 32;  a[5][13] = 32;  a[5][14] = 32;  a[5][15] = 32;  a[5][16] = 32;  a[5][17] = 32;   a[5][18] = 32;   a[5][19] = 32;   a[5][20] = 32; a[5][21] = 32; a[5][22] = 32; a[5][23] = 32; a[5][24] = 32; a[5][25] = 32; a[5][26] = 32; a[5][27] = 32; a[5][28] = 32; a[5][29] = 32; a[5][30] = 32; a[5][31] = 32; a[5][32] = 32; a[5][33] = 32; a[5][34] = 32; a[5][35] = 32; a[5][36] = 32; a[5][37] = 32; a[5][38] = 32;
	
	doiMau(4);
	chenMangHaiChieuKiTu(a, 6, 39, x, y, true);
}