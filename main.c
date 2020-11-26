#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float A;
	scanf("%f",&A);
	while((int)A!=A){
		A*=10;
	}
	int Ai = (int)A;
	int DigSum = 0;
	int i;
	for (i=0; i<4; i++){
		DigSum+=(Ai%10);
		Ai/=10;
	}
	printf("%d",DigSum);
	return 0;
}
