#include <stdio.h>

int main()
{
	int r;
	float phi, luas;
	phi=22/7;
	
	printf("Masukan jari- jari lingkaran (cm) = ",r);
	scanf("%i",&r);
	
	luas=phi*r*r;
	
	printf("Jadi luas lingkaran tersebut adalah: %f\n",luas);
	system ("pause");
	return 0;
}
