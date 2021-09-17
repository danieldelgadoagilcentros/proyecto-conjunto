
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	const int NUM_ALUMNOS = 12;
	char alumnos[12][21] = {
		"Valentin",
		"2",
		"Ben",
		"4",
		"hermo",
		"9",
		"vicente",
		"11",
		"Alfredo",
		"raulcubero",
		"Salazar",
		"Angel"
	};
	
	srand(time(NULL));
	int pos =rand()%NUM_ALUMNOS;
	printf("El ganador es %s\n", alumnos[pos]);
}
