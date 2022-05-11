#include<stdio.h>

void convertToBinary(int n) {
	int x, v[32], i = 0, j;
	printf("Numarul in binar este: ");
	while (n != 0)
	{
		x = n % 2;
		v[i] = x;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", v[j]);
}

void convertToOctal(int n) {
	int x, v[32], i = 0, j;

	printf("Numarul in octal este: ");
	while (n != 0)
	{
		x = n % 8;
		v[i] = x;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", v[j]);
}

void convertToHexadecimal(int n) {
	int x, v[32], i = 0, j;

	printf("Numarul in hexazecimal este: ");
	while (n != 0)
	{
		x = n % 16;
		v[i] = x;
		n = n / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (v[j] == 10)
			printf("A");
		else if (v[j] == 11)
			printf("B");
		else if (v[j] == 12)
			printf("C");
		else if (v[j] == 13)
			printf("D");
		else if (v[j] == 14)
			printf("E");
		else if (v[j] == 15)
			printf("F");
		else
			printf("%d", v[j]);
	}
}

int main()
{
	int n, opt;

	do {
		printf("1. Conversie din zecimal in binar\n");
		printf("2. Conversie din zecimal in octal\n");
		printf("3. Conversie din zecimal in hexazecimal\n");
		printf("0.Iesire\n");
		printf("Dati optiunea dvs: ");
		scanf_s("%d", &opt);
		switch (opt)
		{
		case 0:exit(0);
			break;
		case 1:
			printf("Dati numarul de convertit din zecimal in binar: ");
			scanf_s("%d", &n);

			convertToBinary(n);
			printf("\n");
			break;
		case 2:
			printf("Dati numarul de convertit din zecimal in octal: ");
			scanf_s("%d", &n);

			convertToOctal(n);
			printf("\n");
			break;
		case 3:
			printf("Dati numarul de convertit din zecimal in hexazecimal: ");
			scanf_s("%d", &n);

			convertToHexadecimal(n);
			printf("\n");
			break;
		default:printf("Optiunea dvs este gresita!\n");
			break;
		}
	} while (1);

	return 0;
}