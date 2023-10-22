#include <iostream>
#include <vector>
#include <string>

using namespace std;

// mostra o tabuleiro para os jogadores
void tabuleiro(const int tabuleiro[8][8]){
    cout << endl;
    cout << "- - | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |" << endl;
    cout << "-------------------------------------" << endl;
    int linha = 0;
    for(int i = 0; i < 8; i++){
        cout << linha << " - | ";
        for(int j = 0; j < 8; j++){
            if(tabuleiro[i][j] >= 10){
                cout << tabuleiro[i][j] << "| ";
            }else{
                cout << tabuleiro[i][j] << " | ";
            }
        }
        cout << endl;
        linha++;
    }
    cout << endl;
}

// mostra uma lista com as peças do jogador 1
void lista_peca_jogador1(){
    cout << "Lista de pecas do jogador 1:" << endl;
    cout << "----------------------------" << endl;
    cout << "peão -> 16" << endl;
    cout << "peão -> 15" << endl;
    cout << "peão -> 14" << endl;
    cout << "peão -> 13" << endl;
    cout << "peão -> 12" << endl;
    cout << "peão -> 11" << endl;
    cout << "peão -> 10" << endl;
    cout << "peão -> 9" << endl;
    cout << "Torre -> 8" << endl;
    cout << "Torre -> 7" << endl;
    cout << "Cavalo -> 6" << endl;
    cout << "Cavalo -> 5" << endl;
    cout << "Bispo -> 4" << endl;
    cout << "Bispo -> 3 " << endl;
    cout << "Dama -> 2 " << endl;
    cout << "Rei -> 1 " << endl;
}

// mostra uma lista com as peças do jogador 1
void lista_peca_jogador2(){
    cout << "Lista de pecas do jogador 2:" << endl;
    cout << "----------------------------" << endl;
    cout << "peão -> 32" << endl;
    cout << "peão -> 31" << endl;
    cout << "peão -> 30" << endl;
    cout << "peão -> 29" << endl;
    cout << "peão -> 28" << endl;
    cout << "peão -> 27" << endl;
    cout << "peão -> 26" << endl;
    cout << "peão -> 25" << endl;
    cout << "Torre -> 24" << endl;
    cout << "Torre -> 23" << endl;
    cout << "Cavalo -> 22" << endl;
    cout << "Cavalo -> 21" << endl;
    cout << "Bispo -> 20" << endl;
    cout << "Bispo -> 19 " << endl;
    cout << "Dama -> 18 " << endl;
    cout << "Rei -> 17 " << endl;
}

// formata o tabuleiro com as peças para o inicio do jogo
void formata_tabuleiro(int* tabuleiro, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i * colunas + j] = 0;
        }
    }
    tabuleiro[0 * colunas + 0] = 7;
    tabuleiro[0 * colunas + 1] = 6;
    tabuleiro[0 * colunas + 2] = 4;
    tabuleiro[0 * colunas + 3] = 2;
    tabuleiro[0 * colunas + 4] = 1;
    tabuleiro[0 * colunas + 5] = 3;
    tabuleiro[0 * colunas + 6] = 5;
    tabuleiro[0 * colunas + 7] = 8;

    tabuleiro[1 * colunas + 0] = 9;
    tabuleiro[1 * colunas + 1] = 10;
    tabuleiro[1 * colunas + 2] = 11;
    tabuleiro[1 * colunas + 3] = 12;
    tabuleiro[1 * colunas + 4] = 13;
    tabuleiro[1 * colunas + 5] = 14;
    tabuleiro[1 * colunas + 6] = 15;
    tabuleiro[1 * colunas + 7] = 16;

    tabuleiro[7 * colunas + 0] = 24;
    tabuleiro[7 * colunas + 1] = 22;
    tabuleiro[7 * colunas + 2] = 20;
    tabuleiro[7 * colunas + 3] = 18;
    tabuleiro[7 * colunas + 4] = 14;
    tabuleiro[7 * colunas + 5] = 19;
    tabuleiro[7 * colunas + 6] = 21;
    tabuleiro[7 * colunas + 7] = 23;

    tabuleiro[6 * colunas + 0] = 25;
    tabuleiro[6 * colunas + 1] = 26;
    tabuleiro[6 * colunas + 2] = 27;
    tabuleiro[6 * colunas + 3] = 28;
    tabuleiro[6 * colunas + 4] = 29;
    tabuleiro[6 * colunas + 5] = 30;
    tabuleiro[6 * colunas + 6] = 31;
    tabuleiro[6 * colunas + 7] = 32;
}

// modifica o tabuleiro 
void modifica_tabuleiro(int* tabuleiro, int peca, int linha_destino, int coluna_destino, int linha_origem, int coluna_origem){
    int colunas = 8;
    tabuleiro[linha_origem * colunas + coluna_origem] = 0;
    tabuleiro[linha_destino * colunas + coluna_destino] = peca;
}

// retorna um vertor com a informação das peças do jogador 1
vector<bool> verifica_pecas_j1(const int tabuleiro[8][8]){
    vector<bool> saida;//[peao,peao,peao,peao,peao,peao,peao,peao,torre,cavalo,bispo,dama,rei,bispo,cavalo,torre]
    bool peca[16];
    for(int i = 0; i < 16; i++){
        peca[i] = false;
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            switch (tabuleiro[i][j]){
            case 16:
                peca[0] = true;
                break;
            case 15:
                peca[1] = true;
                break;
            case 14:
                peca[2] = true;
                break;
            case 13:
                peca[3] = true;
                break;
            case 12:
                peca[4] = true;
                break;
            case 11:
                peca[5] = true;
                break;
            case 10:
                peca[6] = true;
                break;
            case 9:
                peca[7] = true;
                break;
            case 8:
                peca[8] = true;
                break;
            case 6:
                peca[9] = true;
                break;
            case 4:
                peca[10] = true;
                break;
            case 2:
                peca[11] = true;
                break;
            case 1:
                peca[12] = true;
                break;
            case 3:
                peca[13] = true;
                break;
            case 5:
                peca[14] = true;
                break;
            case 7:
                peca[15] = true;
                break;
            default:
                break;
            }
        }
    }
    for(int i = 0; i < 16; i++){
        saida.push_back(peca[i]);
    }
    return saida;
}

// retorna um vertor com a informação das peças do jogador 2
vector<bool> verifica_pecas_j2(const int tabuleiro[8][8]){
    vector<bool> saida;//[peao,peao,peao,peao,peao,peao,peao,peao,torre,cavalo,bispo,dama,rei,bispo,cavalo,torre]
    bool peca[16];
    for(int i = 0; i < 16; i++){
        peca[i] = false;
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            switch (tabuleiro[i][j]){
            case 32:
                peca[0] = true;
                break;
            case 31:
                peca[1] = true;
                break;
            case 30:
                peca[2] = true;
                break;
            case 29:
                peca[3] = true;
                break;
            case 28:
                peca[4] = true;
                break;
            case 27:
                peca[5] = true;
                break;
            case 26:
                peca[6] = true;
                break;
            case 25:
                peca[7] = true;
                break;
            case 24:
                peca[8] = true;
                break;
            case 22:
                peca[9] = true;
                break;
            case 20:
                peca[10] = true;
                break;
            case 18:
                peca[11] = true;
                break;
            case 17:
                peca[12] = true;
                break;
            case 19:
                peca[13] = true;
                break;
            case 21:
                peca[14] = true;
                break;
            case 23:
                peca[15] = true;
                break;
            default:
                break;
            }
        }
    }
    for(int i = 0; i < 16; i++){
        saida.push_back(peca[i]);
    }
    return saida;
}

// verifica se o movimento e valido
bool valida_movimento(int linha, int coluna){
    if(linha > 7 || linha < 0 || coluna > 7 || coluna < 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int mapa[8][8];
    formata_tabuleiro(&mapa[0][0],8,8);
    tabuleiro(mapa);
}
