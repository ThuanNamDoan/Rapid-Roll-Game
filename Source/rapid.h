#include "screen.h"

#define doDaiThanhNgang  4

#define chieuDaiBangChonTroChoi  30
#define chieuRongBangChonTroChoi  20

#define chieuDaiKhungTroChoi  26
#define chieuRongKhungTroChoi  35

#define chieuRongBangGhi 6
#define chieuDaiBangGhi 30

#define chieuDaiBangChonKetThuc  30
#define chieuRongBangChonKetThuc 20

struct quaBongStr
{
	int hang;
	int cot;
};

struct thanhNgangStr
{
	int hang;
	int cot;
	bool camBay;
};

struct traiTimStr
{
	int hang;
	int cot;
};

void quaBong(char a[][max], int hang, int cot);
void thanhNgangKhongGai(char a[][max], int hang, int cot);
void thanhNgangCoGai(char a[][max], int hang, int cot);

void khungTroChoi(char a[][max]);
void bangChonTroChoi(int x, int y, int diemCao1, int diemCao2, int diemCao3);
void bangChonKetThuc(int x, int y, int diemHienTai, int diemCao1, int diemCao2, int diemCao3);
void bangGhi(int x, int y, int diem, int luotChoi);

void xoaThanhNgang(char a[][max], int hang, int cot);
void xoaQuaBong(char a[][max], int hang, int cot);

void bieuTuongTroChoi(int x, int y);
void tenTroChoi(int x, int y);

