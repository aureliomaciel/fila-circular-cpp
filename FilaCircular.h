#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H

#include <iostream>

class FilaCircular {
private:
    int *dados;       // Vetor que armazena os elementos
    int capacidade;   // Tamanho máximo da fila
    int inicio;       // Índice do primeiro elemento
    int fim;          // Índice onde será inserido o próximo elemento
    int tamanho;      // Número de elementos na fila

public:
    // Construtor
    FilaCircular(int cap);
    
    // Destrutor
    ~FilaCircular();

    // Operações da fila
    bool estaVazia() const;
    bool estaCheia() const;
    void enfileirar(int valor);
    int desenfileirar();
    int consultarInicio() const;

    // Exibir a fila
    void imprimirFila() const;
};

#endif
