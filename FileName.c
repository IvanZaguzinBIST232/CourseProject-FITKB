#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "RUS");

	system("chcp 1251");
	int t;
	t = 20;
	printf("Текст \nЧисла = %d,%d", 21, t);


}