#include "dama.h"

Dama::Dama(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
}


void Dama::modifica_estado(){
    this->estado = false;
}


void Dama::modifica_n_jogadas(){
    this->n_jogadas++;
}


void Dama::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}


bool Dama::verifica_posicao(int linha, int coluna){
    //verificar qual o tipo de jogador
    if(this->jogador.tipo_jogador() == 1){
        if(this->linha < linha){//movimentos para frente
            int casas = linha - this->linha;
            if(this->coluna == coluna){//movimento para a frente
                return true;
            }else if(this->coluna + casas == coluna){//movimento diagonal direita frente
                return true;
            }else if(this->coluna - casas == coluna){//movimento diagonal esquerda frente
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }else if(this->linha > linha){
            int casas = this->linha - linha;
            if(this->coluna == coluna){//movimento para a tras
                return true;
            }else if(this->coluna + casas == coluna){//movimento diagonal direita tras
                return true;
            }else if(this->coluna - casas == coluna){//movimento diagonal esquerda tras
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }else{
            return false;
        }
    }else{
        if(this->linha > linha){//movimentos para frente
            int casas = this->linha - linha;
            if(this->coluna == coluna){//movimento para a frente
                return true;
            }else if(this->coluna + casas == coluna){//movimento diagonal direita frente
                return true;
            }else if(this->coluna - casas == coluna){//movimento diagonal esquerda frente
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }else if(this->linha < linha){
            int casas = linha - this->linha;
            if(this->coluna == coluna){//movimento para a tras
                return true;
            }else if(this->coluna + casas == coluna){//movimento diagonal direita tras
                return true;
            }else if(this->coluna - casas == coluna){//movimento diagonal esquerda tras
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }else{
            return false;
        }
    }   
}
