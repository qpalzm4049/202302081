#include <stdio.h>

int main(void) {

	char season;

	printf("�� = a\n");
	printf("���� = s\n");
	printf("���� = d\n");
	printf("�ܿ� = f\n");
	printf("���� ���� : ");
	scanf_s("%c", &season);

	switch (season) {
	case 'A':
	case 'a':
		printf("������ ��");
		break;
	case 'S':
	case 's':
		printf("�߰� ����");
		break;
	case 'D':
	case 'd':
		printf("�ÿ��� ����");
		break;
	case 'F':
	case 'f':
		printf("�߿� �ܿ�");
		break;
	default:
		printf("�߸��Է�");
	}
	return 0;
}