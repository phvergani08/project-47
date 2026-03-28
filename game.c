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

void mochila();
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
    printf("1. Mochila\n");
    printf("2. LOJA DE ARMAS\n");
    printf("3. LOJA DE EQUIPAMENTOS\n");
    printf("4. INICIAR JORNADA\n");
    scanf("%d", &op_escolha);

    switch(op_escolha)
    {
        case 1:
            mochila();
            break;
        case 2:
            loja_armas();
            break;
        case 3:
            loja_equip();
            break;
        case 4:
            jornada();
            break;
        default:
            main();
    }
}

void money_verifier();
void compra_cancelada();
void op_buy();

/* Items in the packpack*/
void mochila()
{
    FILE *fptr; // pointer for guns.txt
    FILE *eptr; // pointer for equip.txt

    fptr = fopen("data/guns.txt", "r");
    eptr = fopen("data/equip.txt", "r");

    char guns_content[100]; // guns.txt content
    char equip_content[100]; // equip.txt content

    system("cls");
    printf("MOCHILA\n\n");

    
    /*printing guns*/
    printf("ARMAS:\n");
    while(fgets(guns_content, sizeof(guns_content), fptr))
    {
        printf("%s", guns_content);
    }
    
    /*printing equipments*/
    printf("\n\nEQUIPAMENTOS\n");
        while(fgets(equip_content, sizeof(equip_content), eptr))
        {
            printf("%s", equip_content);
        }

    fclose(fptr);
    fclose(eptr);

}

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
    int buy_op = 0; // (y/n)

    scanf("%d", &buy_op); // Getting the (y/n)

        if(buy_op == 2)
    {
        compra_cancelada();
        main();
    }
}

/*Verify if the money is enought to buy*/
void money_verifier(int gun)
{
    /*FILE * TO STORE THE PURCASHED GUNS*/
    FILE *fptr;
    fptr = fopen("data/guns.txt", "a");

    if (gun == 1)
    {
        int price = 1500;
        if (money >= price) // Se o valor for menor ou igual ao dinheiro
        {
            money = money - price;

            fprintf(fptr, "AK\n");
            fclose(fptr);

            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
        else // Caso nao tenha dinheiro suficiente
        {
            compra_cancelada();
        }
    }

    else if (gun == 2)
    {
        int price = 4000;
        if (money >= price)
        {
            money = money - price;

            fprintf(fptr, "SCAR\n");
            fclose(fptr);

            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
        else // Caso nao tenha dinheiro suficiente
        {
            compra_cancelada();
        }
    }

    else if (gun == 3)
    {
        int price = 2000;
        if (money >= price)
        {
            money = money - price;

            fprintf(fptr, "MP5\n");
            fclose(fptr);

            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
        else // Caso nao tenha dinheiro suficiente
        {
            compra_cancelada();
        }
    }

    else {
        int price = 6000;
        if (money >= price)
        {
            money = money - price;

            fprintf(fptr, "DESERT\n");
            fclose(fptr);

            printf("compra realizada com sucesso.");
            sleep(2);
            main();
        }
        else // Caso nao tenha dinheiro suficiente
        {
            compra_cancelada();
        }
    }
    fclose(fptr);
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