#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ncurses.h>

int main (void)

{
    
    
    setlocale(LC_ALL, "Portuguese");
    int dia_semana, sala_especial, horario_especial, sala_normal, horario_normal, tipo_ingresso, quant_ingresso, pagto;
    int i, j;
    char matriz [10][5];
    
    
    printf ("\t******************************************************************\n");
    printf ("\t------------------------------------------------------------------\n");
    printf ("\t       ######  ##  ###    ##  #######  ###     ###  #######       \n");
    printf ("\t       ##      ##  ## #   ##  ##       ## #   # ##  ##   ##       \n");
    printf ("\t       ##      ##  ##  #  ##  #####    ##  # #  ##  #######       \n");
    printf ("\t       ##      ##  ##   # ##  ##       ##   #   ##  ##   ##       \n");
    printf ("\t       ######  ##  ##     ##  #######  ##       ##  ##   ##       \n");
    printf ("\t------------------------------------------------------------------\n");
    printf ("\t******************************************************************\n\n");
    
retorna_dia_erro:
    // Escolher o dia da semana
    printf ("\t Escolha o dia da semana \n\n");
    printf ("\t [1] Segunda-feira \n");
    printf ("\t [2] Terca-feira \n");
    printf ("\t [3] Quarta-feira \n");
    printf ("\t [4] Quinta-feira \n");
    printf ("\t [5] Sexta-feira \n");
    printf ("\t [6] Sabado \n");
    printf ("\t [7] Domingo \n\n");
    printf ("\n\t Digite o numero correspondente ao dia da semana desejado: ");
    scanf ("%d",& dia_semana);
    if (dia_semana>7)
    {
        system("cls");
        printf ("\n\nOpção inválida!\n\n");
        goto retorna_dia_erro;
    }//Go to para retornar o codigo caso haja exceção
    
    
    // Se o dia da semana for segunda-feira, mostrar programação especial
    if (dia_semana==1)
    {
        system("cls");
        
    retorna_salaespecial_erro:
        printf ("\n\n\t PROGRAMAÇÃO ESPECIAL \n");
        printf ("\t ESCOLHA UMA DAS OPCOES: \n");
        printf ("\t [Sala 1] Mentes perigosas \n");
        printf ("\t [Sala 2] Wall-E \n\n");
        printf ("\n\t Digite o numero da sala desejada: ");
        scanf ("%d", & sala_especial);
        
        if (sala_especial==1)
        {
            system("cls");
            
        retorna_salaespecial_1:
            printf ("\n\n\t Sala 1: Mentes perigosas\n\n");
            printf ("\t Sessao [1]: 13:30 \n");
            printf ("\t Sessao [2]: 19:30 \n\n");
            printf ("\t Comprar bilhete para qual sessao? \n");
            printf ("\n\t Digite o numero da sessao desejada: ");
            scanf ("%d",& horario_especial);
            if (horario_especial>2)
            {
                system("cls");
                printf ("\n\nOpção inválida!\n\n");
                goto retorna_salaespecial_1;
            }
        }
	       
        else	if (sala_especial == 2)
        {
            system("cls");
            
        retorna_salaespecial_2:
            printf ("\n\n\t Sala 2: Wall-E\n\n");
            printf ("\t Sessao [1]: 13:30 \n");
            printf ("\t Sessao [2]: 19:30 \n\n");
            printf ("\t Comprar bilhete para qual sessao? \n");
            printf ("\n\t Digite o numero da sessao desejada: ");
            scanf ("%d",& horario_especial);
            
            if (horario_especial>2)
            {
                system("cls");
                printf ("\n\nOpção inválida!\n\n");
                goto retorna_salaespecial_2;
            }
        }
        
        else
        {
            system("cls");
            printf ("\n\nOpção inválida!\n\n");
            goto retorna_salaespecial_erro;
        }
    }
    
    // Se o dia escolhido não for segunda-feira, mostrar programação normal
    
    if(dia_semana>=2 && dia_semana<=7)
    {
        
        system("cls");
        
    retorna_salanormal_erro:
        printf ("\n\n\t ESCOLHA UMA DAS OPCOES: \n");
        printf ("\t [Sala 1] Procurando Dory \n");
        printf ("\t [Sala 2] X-men \n\n");
        printf ("\n\t Digite o numero da sala desejada: ");
        scanf ("%d", & sala_normal);
        
        
        if (sala_normal==1)
        {
            system("cls");
            
        retorna_salanormal_1:
            printf ("\n\n\t Sala 1: Procurando Dory\n\n");
            printf ("\t Sessao [1]: 13:30 \n");
            printf ("\t Sessao [2]: 16:00 \n");
            printf ("\t Sessao [3]: 19:30 \n\n");
            printf ("\t Comprar bilhete para qual sessao? \n");
            printf ("\n\t Digite o numero da sessao desejada: ");
            scanf ("%d",& horario_normal);
            if (horario_normal>3)
            {
                system("cls");
                printf ("\n\nOpção inválida!\n\n");
                goto retorna_salanormal_1;
                
                
            }
        }
        
        else if (sala_normal == 2)
        {
            system("cls");
        retorna_salanormal_2:
            printf ("\n\n\t Sala 2: X-men\n\n");
            printf ("\t Sessao [1]: 13:30 \n");
            printf ("\t Sessao [2]: 16:00 \n");
            printf ("\t Sessao [3]: 19:30 \n\n");
            printf ("\t Comprar bilhete para qual sessao? \n");
            printf ("\n\t Digite o numero da sessao desejada: ");
            scanf ("%d",& horario_normal);
            if (horario_normal>3)
            {
                system("cls");
                printf ("\n\nOpção inválida!\n\n");
                goto retorna_salanormal_2;
            }
        }
        
        else
        {
            system("cls");
            printf ("\n\nOpção inválida!\n\n");
            goto retorna_salanormal_erro;
            
        }
    }
    
    // Escolher a quantidade de ingressos
            system("cls");
    printf ("\n\t Escolha a quantidade de ingressos: ");
    scanf ("%d",& quant_ingresso);
    
    
    // Escolher poltrona
            system("cls");
    printf ("\n\t Escolha a poltrona: \n\n");
    
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=4;j++)
        {
            matriz[i][j] = 79;
        }
    }
    
    for(i=0;i<=9;i++)
    {
        printf("\t");
        for(j=0;j<=4;j++)
        {
            printf("%c ",matriz[i][j]);
        }
        printf("\n");
    }
    
selecionar:
    printf("\n\nDigite a fileira:");
    scanf("%d",& i);
    printf("Digite a coluna:");
    scanf("%d",& j);
    printf("\n\n");
    
    if (matriz[i-1][j-1]==88)
    {
        printf("Poltrona ocupada.\n\n");
        goto selecionar;
    }
    else
    {
        printf("Poltrana selecionada com sucesso.\n\n");
        matriz[i-1][j-1]=88;
    }
    
    
    for(i=0;i<=9;i++)
    {
        printf("\t");
        for(j=0;j<=4;j++)
        {
            printf("%c ", matriz[i][j]);
        }
        
        printf("\n");
    }
    goto selecionar;
    // x maiusculo = 88 ascii

    
    // Escolher o tipo de ingresso: meia entrada, inteira ou gratuito
retorna_tipo_ingresso:
            system("cls");
    printf ("\n\n\t Escolha o tipo de ingresso \n\n");
    printf ("\t [1] Inteira - R$10,00 \n");
    printf ("\t [2] Meia entrada - R$5,00 \n");
    printf ("\t [3] Gratuita  - R$0,00\n");
    printf ("\n\t Digite o numero correspondente ao tipo de ingresso: ");
    scanf ("%d",& tipo_ingresso);
    if (tipo_ingresso>3)
    {
        system("cls");
        printf ("\n\nOpção inválida!\n\n");
        goto retorna_tipo_ingresso;
    }
    if (tipo_ingresso==2)
        printf ("\n\nVerificar carteira de estudante!");
    if (tipo_ingresso==3)
        printf ("\n\nVerificar identidade do idoso/aposentado ou carteira de escola pública");
    
    // Escolher a forma de pagamento
retorna_pagto:
    system("cls");
    printf ("\n\n\t Escolha a forma de pagamento \n\n");
    printf ("\t [1] Dinheiro \n");
    printf ("\t [2] Cartao de credito \n");
    printf ("\t [3] Cartao de debito  \n");
    printf ("\t [4] Entrada gratuita  \n");
    printf ("\n\t Digite o numero correspondente a forma de pagamento: ");
    scanf ("%d",& pagto);
    if (pagto>4)
    {
        system("cls");
        printf ("\n\nOpção inválida!\n\n");
        goto retorna_pagto;
    }
    
    printf ("\n\n\t Confirmação do bilhete \n\n");
	   
}