#include <iostream>
#include "./include/jogador.h"
#include "./include/bispo.h"
#include "./include/cavalo.h"
#include "./include/dama.h"
#include "./include/peao.h"
#include "./include/rei.h"
#include "./include/torre.h"
#include <vector>
#include <string>

using namespace std;

int main(){
    string nomej1, nomej2;
    cout << "Qual o nome do jogador 1 com as peças de cor preta:";
    cin >> nomej1;
    cout << endl <<"Qual o nome do jogador 2 com as peças de cor brancas:";
    cin >> nomej2;
    cout << endl <<"O joga vai iniciar com o jodador 1:"<< nomej1 ;
}
