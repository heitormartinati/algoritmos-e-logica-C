#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[51];
    int reserved;
} Guest;

void checkRoom(Guest *guests);
void reserveRoom(Guest *guests);
void cancelReservation(Guest *guests);

int main(){
    Guest *guests = malloc(5 * sizeof(Guest));
    int i;

    for(i = 0; i < 5; i++){
        guests[i].reserved = 0;
    }

    int choice = -1;

    while(choice != 0){
        printf("==== HOTEL ====\n");
        printf("1 - Ver quartos\n");
        printf("2 - Reservar quarto\n");
        printf("3 - Cancelar reserva\n");
        printf("0 - Sair\n");

        printf("Escolha: \n");
        scanf("%d", &choice);

        switch (choice){
            case 0: printf("Saindo...\n");
            break;

            case 1: checkRoom(guests);
            printf("\n");
            break;

            case 2: reserveRoom(guests);
            printf("\n");
            break;

            case 3: cancelReservation(guests);
            printf("\n");
            break;

            default:
            printf("Opcao invalida!\n");
            printf("\n");
        }
    }

    free(guests);
    return 0;
}

void checkRoom(Guest *guests){
    int i;

    printf("===== QUARTOS =====\n");

    for(i = 0; i < 5; i++){
        if(guests[i].reserved == 0){
            printf("Quarto %d: LIVRE\n", i + 1);
        }
        else{
            printf("Quarto %d: OCUPADO - %s\n", i + 1, guests[i].name);
        }
    }
}

void reserveRoom(Guest *guests){
    int i, room;
    printf("Digite o numero do quarto: ");
    scanf("%d", &room);

    if(room < 1 || room > 5){
        printf("Quarto invalido!\n");
    }

    if(guests[room - 1].reserved == 0){
        printf("Digite o nome do hospede: ");
        scanf(" %50[^\n]", guests[room - 1].name);
        printf("Reserva realizada!\n");

        guests[room - 1].reserved = 1;
    }
    else {
        printf("Esse quarto ja esta ocupado!\n");
    }
}

void cancelReservation(Guest *guests){
    int room;
    printf("Digite o quarto para cancelar: ");
    scanf("%d", &room);
    if(guests[room - 1].reserved == 0){
        printf("Esse quarto ja esta livre!");
    }
    else{
        printf("Reserva cancelada!\n");
        printf("\n");

        guests[room - 1].reserved = 0;
    }
}