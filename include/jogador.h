#ifndef JOGADOR_H_
#define JOGADOR_H_


#include <iostream>

class Jogador {

private:

    int tipo;  // jogador 1 ou 2
    int pontuacao_;   // pontuação do jogador no jogo 
    int bispo; // numero de peças estilo bispo "vidas"
    int cavalo; // numero de peças estilo cavalo "vidas"
    int dama; // numero de peças estilo dama "vidas"
    int peao; // numero de peças estilo peao "vidas"
    int rei; // numero de peças estilo rei "vidas"
    int torre; // numero de peças estilo torre "vidas"

 public:

    //construtor da classe 
    Jogador();

    //construtor da classe 
    Jogador(int tipo);

    // o numero de peças do tipo bispo e reduzida 
    void mata_bispo();

    // o numero de peças do tipo cavalo e reduzida 
    void mata_cavalo();

    // o numero de peças do tipo dama e reduzida 
    void mata_dama();

    // o numero de peças do tipo peao e reduzida 
    void mata_peao();

    // o numero de peças do tipo rei e reduzida 
    void mata_rei();

    // o numero de peças do tipo torre e reduzida 
    void mata_torre();

    // a pontuação e modificada ao longo do jogo;
    void modifica_pontuacao(int tipo);

    // retorna a pontuação do jogador 
    int pontuacao();

    // retorna verdadeiro de o jogador ainda tem peças 
    bool possui_peças();

    //retorna o tipo de jogador 
    int tipo_jogador();

};

#endif
