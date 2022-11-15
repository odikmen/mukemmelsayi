#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	int j;
	printf("Sayi? \n");
	scanf("%d",&sayi);
	int sum = 0;
	for(j=1; j<sayi; j++){
		if(sayi%j==0){
			sum = sum + j;
		}
	}
	if(sum == sayi){
		printf("%d bir mukemmel sayidir\n",sayi );
	}
	else{
		printf("%d bir mukemmel sayi degildir\n",sayi );
	}

	return 0;
}
