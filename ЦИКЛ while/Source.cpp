/* ���������� �����1 */
/* ������������� ������ ���������� */
#include<stdio.h>
int main()
{
	int guess = 1;
	char response;
	printf(" ��������� ����� ����� �� 1 �� 100. � �������� �������");
	printf(" ���.\n ��������� �, ���� ��� ������� ��������� �");
	printf(" \n �, ���� � ��������. \n");
	�rintf("���� ... ���� ����� %d?\n", guess);
	while ((response = getchar()) != '�') /* ��������� ������*/
		if (response != ' \n') /* ������� ������� "����� ������" */
			printf(" ��, ����� ��� ����� %d?\n", ++guess);
	printf(" � �����, ��� ����� ������� ���!\n");
}