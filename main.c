#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024
#include "dados.h"
#include "logica.h"
#include "interface.h"

int main() {
    STATE *e = initialize_state();
    interpreter(e);
    return 0;
}
