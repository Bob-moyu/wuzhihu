#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	init_board(mine, ROWS, COLS, '0');  //��ʼ��
	set_mine(mine, ROW, COL);
	init_board(show, ROWS, COLS, '*');   //��ʼ��չʾ��
	printf("\n");
	print_board(show, ROW, COL);        //��ӡչʾ��
	printf("\n");
	clear_mine(mine, show, ROW, COL);  //����
}

void menu()
{
	printf("\n");
	printf("\n");
	printf("��������������������������ӭ����ɨ����Ϸ������������������������\n");
	printf("\n");
	printf("                          1.��ʼ��Ϸ                            \n");
	printf("                          0.�˳���Ϸ                            \n");
	printf("\n");
	printf("����������������������������������������������������������������\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
