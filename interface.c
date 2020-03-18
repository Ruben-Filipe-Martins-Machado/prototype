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



int interpreter (STATE *e) {
    char line [BUF_SIZE];
    char col[2], lin[2];
    if (fgets(line, BUF_SIZE, stdin) == NULL)
        return 0;
    //Se a jogada for valida
    if (strlen(line) == 3 && sscanf(line, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDINATE coord = {*col - 'a', *lin - '1'};
        play(e, coord);
        show_board(coord);
    } else printf("Invalid move!\n");

    return 1;
}
