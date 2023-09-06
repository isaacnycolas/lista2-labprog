#include <stdio.h>

int votoPaulo = 0;
int votoRenata = 0;
int votoBranco = 0;
int votoNulo = 0;
int opcao;
int confirmar;

void eleicao(void) {
    switch (opcao) {
        case 0:
            puts("Deseja confirmar voto em branco? Digite 1 para confirmar - Digite outra tecla para cancelar.");
            scanf("%d", &confirmar);
            if (confirmar == 1) {
                votoBranco += 1;
                puts("Voto em branco registrado!");
            }
            break;
        case 5:
            puts("Deseja confirmar voto em Paulo para presidente? Digite 1 para confirmar - Digite outra tecla para cancelar.");
            scanf("%d", &confirmar);
            if (confirmar == 1) {
                votoPaulo += 1;
                puts("Voto em Paulo registrado!");
            }
            break;
        case 7:
            puts("Deseja confirmar voto em Renata para presidente? Digite 1 para confirmar - Digite outra tecla para cancelar.");
            scanf("%d", &confirmar);
            if (confirmar == 1) {
                votoRenata += 1;
                puts("Voto em Renata registrado!");
            }
            break;
        default:
            if (opcao > 0) {
                puts("Deseja confirmar voto nulo? Digite 1 para confirmar - Digite outra tecla para cancelar.");
                scanf("%d", &confirmar);
                if (confirmar == 1) {
                    votoNulo += 1;
                    puts("Voto nulo registrado!");
                }
            }
            break;
    }
}

void resultado(void) {
    float totalVotos = votoBranco + votoNulo + votoRenata + votoPaulo;
    if (totalVotos > 0) {
        float porcBranco = (votoBranco * 100) / totalVotos;
        float porcNulo = (votoNulo * 100) / totalVotos;
        float porcRenata = (votoRenata * 100) / totalVotos;
        float porcPaulo = (votoPaulo * 100) / totalVotos;
        printf("Total de votos: %.0f \n", totalVotos);
        printf("Porcentagem de votos em Renata: %.2f%% \n", porcRenata);
        printf("Porcentagem de votos em Paulo: %.2f%% \n", porcPaulo);
        printf("Porcentagem de votos brancos: %.2f%% \n", porcBranco);
        printf("Porcentagem de votos nulos: %.2f%% \n", porcNulo);
        if (porcPaulo > porcRenata) {
            puts("PAULO é eleito o novo presidente!");
        } else if (porcRenata > porcPaulo) {
            puts("RENATA é eleita a nova presidente!");
        } else {
            puts("Empate entre Paulo e Renata!");
        }
    } else {
        puts("Nenhum voto registrado.");
    }
}

int main() {
    int continuar = 1;
    puts("BEM VINDO À ELEIÇÃO!");
    while (continuar) {
        puts("Digite 0 para votar em branco");
        puts("Digite 5 para votar em Paulo para presidente");
        puts("Digite 7 para votar em Renata para presidente");
        puts("Digite qualquer valor negativo para encerrar a votação");
        scanf("%d", &opcao);
        
        if (opcao < 0) {
            continuar = 0; // Sai do loop
        } else {
            eleicao();
        }
    }
    
    resultado();
    
    return 0;
}
