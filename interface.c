#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024
#include "dados.h"
#include "logica.h"

void show_board(COORDINATE c) {
    int i, j;
    for (i = 1 ; i <= 8 ; i++){
        for (j = 1 ; j <= 8 ; j++) {
            if (i == 1 && j == 8 ) printf ("2");
            else if ( i == 8 && j == 1 ) printf ("1");
            else if ( i ==  8 - c.column && j == 1 + c.line ) printf("*");
            else printf (".");}


        printf ("\n");
    }
}



