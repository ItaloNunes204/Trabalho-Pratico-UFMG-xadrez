#ifndef PEAO_H_
#define PEAO_H_
#include "jogador.h"

#include <iostream>

class Peao {
  private:
 
    int linha; // linha que a peça esta 
    int coluna; // coluna que a peça esta 
    Jogador Jogador; // qual jogador (1 ou 2)
    bool n_jogadas; // numero de jogadas realizadas pela peça
    bool estado; // informa se a peça esta "viva" ou "morta"
    bool jogada_inicial; // o peao na primeira jogada pode realizar uma jogada diferente
    
 public:
     // modivica o numero de jogadas da peça 
    void modifica_n_jogadas();

    // modifica o estado da peça
    void modifica_estado();

    // modifica a posição da peça 
    void modifica_posicao();

    // verifica se é possivel realizar o movimento
    void verifica_posicao();

    // modifica o estado da jogada inicial
    void modifica_jogada_inicial();

};

#endif
