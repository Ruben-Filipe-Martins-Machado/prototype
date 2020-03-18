#ifndef GUIAO5_DADOS_H
#define GUIAO5_DADOS_H

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

STATE *initialize_state();

#endif //GUIAO5_DADOS_H
