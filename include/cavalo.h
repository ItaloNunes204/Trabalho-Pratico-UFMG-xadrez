#ifndef CAVALO_H_
#define CAVALO_H_
#include "jogador.h"

#include <iostream>

class Cavalo {
  private:
 
    int linha; // linha que a peça esta 
    int coluna; // coluna que a peça esta 
    Jogador jogador; // qual jogador (1 ou 2)
    int n_jogadas; // numero de jogadas realizadas pela peça
    bool estado; // informa se a peça esta "viva" ou "morta"
    
 public:
    // cria um objeto do tipo cavalo
    Cavalo(int linha, int coluna, Jogador j);
    
    // modivica o numero de jogadas da peça 
    void modifica_n_jogadas();

    // modifica o estado da peça
    void modifica_estado();

    // modifica a posição da peça 
    void modifica_posicao(int linha, int coluna);

    //verifica se é possivel realizar o movimento
    bool verifica_posicao(int linha, int coluna);
};

#endif
