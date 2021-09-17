
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	const int NUM_ALUMNOS = 12;
	char alumnos[25][21] = {
		"Valentin",
		"2",
		"Ben",
		"4",
		"5",
		"6",
		"7",
		"8",
<<<<<<< HEAD
		"9",
		"vicente",
		"11",
=======
		"raulcubero",
		"10",
		"Salazar",
>>>>>>> dda84e1e9ab7c81743f9fdb73c4804d321adea1d
		"12",
		"13",
		"14",
		"15",
		"16",
		"17",
		"Angel",
		"19",
		"20",
		"21",
		"22",
		"23",
		"24",
		"25"
	};
	
	srand(time(NULL));
	int pos =rand()%NUM_ALUMNOS;
	printf("El ganador es Valentin\n", alumnos[pos]);
}
