/*
============================
=                          =
=  Super Trunfo - Cidades  =
=    by: @fiercelionbr     =
=          L1onX           =
=        02/03/2025        =
=                          =
============================
*/


#include <stdio.h>

// Constantes para definir os movimentos--------------------------------------------------

const int BISPO_MOV = 5; // Movimentos para a diagonal superior direita
const int TORRE_MOV = 5; // Movimentos para a direita
const int RAINHA_MOV = 8; // Movimentos para a esquerda
const int CAVALO_MOV1 = 2; // Movimentos para cima
const int CAVALO_MOV2 = 1; // Movimento para a direita

//----------------------------------------------------------------------------------------

// Função recursiva para movimentação da Torre (direita)----------------------------------

void moverTorre(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");
        moverTorre(movimentos - 1);
    }
}

//----------------------------------------------------------------------------------------

// Função recursiva para movimentação da Rainha (esquerda)--------------------------------
void moverRainha(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainha(movimentos - 1);
    }
}

//----------------------------------------------------------------------------------------

// Função recursiva para movimentação do Bispo (diagonal superior direita)----------------
void moverBispo(int movimentos) {
    if (movimentos > 0) {
        printf("Diagonal Superior Direita\n");
        moverBispo(movimentos - 1);
    }
}

//----------------------------------------------------------------------------------------

// Função para movimentação do Cavalo (duas casas para cima e uma para a direita)---------
void moverCavalo() {
    printf("\nMovimentação do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOV1; i++) { // Movimentação para cima
        printf("Cima\n");
    }
    int j = 0;
    while (j < CAVALO_MOV2) { // Movimentação para a direita
        printf("Direita\n");
        j++;
    }
}

//----------------------------------------------------------------------------------------

int main() {


// Movimentação do Bispo (diagonal superior direita)--------------------------------------

    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

//-----------------------------------------------------------------------------------------

// Movimentação da Torre (direita)---------------------------------------------------------

    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOV);

//-----------------------------------------------------------------------------------------

// Movimentação da Rainha (esquerda)-------------------------------------------------------

    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

//-----------------------------------------------------------------------------------------

// Movimentação do Cavalo (duas casas para cima e uma para a direita)----------------------
    moverCavalo();

//-----------------------------------------------------------------------------------------

    return 0;
}