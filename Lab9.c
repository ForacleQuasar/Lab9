#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
void main() {
	setlocale(LC_CTYPE, "RUS");
	//1
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row) {
		for (col = 1; col <= COL; col++) 
			printf("%1d + %1d = %2d    ", col, row, col + row);
			printf("\n");
		
	}
	//2
	puts("\n������� �����");
	int n, k;
	int K = 0;
	scanf("%d", &n);
	while (n > 0) {
		k = n % 10;
		if (k >= 7) K += k;
		n /= 10;
		}
		printf("����� ���� ������� ��� ������ ����: %d", K);
		while (1) {
			char a;
			puts("\n����������?(�� - y, ��� - n)");
			scanf("%c", &a);
			if ((a = getchar()) == 'n')break;
			puts("\n������� �����");
			int n, k;
			int K = 0;
			scanf("%d", &n);
			while (n > 0) {
				k = n % 10;
				if (k >= 7) K += k;
				n /= 10;
			}
			printf("����� ���� ������� ��� ������ ����: %d", K);
	}
		//3
		int count = 0;
		int count1 = 1;
		char p;
		puts("������� ������");
		scanf("%c", &p);
		p = getchar();
		puts("������� ������");
		int l;
		scanf("%i", &l);
		while (count < l) {
			printf("\n%c", p);
			count += 1;
			count1 = 1;
			while (count1 < l) {
				printf("%c", p);
				count1 += 1;
			}
		}
}