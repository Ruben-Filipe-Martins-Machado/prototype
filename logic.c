#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024
#include "dados.h"


int play (STATE *e, COORDINATE c) {
    printf("play %d %d\n",1 + c.column,1 + c.line);

    return 1;

}

