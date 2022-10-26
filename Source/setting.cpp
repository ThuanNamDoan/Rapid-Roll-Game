#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <stdio.h>

#include "setting.h"

void tocDoThanhNgang(int diem)
{
	if (diem >= 0 && diem < 50)
		Sleep(450);
	if (diem >= 50 && diem < 200)
		Sleep(400 - diem);
	if (diem >= 200 && diem < 300)
		Sleep(200);
	if (diem >= 300 && diem < 500)
		Sleep(150);
	if (diem >= 500)
		Sleep(100);

}

void tocDoQuaBong(int diem)
{
	if (diem >= 0 && diem < 50)
		Sleep(320);
	if (diem >= 50 && diem < 200)
		Sleep(200);
	if (diem >= 200 && diem < 300)
		Sleep(150);
	if (diem >= 300 && diem < 500)
		Sleep(100);
	if (diem >= 500)
		Sleep(80);


}

void docFile(char *file, int b[])
{
	int n = 0;
	FILE *f = fopen(file, "rt");


	while (!feof(f))
	{
		fscanf(f, "%d", &b[n++]);
	}
	fclose(f);


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[j] < b[j + 1])
			{
				int t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
			}
		}
	}
}

void ghiFile(char *file, int diemHienTai)
{
	FILE *f = fopen(file, "a");
	fprintf(f, "\n%d", diemHienTai);
	fclose(f);
}