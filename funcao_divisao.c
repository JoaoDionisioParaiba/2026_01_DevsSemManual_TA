#include <stdio.h>
#include "funcao_divisao.h"

float dividir(float dividendo, float divisor) {
    if (divisor == 0) {
        printf("Erro: Divisao por zero nao permitida!\n");
        return 0.0;
    } else {
        return dividendo / divisor;
    }
}
