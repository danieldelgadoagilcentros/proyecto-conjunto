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
<<<<<<< HEAD
		"hermo",
		"9",
=======
		"8",
		"Alfredo",
		"raulcubero",
>>>>>>> bb4e1fdf2f49f33414d2e6e319a4c6a911fec5fd
		"10",
		"Salazar",
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
