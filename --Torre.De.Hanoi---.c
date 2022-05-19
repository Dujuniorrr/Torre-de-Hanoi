#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 7
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define reset "\e[0m"
#include <time.h>


typedef struct pilha{
    int topo;
    int item[TAM];
}Pilha;

int isEmpty(Pilha p){
    if(p.topo == -1){
       return 1;
    }
    else{
        return 0;
    }
}

int isFull(Pilha p, int nivel){
    if(nivel == 1){
        if(p.topo == 2){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(nivel == 2){
        if(p.topo == 4){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(nivel == 3){
        if(p.topo == 6){
            return 1;
        }
        else{
            return 0;
        }
    }
}

void push(Pilha *p, int x){
    if(p->topo == TAM-1){
        printf("ERRO: A pilha está cheia!");
    }
    else{
        p->topo++;
        p->item[p->topo] = x;
    }
}

int pop(Pilha *p){
    if(p->topo == -1){
        printf("ERRO: A pilha está vazia!");
    }
    else{
        p->item[p->topo]=0;
        p->topo--;
    }
}

void top2(Pilha p, Pilha p2, Pilha p3, int cont, int nivel){
    int i;
    printf(GRN"                      ======================================");
    printf("\n                           ------ TORRE DE HANOI ------");
    printf("\n                               ______________________\n"reset);
    printf(BLU"\n                              Numero de Movimentos: %i\n"reset, cont);
    if(nivel == 1){
        if(isFull(p2,nivel)==1){
            for(i=2; i>=0; i--){
                printf(YEL"\n                                   | %i "GRN"| %i |"YEL" %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        printf(GRN"\n                                   | A | B | C |\n"reset);
        delay(4);
        }
        if(isFull(p3,nivel)==1){
            for(i=2; i>=0; i--){
                printf(YEL"\n                                   | %i | %i |"GRN" %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        printf(GRN"\n                                   | A | B | C |\n"reset);
        delay(4);
        }
        else{
            for(i=2; i>=0; i--){
                printf(YEL"\n                                   | %i | %i | %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        }
    }
    if(nivel == 2){
        if(isFull(p2,nivel)==1){
            for(i=4; i>=0; i--){
                printf(YEL"\n                                   | %i "GRN"| %i |"YEL" %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        printf(GRN"\n                                   | A | B | C |\n"reset);
        delay(4);
        }
        if(isFull(p3,nivel)==1){
            for(i=4; i>=0; i--){
                printf(YEL"\n                                   | %i | %i |"GRN" %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        printf(GRN"\n                                   | A | B | C |\n"reset);
        delay(4);
        }
        else{
            for(i=4; i>=0; i--){
                printf(YEL"\n                                   | %i | %i | %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        }
    }
    if(nivel == 3){
        if(isFull(p2,nivel)==1){
            for(i=6; i>=0; i--){
                printf(YEL"\n                                   | %i "GRN"| %i |"YEL" %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        printf(GRN"\n                                   | A | B | C |\n"reset);
        delay(4);
        }
        if(isFull(p3,nivel)==1){
            for(i=6; i>=0; i--){
                printf(YEL"\n                                   | %i | %i |"GRN" %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        printf(GRN"\n                                   | A | B | C |\n"reset);
        delay(4);
        }
        else{
            for(i=6; i>=0; i--){
                printf(YEL"\n                                   | %i | %i | %i |"reset, p.item[i], p2.item[i], p3.item[i]);
            }
        }
    }
    printf(GRN"\n                                   | A | B | C |\n"reset);
}

void delay(int number_of_seconds){
    int mili_seconds = 300* number_of_seconds;
    clock_t start_time=clock();
    while(clock()<start_time+mili_seconds);
}

int main(){
    Pilha p1, p2, p3;
    int i, x, cont=0, repeat, nivel;
    char mov1, mov2;
    p1.topo=-1;
    p2.topo=-1;
    p3.topo=-1;
    printf(RED"                               Desenvolvido por Durval Junior e Luis Fernando\n");
    printf(GRN"                              __________________________________________________\n\n");
    delay(1);
    printf("                                 d888888b  .d88b.  d8888b. d8888b. d88888b\n");
    delay(1);
    printf("                                 `~~88~~' .8P  Y8. 88  `8D 88  `8D 88'   \n");
    delay(1);
    printf("                                    88    88    88 88oobY' 88oobY' 88ooooo\n");
    delay(1);
    printf("                                    88    88    88 88`8b   88`8b   88~~~~~\n");
    delay(1);
    printf("                                    88    `8b  d8' 88 `88. 88 `88. 88.\n");
    delay(1);
    printf("                                    YP     `Y88P'  88   YD 88   YD Y88888P\n\n");
    delay(1);

    printf("                                            d8888b. d88888b \n");
    delay(1);
    printf("                                            88  `8D 88'\n");
    delay(1);
    printf("                                            88   88 88ooooo \n");
    delay(1);
    printf("                                            88   88 88~~~~~\n");
    delay(1);
    printf("                                            88  .8D 88.\n");
    delay(1);
    printf("                                            Y8888D' Y88888P\n\n");
    delay(1);

    printf("                                  db   db  .d8b.  d8b   db  .d88b.  d888888b\n");
    delay(1);
    printf("                                  88   88 d8' `8b 888o  88 .8P  Y8.   `88' \n");
    delay(1);
    printf("                                  88ooo88 88ooo88 88V8o 88 88    88    88\n");
    delay(1);
    printf("                                  88~~~88 88~~~88 88 V8o88 88    88    88 \n");
    delay(1);
    printf("                                  88   88 88   88 88  V888 `8b  d8'   .88.\n");
    delay(1);
    printf("                                  YP   YP YP   YP VP   V8P  `Y88P'  Y888888P \n");
    delay(1);
    printf("\n                                _____________________________________________\n");
    delay(1);
    printf("\n                                      APERTE QUALQUER TECLA PARA INICIAR");
    printf("\n\n                                                    START"reset);
    getch();
    repeat=1;
    system("cls");
    printf(GRN"\n                                  _____________________________________________\n");
    printf("\n                                  --> Qual e o objetivo da Torre de Hanoi? <--\n");
    printf("\n                               O objetivo e passar todos os discos de um pino "YEL"(A)"GRN);
    printf("\n                          para qualquer outro"YEL"(B ou C)"GRN", usando um dos pinos como auxiliar");
    printf("\n                         de maneira que um disco maior nunca fique em cima de outro menor.\n"reset);
    while(repeat == 1){
    printf(GRN"\n                         -----------------------------------------------------------------\n");
    printf("\n                                         ESCOLHA EM QUAL NIVEL DESEJA JOGAR: ");
    printf("\n\n                                                 1) "YEL"Nivel facil");
    printf(GRN"\n\n                                                 2) "YEL"Nivel medio");
    printf(GRN"\n\n                                                 3) "YEL"Nivel dificil "reset);
    scanf(" %i", &nivel);
    p2.item[0]=0;
    p3.item[0]=0;
    p2.item[1]=0;
    p3.item[1]=0;
    p2.item[2]=0;
    p3.item[2]=0;
    p2.item[3]=0;
    p3.item[3]=0;
    p2.item[4]=0;
    p3.item[4]=0;
    p2.item[5]=0;
    p3.item[5]=0;
    p2.item[6]=0;
    p3.item[6]=0;
    if(nivel == 1){
        push(&p1,3);
        push(&p1,2);
        push(&p1,1);
    }
    else if(nivel == 2){
        push(&p1,5);
        push(&p1,4);
        push(&p1,3);
        push(&p1,2);
        push(&p1,1);
    }
    else if(nivel == 3){
        push(&p1,7);
        push(&p1,6);
        push(&p1,5);
        push(&p1,4);
        push(&p1,3);
        push(&p1,2);
        push(&p1,1);
    }
    system("cls");
    top2(p1,p2,p3, cont, nivel);
    while(isFull(p3,nivel) == 0 && isFull(p2,nivel) == 0){
        printf(BLU"\n--> Selecione qual topo deseja remover (A, B ou C): "reset);
        scanf(" %c", &mov1);
        printf(BLU"\n--> Selecione qual topo deseja adicionar (A, B ou C): "reset);
        scanf(" %c"reset, &mov2);
        if((mov1 == 'a' || mov1 == 'A') && (mov2 == 'b' || mov2 == 'B')) {
            if (p2.item[p2.topo] == 1 && p1.item[p1.topo] > 1 ){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p2.item[p2.topo] == 2 && p1.item[p1.topo] > 2){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p2.item[p2.topo] == 3 && p1.item[p1.topo]> 3){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p2.item[p2.topo] == 4 && p1.item[p1.topo] > 4){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p2.item[p2.topo] == 5 && p1.item[p1.topo] > 5){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p2.item[p2.topo] == 6 && p1.item[p1.topo] > 6){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(isEmpty(p1)==0){
                push(&p2, p1.item[p1.topo]);
                pop(&p1);
                cont++;
                system("cls");
                top2(p1,p2,p3, cont, nivel);
            }
            else{
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                   --- O campo primario nao pode estar vazio! ---\n"reset);
            }
        }
        else if((mov1 == 'a' || mov1 == 'A') && (mov2 == 'c' || mov2 == 'C')){
              if (p3.item[p3.topo] == 1 && p1.item[p1.topo] > 1 ){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 2 && p1.item[p1.topo] > 2){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p3.item[p3.topo] == 3 && p1.item[p1.topo] > 3){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p3.item[p3.topo] == 4 && p1.item[p1.topo] > 4){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 5 && p1.item[p1.topo] > 5){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 6 && p1.item[p1.topo] > 6){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(isEmpty(p1)==0){
            push(&p3, p1.item[p1.topo]);
            pop(&p1);
            cont++;
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            }
            else{
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                   --- O campo primario nao pode estar vazio! ---\n"reset);
            }
        }
        else if((mov1 == 'a' || mov1 == 'A') && (mov2 == 'a' || mov2 =='A')){
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            printf(RED"\n                          ----- Movimento invalido! -----\n");
            printf("                               -- Tente novamente --\n"reset);
        }
        else if((mov1 == 'b' || mov1 == 'B') && (mov2 == 'c' || mov2 == 'C')){
            if (p3.item[p3.topo] == 1 && p2.item[p2.topo] > 1 ){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 2 && p2.item[p2.topo] > 2){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p3.item[p3.topo] == 3 && p2.item[p2.topo] > 3){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 4 && p2.item[p2.topo] > 4){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 5 && p2.item[p2.topo] > 5){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p3.item[p3.topo] == 6 && p2.item[p2.topo] > 6){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(isEmpty(p2)==0){
            push(&p3, p2.item[p2.topo]);
            pop(&p2);
            cont++;
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            }
            else{
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                   --- O campo primario nao pode estar vazio! ---\n"reset);
            }
        }
        else if((mov1 == 'b' || mov1 == 'B') && (mov2 == 'a' || mov2 == 'A')){
            if (p1.item[p1.topo] == 1 && p2.item[p2.topo] > 1 ){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p1.item[p1.topo] == 2 && p2.item[p2.topo] > 2){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p1.item[p1.topo] == 3 && p2.item[p2.topo] > 3){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p1.item[p1.topo] == 4 && p2.item[p2.topo] > 4){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p1.item[p1.topo] == 5 && p2.item[p2.topo] > 5){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p1.item[p1.topo] == 6 && p2.item[p2.topo] > 6){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(isEmpty(p2)==0){
            push(&p1, p2.item[p2.topo]);
            pop(&p2);
            cont++;
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            }
            else{
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                   --- O campo primario nao pode estar vazio! ---\n"reset);
            }
        }
        else if((mov1 == 'b' || mov1 == 'B') && (mov2 == 'b' || mov2 == 'B')){
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            printf(RED"\n                          ----- Movimento invalido! -----\n");
            printf("                               -- Tente novamente --\n"reset);
        }
        else if((mov1 == 'c' || mov1 == 'C') && mov2 == 'a'|| mov2 == 'A'){
            if (p1.item[p1.topo] == 1 && p3.item[p3.topo] > 1 ){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p1.item[p1.topo] == 2 && p3.item[p3.topo] > 2){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p1.item[p1.topo] == 3 && p3.item[p3.topo] > 3){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p1.item[p1.topo] == 4 && p3.item[p3.topo] > 4){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p1.item[p1.topo] == 5 && p3.item[p3.topo]> 5){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p1.item[p1.topo] == 6 && p2.item[p2.topo] > 6){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(isEmpty(p3)==0){
            push(&p1, p3.item[p3.topo]);
            pop(&p3);
            cont++;
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            }
            else{
                system("cls");
                top2(p1,p2,p3, cont, nivel);;
                printf(RED"\n                   --- O campo primario nao pode estar vazio! ---\n"reset);
            }
        }
        else if((mov1 == 'c' || mov1 == 'C') && (mov2 == 'b' || mov2 == 'B')){
            if (p2.item[p2.topo] == 1 && p3.item[p3.topo] > 1 ){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p2.item[p2.topo] == 2 && p3.item[p3.topo] > 2){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
             else if(p2.item[p2.topo] == 3 && p3.item[p3.topo] > 3){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p2.item[p2.topo] == 4 && p3.item[p3.topo] > 4){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p2.item[p2.topo] == 5 && p3.item[p3.topo] > 5){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(p2.item[p2.topo] == 6 && p2.item[p2.topo] > 6){
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                          ----- Movimento invalido! -----\n");
                printf("                               -- Tente novamente --\n"reset);
            }
            else if(isEmpty(p3)==0){
            push(&p2, p3.item[p3.topo]);
            pop(&p3);
            cont++;
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            }
            else{
                system("cls");
                top2(p1,p2,p3, cont, nivel);
                printf(RED"\n                   --- O campo primario nao pode estar vazio! ---\n"reset);
            }
        }
        else if((mov1 == 'c' || mov1 == 'C') && (mov2 == 'c' || mov2 == 'C')){
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            printf(RED"\n                          ----- Movimento invalido! -----\n");
            printf("                               -- Tente novamente --\n"reset);
        }
        else{
            system("cls");
            top2(p1,p2,p3, cont, nivel);
            printf(RED"\n                          ----- Movimento invalido! -----\n");
            printf("                               -- Tente novamente --\n"reset);
        }
    }
        p2.topo = -1;
        p3.topo = -1;
        system("cls");
        printf(GRN"                      ======================================");
        printf("\n                           ------ TORRE DE HANOI ------");
        printf("\n                               ______________________\n"reset);
        if(nivel = 1){
            if(cont==7){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                        -- Voce jogou de forma excelente! --");
                printf("\n                               ______________________\n"reset);
            }
            else if(cont>7 && cont<=10){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                                -- Voce jogou bem! --");
                 printf("\n                               ______________________\n"reset);
            }
            else if(cont>10){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                      -- Voce jogou bem, mas deve treinar mais! --");
                printf("\n                               ______________________\n"reset);
            }
        }
        if(nivel = 2){
            if(cont==31){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                        -- Voce jogou de forma excelente! --");
                printf("\n                               ______________________\n"reset);
            }
            else if(cont>31 && cont<=50){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                                -- Voce jogou bem! --");
                printf("\n                               ______________________\n"reset);
            }
            else if(cont>50){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                      -- Voce jogou bem, mas deve treinar mais! --");
                printf("\n                               ______________________\n"reset);
            }
        }
        if(nivel = 3){
            if(cont==127){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                        -- Voce jogou de forma excelente! --");
                printf("\n                               ______________________\n"reset);
            }
            else if(cont>127 && cont<=200){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                                -- Voce jogou bem! --");
                printf("\n                               ______________________\n"reset);
            }
            else if(cont>200){
                printf(GRN"\n            d8888b.  .d8b.  d8888b.  .d8b.  d8888b. d88888b d8b   db .d8888. \n");
                delay(1);
                printf("            88  `8D d8' `8b 88  `8D d8' `8b 88  `8D 88'     888o  88 88'  YP \n");
                delay(1);
                printf("            88oodD' 88ooo88 88oobY' 88ooo88 88oooY' 88ooooo 88V8o 88 `8bo.\n");
                delay(1);
                printf("            88~~~   88~~~88 88`8b   88~~~88 88~~~b. 88~~~~~ 88 V8o88   `Y8b. \n");
                delay(1);
                printf("            88      88   88 88 `88. 88   88 88   8D 88.     88  V888 db   8D \n");
                delay(1);
                printf("            88      YP   YP 88   YD YP   YP Y8888P' Y88888P VP   V8P `8888Y'\n");
                delay(1);
                printf("\n                      -- Voce jogou bem, mas deve treinar mais! --");
                printf("\n                               ______________________\n"reset);
            }
        }
        cont = 0;
        printf(GRN"\n\n                              DESEJA JOGAR NOVAMENTE???");
        printf(GRN"\n\n                  Aperte"YEL" (1)"GRN" se SIM     Aperte"YEL" (0)"GRN" se NAO "reset);
        scanf(" %i", &repeat);
        printf("\n                               _______________________\n"reset);
        system("cls");
}
    if(repeat == 0){
         printf(RED"d88888b d888888b .88b  d88.   d8888b. d88888b      d88b  .d88b.   d888b   .d88b.\n");
         delay(1);
         printf("88'       `88'   88'YbdP`88   88  `8D 88'          `8P' .8P  Y8. 88' Y8b .8P  Y8. \n");
         delay(1);
         printf("88ooo      88    88  88  88   88   88 88ooooo       88  88    88 88      88    88 \n");
         delay(1);
         printf("88~~~      88    88  88  88   88   88 88~~~~~       88  88    88 88  ooo 88    88 \n");
         delay(1);
         printf("88        .88.   88  88  88   88  .8D 88.       db. 88  `8b  d8' 88. ~8~ `8b  d8'\n");
         delay(1);
         printf("YP      Y888888P YP  YP  YP   Y8888D' Y88888P   Y8888P   `Y88P'   Y888P   `Y88P'\n"reset);
    }
}
