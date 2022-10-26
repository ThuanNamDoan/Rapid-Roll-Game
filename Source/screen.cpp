#include <Windows.h>
#include <stdio.h>

#include "screen.h"

void diChuyen(int hang, int cot)
{
	COORD coord;
	coord.X = cot;
	coord.Y = hang;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void anConChay()
{
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
}

void phongTo()
{
	HANDLE cons = GetStdHandle(STD_OUTPUT_HANDLE);
	PCONSOLE_FONT_INFOEX font = new CONSOLE_FONT_INFOEX();
	font->cbSize = sizeof(CONSOLE_FONT_INFOEX);
	font->dwFontSize.X = 11;
	font->dwFontSize.Y = 23;
	font->FontWeight = 28;
	font->FontFamily = FF_DECORATIVE;
	SetCurrentConsoleFontEx(cons, 0, font);
}

void chenChuoi(char a[][max], char s[], int hang, int cot)
{
	int n = strlen(s);

	for (int i = 0; i < n; i++)
		a[hang][cot + i] = s[i];
}

void chenMangHaiChieuKiTu(char a[][max], int soHang, int soCot, int x, int y, bool t)
{
	if (t == true)
	{
		--x;
		for (int i = 0; i < soHang; i++)
		{
			diChuyen(++x, y);
			for (int j = 0; j < soCot; j++)
				printf("%c", a[i][j]);
		}
	}
	else
	{
		--x;
		for (int i = 0; i < soHang; i++)
		{
			diChuyen(++x, y);
			for (int j = 0; j < soCot; j++)
				printf("%2c", a[i][j]);
		}
	}
}

void chenKiTu(char a[][max], char c, int hang, int cot)
{
	a[hang][cot] = c;
}

void doiMau(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0; wAttributes |= color;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

