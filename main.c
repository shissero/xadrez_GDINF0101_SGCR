#include <stdio.h>
#include "peca.h"
#include "inicializarpeca.h"
int main(){
    
    Peca peca;
    PtrPeca *ptrpeca;       
    inicializarPeca (ptrpeca);

printf("%s", peca.tipoPeca);
     
}
