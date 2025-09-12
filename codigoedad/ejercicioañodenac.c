#include <stdio.h>
#include <stdlib.h>  // Para usar abs
#define MESES_MAX 12
#define MESES_MIN 1
#define DIA_MAX 31
#define DIA_MIN 1
int main(void)
{
    int Reset;
	int edad; 
	int anioAc,mesAc,diaAc;
	int anioNac,diaNac,mesNac;
do{
	printf("escribe año actual \n");
	scanf("%d",&anioAc);

	do {
		printf("escribe mes actual numericamente \n");
		scanf("%d",&mesAc);
		if (mesAc<  MESES_MIN || mesAc>MESES_MAX) {
			printf ("Mes no valido. vuelva a ingresar un mes  valido (1-12).\n");
		}
	} while (mesAc<  MESES_MIN || mesAc>MESES_MAX);
	do {
		printf ("Escribe tu año de nacimiento\n");
		scanf ("%d", & anioNac);
		if (anioNac>anioAc){
			printf ("Año no valido. El año de su nacimiento no puede ser mayor al año actual.\n");}
	} while (anioNac>anioAc);
	do {
		printf("Escribe tu mes de nacimiento numericamente\n");
		scanf("%d", &mesNac);
		if (mesNac <  MESES_MIN || mesNac > MESES_MAX) {
			printf("Mes no valido. Por favor, escribe un mes valido (1-12).\n");}
	} while (mesNac <  MESES_MIN || mesNac > MESES_MAX);
	if (mesAc==mesNac)
	{
		do {
			printf ("Escribe el dia actual\n");
			scanf ("%d", & diaAc);
			if (diaAc<DIA_MIN|| diaAc>DIA_MAX) {
				printf("dia no valido.Por favor, escribe un dia valido (1-31).\n");}
		} while (diaAc< DIA_MIN || diaAc>DIA_MAX);
		do {
			printf("Escribe tu dia de nacimiento:\n");
			scanf("%d", &diaNac);
			if(diaNac < DIA_MIN|| diaNac > DIA_MAX)
				printf("dia no valido. Por favor, escribe un dia valido (1-31).\n");
		} while (diaNac < DIA_MIN || diaNac > DIA_MAX);}

	edad = anioAc - anioNac;
	if (mesAc < mesNac || (mesAc == mesNac && diaAc < diaNac)) {
		edad--;} // todavia no cumplio años este año, resto 1 a edad	
	printf("tu edad es: %d\n", abs(edad)); //abs, para que edad no sea negativo
	
	printf("quieres repetir el programa? 1 para si, 0 para no\n");
	scanf("%d", &Reset);
} while  (Reset == 1);

    printf("Programa finalizado.\n");
    return 0;}


