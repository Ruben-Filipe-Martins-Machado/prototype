#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 1024
typedef enum {EMPTY, WHITE, BLACK} HOUSE;
typedef struct {
    int column;
    int line;
} COORDINATE;
typedef struct {
    COORDINATE player1;
    COORDINATE player2;
} PLAY;
typedef PLAY PLAYS[32];
typedef struct {
    HOUSE tab[8][8];
    PLAYS plays;
    int num_play;
    int current_player;
} STATE;
STATE *initialize_state() {
    STATE *e = (STATE *) malloc(sizeof(STATE));
    e-> current_player = 1;
    e-> num_play = 0;
    int i, j;
    for (i = 1 ; i <= 8 ; i++) {
        for (j = 1; j <= 8; j++) {
            if (i == 1 && j == 8) printf("2");
            else if (i == 8 && j == 1) printf("1");
            else if (i == 4 && j == 5) printf("*");
            else printf(".");
        }

        printf("\n");
    }
    printf ("Current player %d\n", e->current_player);
    return e;
}
