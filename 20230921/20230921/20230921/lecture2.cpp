#include <stdio.h>

double sum(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double mul(double a, double b) {
	return a * b;
}
double div(double a, double b) {
	return  a / b;
}

void calculator(int selector) {
	double num1, num2;

	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s(" %lf", &num2);

	if (selector == 1) 
		printf("%lf", sum(num1, num2));
	else if (selector == 2) 
		printf("%lf", sub(num1, num2));
	else if (selector == 3) 
		printf("%lf", mul(num1, num2));
	else if (selector == 4) 
		printf("%lf", div(num1, num2));
}
	int main(void) {
	int sel;
	printf("1. ���ϱ� 2. ���� 3. ���ϱ� 4. ������ : ");
	scanf_s("%d", &sel);

	calculator(sel);

	return 0;
}