#include "stdafx.h"
#include <locale.h>
#include <conio.h> 
#include <stdio.h> 

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	char sex;
	float growth, weight;

	printf("������� ���: (�/�)\n");
	scanf_s("%c", &sex);
	scanf_s("%*[^\n]");

	printf("������� ����:\n");
	scanf_s("%f", &growth);
	scanf_s("%*[^\n]");

	printf("������� ���:\n");
	scanf_s("%f", &weight);
	scanf_s("%*[^\n]");

	growth /= 100;
	const float IMT = weight / (growth*growth);
	printf("��� ������ ����� ����: %f\n", IMT);

	if (IMT <18.5)
		printf("����� ����������");
	else if (IMT >= 18.5 && IMT < 25.0)
		printf("��� � �����");
	else
		printf("����� ��������");

	_getch();
	return 0;
}