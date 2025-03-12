#include "FilaCircular.h"

FilaCircular::FilaCircular(int cap) {
    capacidade = cap;
    dados = new int[capacidade];
    inicio = 0;
    fim = 0;
    tamanho = 0;
}

FilaCircular::~FilaCircular() {
    delete[] dados;
}

bool FilaCircular::estaVazia() const {
    return tamanho == 0;
}

bool FilaCircular::estaCheia() const {
    return tamanho == capacidade;
}

void FilaCircular::enfileirar(int valor) {
    if (estaCheia()) {
        std::cout << "Erro: a fila está cheia!\n";
        return;
    }
    dados[fim] = valor;
    fim = (fim + 1) % capacidade; 
    tamanho++;
}

int FilaCircular::desenfileirar() {
    if (estaVazia()) {
        std::cerr << "Erro: a fila está vazia!\n";
        return -1;
    }
    int valor = dados[inicio];
    inicio = (inicio + 1) % capacidade; 
    tamanho--;
    return valor;
}

int FilaCircular::consultarInicio() const {
    if (estaVazia()) {
        std::cerr << "Erro: a fila está vazia!\n";
        return -1;
    }
    return dados[inicio];
}

void FilaCircular::imprimirFila() const {
    if (estaVazia()) {
        std::cout << "A fila está vazia!\n";
        return;
    }
    
    std::cout << "Fila: ";
    for (int i = 0, idx = inicio; i < tamanho; i++) {
        std::cout << dados[idx] << " ";
        idx = (idx + 1) % capacidade; 
