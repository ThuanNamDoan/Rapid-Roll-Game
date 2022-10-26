#include <conio.h>
#include "keyboard.h"

char nhapPhim()
{
	char kitu;
	if (_kbhit())
	{
		kitu = _getch();
		return kitu;
	}
}