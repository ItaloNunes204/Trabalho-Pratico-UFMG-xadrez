#include "cavalo.h"

Cavalo :: Cavalo(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
}


void Cavalo::modifica_n_jogadas(){
    this->n_jogadas++;
}


void Cavalo::modifica_estado(){
    this->estado = false;
}


void Cavalo::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}


bool Cavalo::verifica_posicao(int linha, int coluna){
    // verifica qual o jogador
    if(this->jogador.tipo_jogador() == 1){
        // verifica se o movimento é para frente ou para tras
        if(this->linha < linha){//movimento frente
            if(this->linha + 2 == linha){//duas casas para frente 
                if(this->coluna + 1 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 1 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de uma casa para os lados
                    return false;
                }
            }else if(this->linha + 1 == linha){
                if(this->coluna + 2 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 2 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de duas casa para os lados
                    return false;
                }
            }else{//caso o movimento for superior a 2 casas para frente
                return false;
            }
        }else{//movimento para tras 
            if(this->linha - 2 == linha){//duas casas para tras 
                if(this->coluna + 1 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 1 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de uma casa para os lados
                    return false;
                }
            }else if(this->linha - 1 == linha){
                if(this->coluna + 2 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 2 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de duas casa para os lados
                    return false;
                }
            }else{//caso o movimento for superior a 2 casas para tras
                return false;
            }
        }
    }else{
        // verifica se o movimento é para frente ou para tras
        if(this->linha > linha){//movimento frente
            if(this->linha - 2 == linha){ //duas casas para frente 
                if(this->coluna + 1 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 1 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de uma casa para os lados
                    return false;
                }
            }else if(this->linha - 1 == linha){//uma casa para frente
                if(this->coluna + 2 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 2 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de duas casa para os lados
                    return false;
                }
            }else{//caso o movimento for superior a 2 casas para frente
                return false;
            }
        }else{//movimento para tras 
            if(this->linha + 2 == linha){//duas casas para tras 
                if(this->coluna + 1 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 1 == coluna){//movimento para a esquerda 
                    return true;
                }else{//caso o movimento for mais de uma casa para os lados
                    return false;
                }
            }else if(this->linha + 1 == linha){//uma casas para tras 
                if(this->coluna + 2 == coluna){//movimento para a direira 
                    return true;
                }else if(this->coluna - 2 == coluna){//movimento para a esquerda 
                    return true;
                }else{
                    return false;
                }
            }else{//caso o movimento for superior a 2 casas para tras
                return false;
            }
        }
    }
}
