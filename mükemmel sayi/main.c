#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int i, toplam, sayi;

	printf("Bir sayi girin: ");

	scanf("%d", &sayi);
	
		toplam = 0;
	
		for (i = 1; i < sayi; i++) 
		{
			if (sayi%i == 0)
			{
				toplam = toplam + i;
			}
		}
		if (toplam == sayi) 
		{
			printf("%d bir mukemmel sayidir!", sayi);
		}
		else
		{
			printf("%d bir mukemmel sayi degildir!", sayi);




































	return 0;
}
