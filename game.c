/*
    HITMAN 47 - PROBABILITIES GAME
    - IN THIS GAME YOU NEED TO KILL YOUR TARGET. 
    - MORE KILL, MORE DIFFICULTIES. EACH CASE WILL REQUIRE AN BETTER EQUIPMENT. CAN BUY IT IN THE STORE.
    - IN EACH KILL, YOU'LL EARN MONEY. WITH THIS MONEY, YOU CAN BUY BATTER THINGS ON STORE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float money = 4000;

void loja_armas();
void loja_equip();
void jornada();

int main()
{
    // Variables
    int op_escolha = 0;

    /*Main Menu*/
    system("cls");
    printf("HITMAN 47\t\t Dinheiro: %.lf\n", money);
    printf("----------------------------------\n");

    /*Options*/
    printf("1. LOJA DE ARMAS\n");
    printf("2. LOJA DE EQUIPAMENTOS\n");
    printf("3. INICIAR JORNADA\n");
    scanf("%d", &op_escolha);

    switch(op_escolha)
    {
        case 1:
            loja_armas();
            break;
        case 2:
            loja_equip();
            break;
        case 3:
            jornada();
            break;
        default:
            main();
    }
}

void money_verifier();
void compra_cancelada();
void op_buy();

void loja_armas()
{
    system("cls");
    // TITLE BAR
    printf("LOJA DE ARMAS\t\tDINHEIRO: %.lf\n", money);
    printf("----------------------------------\n");

    /*STORE OPTIONS*/
    int op_store = 0;

    printf("ARMAS:\n");
    printf("1. AK-47\n");
    printf("2. SCAR\n");
    printf("3. MP5\n");
    printf("4. DESERT EAGLE\n");
    scanf("%d", &op_store);

    /*GUNS DESCRIPTION*/
    switch (op_store)
    {
        /*GUN 1*/
        case 1: // AK-47
            system("cls");
            printf("AK-47\n"); // Title
            printf("----------\n"); // Title Bar
            printf("VALOR: $1500\n"); // Price
            printf("UMA OTIMA ARMA PARA LONGA DISTANCIA. DIFICULDADE: MEDIO\n"); // Description
            printf("--------------------------------\n"); // spacer
            printf("Voce gostaria de adquirir? (1. s/2. n)\n");
            op_buy();
            money_verifier(1);
            break;

            /*GUN 2*/
        case 2:
            system("cls");
            printf("SCAR\n"); // Title
            printf("----------\n"); // Title Bar
            printf("VALOR: $4000\n"); // Price
            printf("ARMA PARA VETERANOS. 1 TIRO, UMA MORTE. DIFICULDADE: ALTA\n"); // Description
            printf("--------------------------------\n"); // spacer
            printf("Voce gostaria de adquirir? (1. s/2. n)\n");
            op_buy();
            money_verifier(2);
            break;

            /*GUN 3*/
        case 3:
            system("cls");
            printf("MP5\n"); // Title
            printf("----------\n"); // Title Bar
            printf("VALOR: $2000\n"); // Price
            printf("ARMA PARA CURTA DISTANCIA. MAIS DE 2 TIROS POR SEGUNDO. DIFICULDADE: MEDIA\n"); // Description
            printf("--------------------------------\n"); // spacer
            printf("Voce gostaria de adquirir? (1. s/2. n)\n");
            op_buy();
            money_verifier(3);
            break;

            /*GUN 4*/
        case 4:
            system("cls");
            printf("DESERT EAGLE\n"); // Title
            printf("----------\n"); // Title Bar
            printf("VALOR: $6000\n"); // Price
            printf("ARMA PARA VERDADEIROS ASSASSINOS. 1 TIRO, UMA MORTE, PORÉM REQUER UMA ÓTIMA MIRA. DIFICULDADE: ALTA\n"); // Description
            printf("--------------------------------\n"); // spacer
            printf("Voce gostaria de adquirir? (1. s/2. n)\n");
            op_buy();
            money_verifier(4);
            break;
            

    }

    
}

void op_buy() // Buy options for every gun
{
    int buy_op = 0; // (s/n)

    scanf("%d", &buy_op); // Getting the (s/n)

        if(buy_op == 1)
    {
        printf("Voce comprou essa arma.\n");
    }
    else
    {
        compra_cancelada();
    }
}

/*Verify if the money is enought to buy*/
void money_verifier(int gun)
{
    if (gun == 1)
    {
        int price = 1500;
        if (money >= price)
        {
            money = money - price;
            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
    }

    else if (gun == 2)
    {
        int price = 4000;
        if (money >= price)
        {
            money = money - price;
            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
    }

    else if (gun == 3)
    {
        int price = 2000;
        if (money >= price)
        {
            money = money - price;
            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
    }

    else {
        int price = 6000;
        if (money >= price)
        {
            money = money - price;
            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
    }
}

/*If the buy fail*/
void compra_cancelada()
{
    printf("Compra Cancelada.\n");
    printf("Voltando ao menu principal.");
    sleep(1);
    main();
}


void loja_equip()
{
    printf("AAAA");
}
void jornada()
{
    printf("AAAA");
}