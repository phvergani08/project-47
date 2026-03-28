#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void description();

void jornada()
{
    system("cls");

    /*HEADER*/
    printf("Boas vindas a JORNADA. Aqui voce ira fazer sua historia de assassino. Elimine os alvos pelos diversos mapas, ganhe dinheiro e melhore seus equipamentos.\n");
    sleep(3);
    printf("Escolha o alvo desejado.\n\n");
    printf("1. Wilson Fisk, Prefeito de Nova York.\n");
    sleep(0.5);
    printf("2. Lebron James, Jogador de Basquete.\n");
    sleep(0.5);
    printf("3. Flash Reverso, Velocista do Futuro.\n");
    sleep(0.5);
    printf("4. Kyllian Mbappe, Jogador de Futebol.\n");

    int escolha = 0;
    scanf("%d", &escolha);
    switch(escolha)
    {
        case 1: // Wilson Fisk
            description(1);
            break;
        case 2: // Lebron James
            description(2);
            break;
        case 3: // Flash Reverso
            description(3);
            break;
        case 4: // Mbappe
            description(4);
            break;
    }
}

/*Maps*/
void fisk();
void lebron();
void flash();
void mbappe();

void redirect();


/* Descricao de cada um dos alvos */
void description(int alvo)
{
    switch(alvo)
    {   
        case 1: // Wilson Fisk
            system("cls");

            printf("Ficha Wilson Fisk:\n");
            printf("-------------------\n\n");

            printf("Nome: Wilson Fisk\n");
            printf("Codenome: Kingpin, Rei do Crime\n");
            printf("Idade: 48 anos\n");
            printf("Ocupacao: Criminoso e tem uma mente brilhante(literamente).\n\tPrefeito e dono de um negocio legitimo.\n\tChefe do crime e mafioso\n");
            redirect(1);
            break;
            
            case 2: // Lebron James
            system("cls");
            printf("Ficha Lebron James:\n");
            printf("-------------------\n\n");

            printf("Nome: LeBron Raymone James\n");
            printf("Codenome: King James\n");
            printf("Idade: 41 anos\n");
            printf("Ocupacao: Jogador de basquete do Los Angeles Lakers\n");
            redirect(2);
            break;
            
            case 3: // Flash Reverso
            system("cls");
            printf("Ficha Flash Reversao:\n");
            printf("-------------------\n\n");

            printf("Nome: Eobard Thawne\n");
            printf("Codenome: Flash Reverso\n");
            printf("Idade: +80 anos\n");
            printf("Ocupacao: velocista meta-humano do século 22.\n");
            redirect(3);
            break;
            case 4: // Mbappe
            system("cls");

            printf("Ficha Kyllian Mbappe:\n");
            printf("-------------------\n\n");

            printf("Nome: Kylian Mbappe Lottin\n");
            printf("Codenome: Mbappe, Tartaruga Ninja\n");
            printf("Idade: 27 anos\n");
            printf("Ocupacao: Jogador de futebol do Real Madrid.\n");
            redirect(4);
            break;
    }
}


/*Redirecionamento*/
void redirect(int mapa)
{
    int escolha = 0;
    /*Escolha do alvo (y/n)*/
    sleep(2);
    printf("\nVoce tem certeza que deseja escolher este alvo? (1. s/ 2. n)\n");
    scanf("%d", &escolha);

    if (escolha == 1) // If choose == yes
    {
        switch(mapa) // Options
        {
            case 1:
                fisk();
                break;
            case 2:
                lebron();
                break;
            case 3:
                flash();
                break;
            case 4:
                mbappe();
                break;
        }
    }
    else // If choose == no
    {
        jornada(); // Return to jornada.
    }

}

void fisk()
{
    printf("TROPA DO GORDAO");
}

void lebron()
{
    flash("TROPA DO GORDAO");
}

void flash()
{
    printf("TROPA DO GORDAO");
}

void mbappe()
{
    printf("TROPA DO GORDAO");
}