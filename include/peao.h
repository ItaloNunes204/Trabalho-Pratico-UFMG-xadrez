#ifndef PEAO_H_
#define PEAO_H_
#include "jogador.h"

#include <iostream>

class Peao {
  private:
 
    int linha; // linha que a peça esta 
    int coluna; // coluna que a peça esta 
    Jogador jogador; // qual jogador (1 ou 2)
    int n_jogadas; // numero de jogadas realizadas pela peça
    bool estado; // informa se a peça esta "viva" ou "morta"
    bool jogada_inicial; // o peao na primeira jogada pode realizar uma jogada diferente
    
 public:
    // cria um objeto do tipo peao
    Peao(int linha, int coluna,Jogador j);
    
    // modivica o numero de jogadas da peça 
    void modifica_n_jogadas();

    // modifica o estado da peça
    void modifica_estado();

    // modifica a posição da peça 
    void modifica_posicao(int linha, int coluna);

    //verifica se o jogador esta tentando retroceder com o peao
    bool retroceder_movimento(int linha);

    // verifica se é possivel realizar o movimento
    bool verifica_posicao(int linha, int coluna);

    // modifica o estado da jogada inicial
    void modifica_jogada_inicial();

    // verifica se é possivel realizar a capitura
    bool verifica_capitura(int linha, int coluna);

};

#endif
