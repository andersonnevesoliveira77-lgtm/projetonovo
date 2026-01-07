#include <stdio.h>

// Função responsavel por salvaros dados no arquivo
void salvar (char tipo[], int agua, int tempo) {
File  *arquivo;

// Abre o arquivo em modo de acréscimo  (append)
arquivo = fopen ("dados_cuscuz.txt","a");

if (arquivo ==NULL) {
    printf("Erro ao abrir o arquivo! \n");
    return;
}





}