#include <stdio.h>

int main(){
	int a,b,c,d;
	
	printf("==============================\n");
	printf("1. Tambah Tambahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("==============================\n");
	
	printf("Masukan Angka :");
	scanf("%i",&a);
	
	printf("\n==============================\n");
	if (a == 1){
		printf("Masukan Angka 1 :");
		scanf("%i",&b);
		printf("Masukan Angka 2 :");
		scanf("%i",&c);
		printf("\n==============================\n");
		d = b + c;
		printf("Nilai nya adalah : %i ",d);
		printf("\n==============================\n");
		
		
	}else if  (a == 2){
		printf("Masukan Angka 1 :");
		scanf("%i",&b);
		printf("Masukan Angka 2 :");
		scanf("%i",&c);
		printf("\n==============================\n");
		d = b - c;
	printf("Nilai nya adalah : %i ",d);	printf("\n==============================\n");
		
		
	}else if  (a == 3){
		printf("Masukan Angka 1 :");
		scanf("%i",&b);
		printf("Masukan Angka 2 :");
		scanf("%i",&c);
		printf("\n==============================\n");
		d = b * c;
		printf("Nilai nya adalah : %i ",d);	printf("\n==============================\n");
	}else if  (a == 4){
		printf("Masukan Angka 1 :");
		scanf("%i",&b);
		printf("Masukan Angka 2 :");
		scanf("%i",&c);
		printf("\n==============================\n");
		d = b / c;
		printf("Nilai nya adalah : %i ",d);
			printf("\n==============================\n");
	}
	return 0; 
}
