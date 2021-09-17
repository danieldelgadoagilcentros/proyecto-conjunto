#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	const int NUM_ALUMNOS = 12;
	char alumnos[25][21] = {
		"Valentin",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9",
		"10",
		"11",
		"12",
		"13",
		"14",
		"15",
		"16",
		"17",
		"hermo",
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
