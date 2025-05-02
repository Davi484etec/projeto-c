#include <stdio.h>
#include <stdlib.h>
#include "ControlesDaTela.cpp"

void main()
{
	int x, y;
	
	system("CLS");
	
	gotoxy(0,0);
	printf("\xC9");
	for(x = 1; x < 59; x++)
	{
		gotoxy(x,0);
		printf("\xCD");
	}
	
	gotoxy(59,0);
	printf("\xCB");
	
	for(x = 60; x < 119; x++)
	{
		gotoxy(x,0);
		printf("\xCD");
	}
	
	gotoxy(119,0);
	printf("\xBB");
	
	gotoxy(0,1);
	printf("\xBA");
	for(y = 1; y < 16; y++)
	{
		gotoxy(0,y);
		printf("\xBA");
	}
	
	gotoxy(0,16);
	printf("\xCC");
	for(y = 17; y < 30; y++)
	{
		gotoxy(0,y);
		printf("\xBA");
	}
	
	gotoxy(0,30);
	printf("\xC8");
	for(x = 1; x < 59; x++)
	{
		gotoxy(x,30);
		printf("\xCD");
	}
	
	gotoxy(59,30);
	printf("\xCA");
	for(x = 59; x < 119; x++)
	{
		gotoxy(x,30);
		printf("\xCD");
	}
	
	gotoxy(119,30);
	printf("\xBC");
	
	gotoxy(119,1);
	printf("\xBA");
	for(y = 1; y < 16; y++)
	{
		gotoxy(119,y);
		printf("\xBA");
	}
	
	gotoxy(119,16);
	printf("\xB9");
	
	for(y = 17; y < 30; y++)
	{
		gotoxy(119,y);
		printf("\xBA");
	}
	
	gotoxy(1,16);
	printf("\xCD");
	for(x = 1; x < 59; x++)
	{
		gotoxy(x,16);
		printf("\xCD");
	}
	
	gotoxy(59,16);
	printf("\xCE");
	for(x = 60; x < 119; x++)
	{
		gotoxy(x,16);
		printf("\xCD");
	}
	
	gotoxy(59,30);
	printf("\xCA");
	
	gotoxy(59,1);
	printf("\xBA");
	for(y = 1; y < 16; y++)
	{
		gotoxy(59,y);
		printf("\xBA");
	}
	
	gotoxy(59,17);
	printf("\xBA");
	for(y = 17; y < 30; y++)
	{
		gotoxy(59,y);
		printf("\xBA");
	}
	
	Cor(0x02);
	gotoxy(49,11);
	printf("*");
	
	gotoxy(49,21);
	printf("*");
	
	gotoxy(69,11);
	printf("*");
	
	gotoxy(69,21);
	printf("*");
	
	Cor(0x01);
	gotoxy(49,6);
	printf("*");
	
	gotoxy(43,8);
	printf("*");
	
	gotoxy(38,11);
	printf("*");
	
	Cor(0x04);
	gotoxy(49,26);
	printf("*");
	
	gotoxy(43,24);
	printf("*");
	
	gotoxy(38,21);
	printf("*");
	
	Cor(0x04);
	gotoxy(69,6);
	printf("*");
	
	gotoxy(75,8);
	printf("*");
	
	gotoxy(80,11);
	printf("*");
	
	Cor(0x01);
	gotoxy(80,21);
	printf("*");
	
	gotoxy(75,24);
	printf("*");
	
	gotoxy(69,26);
	printf("*");
	
	getch();
}
