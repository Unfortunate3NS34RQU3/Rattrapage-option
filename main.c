#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

// #include "main.h"

int ouverture(void)
{
    FILE *fp = fopen("/home/ensea/Effet flanger/Clean-Electric-Guitar-Loop.wav", "r");

    if (fp == NULL)
    {
        printf("Le fichier n'a pas pu être ouvert\n");
        return EXIT_FAILURE;
    }

    printf("Le fichier existe\n");
    return 0;
}

int nouveauprogramme(void)
{
	FILE *fp2 = fopen("Effet appliqué.wav", "w");
		
	if (fp2 == NULL)
	{
		printf("Le fichier n'a pas pu être créé\n");
        return EXIT_FAILURE;
	}
	/* fp2 = flanger (fp);
		
	printf("Le fichier a été créé\n");*/
    return 0;
}


