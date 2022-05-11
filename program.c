#include<stdio.h>

void convertToBinary(int n) {

}

void convertToOctal(int n) {

}

void convertToHexadecimal(int n) {

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