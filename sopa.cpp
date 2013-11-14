
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LETRAS_ASIG 10 
int main (int argc, char *argv[]){
	int letras;
	int letras2;
srand(time(NULL));
for(letras = 0; letras<LETRAS_ASIG; letras++){
	printf("\n");
	for(letras2=0;letras2<LETRAS_ASIG; letras2++){
		printf(" %c", 'a' + rand() % (('z'-'a')+1));
		}
}
printf("\n");
return EXIT_SUCCESS;
}  
