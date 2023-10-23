#include "jogador.h"
#include <iostream>

Jogador::Jogador(){
    this->pontuacao_ = 0;
    this->bispo = 2;
    this->cavalo = 2;
    this->dama = 1;
    this->peao = 8;
    this->rei = 1;
    this->torre = 2;
}


Jogador::Jogador(int tipo){
    this->tipo = tipo;
    this->pontuacao_ = 0;
    this->bispo = 2;
    this->cavalo = 2;
    this->dama = 1;
    this->peao = 8;
    this->rei = 1;
    this->torre = 2;
}


void Jogador::mata_bispo(){
    this->bispo--;
}


void Jogador::mata_cavalo(){
    this->cavalo--;
}


void Jogador::mata_dama(){
    this->dama--;
}


void Jogador::mata_peao(){
    this->peao--;
}


void Jogador::mata_rei(){
    this->rei--;
}


void Jogador::mata_torre(){
    this->torre--;
}


void Jogador::modifica_pontuacao(int tipo){
    //peão
    if(tipo == 1){
        pontuacao_ += 1;
    }
    //bispo
    else if(tipo == 2){
        pontuacao_ += 3;
    }
    //cavalo
    else if(tipo == 3){
        pontuacao_ += 3;
    }
    //torre
    else if(tipo == 4){
        pontuacao_ += 5;
    }
    //rei
    else if(tipo == 5){
        pontuacao_ += 10;
    }
    //dama
    else{
        pontuacao_ += 9;
    }
}


int Jogador:: pontuacao(){
    return this->pontuacao_;
}


bool Jogador:: possui_peças(){
    bool saida;
    if(this->bispo == 0 && this->cavalo == 0 && this->dama == 0 && this->peao == 0 && this->rei == 0 && this->torre == 0){
        saida = true;
    }else{
        saida = false;
    }
    return saida;
}


int Jogador:: tipo_jogador(){
    return this->tipo;
}
