#include <iostream>
#include "FilaCircular.h"

int main() {
    FilaCircular fila(5); 

    fila.enfileirar(10);
    fila.enfileirar(20);
    fila.enfileirar(30);
    fila.enfileirar(40);
    fila.enfileirar(50);

    fila.enfileirar(60);

    std::cout << "Início da fila: " << fila.consultarInicio() << std::endl;

    std::cout << "Removido: " << fila.desenfileirar() << std::endl;
    std::cout << "Removido: " << fila.desenfileirar() << std::endl;

    fila.imprimirFila();

    fila.enfileirar(60);
    fila.enfileirar(70);

    fila.imprimirFila();

    return 0;
}
