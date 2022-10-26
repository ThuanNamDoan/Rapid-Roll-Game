#define _CRT_SECURE_NO_WARNINGS

#include <conio.h>
#include <time.h>
#include <thread>

#include "keyboard.h"
#include "screen.h"
#include "rapid.h"
#include "setting.h"
#include "logic.h"

static quaBongStr bong;
static thanhNgangStr thanh[max];
static caiDatStr caiDat;
static char a[max][max];

void khoiTaoTroChoi();
void taoBoDemNgauNhien();
void batDauTroChoi();

void luong1();
void luong2();
void luong3();
void luong4();
void luong5();

void batDauTroChoi()
{
	khoiTaoTroChoi();
	phongTo();

	std::thread first(luong1);
	std::thread second(luong2);
	std::thread third(luong3);
	std::thread fourth(luong4);
	std::thread fifth(luong5);

	first.join();
	second.join();
	third.join();
	fourth.join();
	fifth.join();
}

void luong1()
{
	while (caiDat.luotChoi != 0)
	{
		anConChay();
		doiMau(6);
		chenMangHaiChieuKiTu(a, chieuDaiKhungTroChoi, chieuRongKhungTroChoi, 2, 20, true);
		bangGhi(2 + chieuDaiKhungTroChoi / 10, 20 + chieuRongKhungTroChoi + 10, caiDat.diem, caiDat.luotChoi);
	}
}

void luong2()
{
	while (caiDat.luotChoi != 0)
	{
		caiDat.diem++;

		for (int i = 0; i < soThanhNgang; i++)
			if (thanh[i].hang > 0 && thanh[i].hang < chieuDaiKhungTroChoi - 1)
			{
				xoaThanhNgang(a, thanh[i].hang, thanh[i].cot);
				--thanh[i].hang;
			}

		for (int i = 0; i < soThanhNgang; i++)
			if (thanh[i].hang == 0)
			{
				thanh[i].hang = chieuDaiKhungTroChoi - 2;
				thanh[i].camBay = rand() % 3;
				thanh[i].cot = rand() % (chieuRongKhungTroChoi - doDaiThanhNgang - 1) + 1;
			}

		for (int i = 0; i < soThanhNgang; i++)
			if (thanh[i].camBay == false)
				thanhNgangCoGai(a, thanh[i].hang, thanh[i].cot);
			else
				thanhNgangKhongGai(a, thanh[i].hang, thanh[i].cot);

		for (int i = 0; i < soThanhNgang; i++)
			if (bong.hang == thanh[i].hang && bong.cot < thanh[i].cot + doDaiThanhNgang
				&& bong.cot >= thanh[i].cot && thanh[i].camBay == true)
			{
				chenKiTu(a, char(205), bong.hang, bong.cot);
				quaBong(a, --bong.hang, bong.cot);
				break;
			}

		tocDoThanhNgang(caiDat.diem);
	}
}

void luong3()
{
	while (caiDat.luotChoi != 0)
	{
		if (a[bong.hang + 1][bong.cot] == char(32))
		{
			xoaQuaBong(a, bong.hang, bong.cot);
			quaBong(a, ++bong.hang, bong.cot);
		}

		tocDoQuaBong(caiDat.diem);
	}
}

void luong4()
{
	while (caiDat.luotChoi != 0)
	{
		char kitu = nhapPhim();
		if (kitu == KEY_LEFT)
		{
			if (bong.cot > 1)
			{
				xoaQuaBong(a, bong.hang, bong.cot);
				quaBong(a, bong.hang, --bong.cot);
			}
		}
		else
			if (kitu == KEY_RIGHT)
			{
				if (bong.cot < chieuRongKhungTroChoi - 2)
				{
					xoaQuaBong(a, bong.hang, bong.cot);
					quaBong(a, bong.hang, ++bong.cot);
				}
			}
	}
}

void luong5()
{
	while (caiDat.luotChoi != 0)
	{
		for (int i = 0; i < soThanhNgang; i++)
		{
			if (bong.hang == thanh[i].hang && bong.cot < thanh[i].cot + doDaiThanhNgang
				&& bong.cot >= thanh[i].cot && thanh[i].camBay == false)
			{
				khoiTaoTroChoi();
				--caiDat.luotChoi;
				break;
			}
		}

		if (bong.hang < 1 || bong.hang >= chieuDaiKhungTroChoi - 2)
		{
			khoiTaoTroChoi();
			--caiDat.luotChoi;
		}
	}
}

void xuatBangChonTroChoi(int x, int y)
{
	caiDat.diem = 0;
	caiDat.luotChoi = 3;

	int b[max];
	docFile((char *)"input.txt", b);

	bangChonTroChoi(x, y, b[0], b[1], b[2]);

	char kiTu = _getch();

	if (kiTu == NEW_GAME)
	{
		system("cls");
		batDauTroChoi();
	}

	if (kiTu == KEY_ESC)
		exit(0);
}

void taoBoDemNgauNhien()
{
	time_t t;
	srand((unsigned)time(&t));
}

void ketThucTroChoi(int x, int y)
{
	char kiTu;
	int b[max];

	do
	{
		ghiFile((char *)"input.txt", caiDat.diem);
		docFile((char *)"input.txt", b);

		system("cls");
		bangChonKetThuc(x, y, caiDat.diem, b[0], b[1], b[2]);

		caiDat.diem = 0;
		caiDat.luotChoi = 3;

		kiTu = _getch();

		if (kiTu == NEW_GAME)
		{
			system("cls");
			batDauTroChoi();
		}
	} while (kiTu != KEY_ESC);
}

void khoiTaoTroChoi()
{
	khungTroChoi(a);

	bong.hang = 1;
	bong.cot = chieuRongKhungTroChoi / 2;

	taoBoDemNgauNhien();

	for (int i = 0; i < soThanhNgang; i++)
	{
		thanh[i].hang = i * 2 + 1;
		thanh[i].cot = rand() % (chieuRongKhungTroChoi - doDaiThanhNgang - 1) + 1;

		thanh[i].camBay = rand() % 4;

	}
}
