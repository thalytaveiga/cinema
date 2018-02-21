#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main (void)

{
    
    setlocale(LC_ALL, "Portuguese");
    int dia_semana, sala_especial=0, horario_especial=0, sala_normal=0, horario_normal=0, tipo_ingresso, quant_ingresso=0, pagto;
    int controle_compra=0, quant_inteiro=0, quant_meia=0, quant_gratis=0;
    int l, c, poltronas_vendidas, nova_compra;
    float soma_inteira, soma_meia, soma_total;
    char matriz [10][5];
    int ingresso [quant_ingresso][3];
    int i,j, num_linha=1, controle_ingressos=50;
    int controle_dia_semana=0, controle_sala_especial=0, controle_horario_especial=0, controle_sala_normal=0, controle_horario_normal=0;
    
    
    
    // Matriz para escolher as poltronas
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=4;j++)
        {
            matriz[i][j] = 79;
        }
    }
    
inicio_sistema:
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
    printf ("\t [2] Terça-feira \n");
    printf ("\t [3] Quarta-feira \n");
    printf ("\t [4] Quinta-feira \n");
    printf ("\t [5] Sexta-feira \n");
    printf ("\t [6] Sábado \n");
    printf ("\t [7] Domingo \n\n");
    printf ("\n\t Digite o número correspondente ao dia da semana desejado: ");
    scanf ("%d",& dia_semana);
    if (dia_semana>7)
    {
        system("cls");
        printf ("\n\n\tOpção inválida!\n\n");
        goto retorna_dia_erro;
    }
    //Go to para retornar o código caso haja exceção
    
    
    
    // Se o dia da semana for segunda-feira, mostrar programação especial
    if (dia_semana==1)
    {
        system("cls");
        
    retorna_salaespecial_erro:
        printf ("\n\n\t PROGRAMAÇÃO ESPECIAL \n");
        printf ("\t ESCOLHA UMA DAS OPÇÕES: \n");
        printf ("\t [Sala 1] Mentes perigosas \n");
        printf ("\t [Sala 2] Wall-E \n\n");
        printf ("\n\t Digite o número da sala desejada: ");
        scanf ("%d", & sala_especial);
        
        if (sala_especial==1)
        {
            system("cls");
            
        retorna_salaespecial_1:
            printf ("\n\n\t Sala 1: Mentes perigosas\n\n");
            printf ("\t Sessão [1]: 13:30h \n");
            printf ("\t Sessão [2]: 19:30h \n\n");
            printf ("\t Comprar bilhete para qual sessão? \n");
            printf ("\n\t Digite o número da sessão desejada: ");
            scanf ("%d",& horario_especial);
            if (horario_especial>2)
            {
                system("cls");
                printf ("\n\n\tOpção inválida!\n\n");
                goto retorna_salaespecial_1;
            }
        }
        
        else    if (sala_especial == 2)
        {
            system("cls");
            
        retorna_salaespecial_2:
            printf ("\n\n\t Sala 2: Wall-E\n\n");
            printf ("\t Sessão [1]: 13:30h \n");
            printf ("\t Sessão [2]: 19:30h \n\n");
            printf ("\t Comprar bilhete para qual sessão? \n");
            printf ("\n\t Digite o número da sessão desejada: ");
            scanf ("%d",& horario_especial);
            
            if (horario_especial>2)
            {
                system("cls");
                printf ("\n\n\tOpção inválida!\n\n");
                goto retorna_salaespecial_2;
            }
        }
        
        else
        {
            system("cls");
            printf ("\n\n\tOpção inválida!\n\n");
            goto retorna_salaespecial_erro;
        }
    }
    
    
    // Se o dia escolhido não for segunda-feira, mostrar programação normal
    
    if (dia_semana>=2 && dia_semana<=7)
    {
        
        system("cls");
        
    retorna_salanormal_erro:
        printf ("\n\n\t ESCOLHA UMA DAS OPÇÕES: \n");
        printf ("\t [Sala 1] Procurando Dory \n");
        printf ("\t [Sala 2] X-men \n\n");
        printf ("\n\t Digite o número da sala desejada: ");
        scanf ("%d", & sala_normal);
        
        
        if (sala_normal==1)
        {
            system("cls");
            
        retorna_salanormal_1:
            printf ("\n\n\t Sala 1: Procurando Dory\n\n");
            printf ("\t Sessão [1]: 13:30h \n");
            printf ("\t Sessão [2]: 16:00h \n");
            printf ("\t Sessão [3]: 19:30h \n\n");
            printf ("\t Comprar bilhete para qual sessão? \n");
            printf ("\n\t Digite o número da sessão desejada: ");
            scanf ("%d",& horario_normal);
            if (horario_normal>3)
            {
                system("cls");
                printf ("\n\n\tOpção inválida!\n\n");
                goto retorna_salanormal_1;
            }
        }
        
        else if (sala_normal == 2)
        {
            system("cls");
        retorna_salanormal_2:
            printf ("\n\n\t Sala 2: X-men\n\n");
            printf ("\t Sessão [1]: 13:30h \n");
            printf ("\t Sessão [2]: 16:00h \n");
            printf ("\t Sessão [3]: 19:30h \n\n");
            printf ("\t Comprar bilhete para qual sessão? \n");
            printf ("\n\t Digite o número da sessão desejada: ");
            scanf ("%d",& horario_normal);
            if (horario_normal>3)
            {
                system("cls");
                printf ("\n\n\tOpção inválida!\n\n");
                goto retorna_salanormal_2;
            }
        }
        
        else
        {
            system("cls");
            printf ("\n\n\tOpção inválida!\n\n");
            goto retorna_salanormal_erro;
            
        }
    }
    
    
    // Escolher a quantidade de ingressos
    if (dia_semana!=controle_dia_semana || sala_especial!=controle_sala_especial || horario_especial!=controle_horario_especial)
    {
        controle_ingressos=50;
    }
    
    system("cls");
quant_ingresso:
    printf ("\n\n\tIngressos disponíveis: %d.\n\n", controle_ingressos);
    printf ("\n\t Escolha a quantidade de ingressos: ");
    scanf ("%d",& quant_ingresso);
    controle_compra=0;
    
    if (quant_ingresso<=0)
    {
        system("cls");
        printf ("\n\nOpcao invalida!\n\n");
        goto quant_ingresso;
    }
    
    
    if (dia_semana!=controle_dia_semana || sala_especial!=controle_sala_especial || horario_especial!=controle_horario_especial)
    {
        for(i=0 ; i<10; i++)
        {
            for(j=0 ; j<10 ; j++)
            {
                matriz [i][j]=79;
            }
        }
        controle_ingressos=50;
        
    }
    
    if (dia_semana!=controle_dia_semana || sala_normal!=controle_sala_normal || horario_normal!=controle_horario_normal)
    {
        for(i=0 ; i<10; i++)
        {
            for(j=0 ; j<10 ; j++)
            {
                matriz [i][j]=79;
            }
        }
        controle_ingressos=50;
        
    }
    
    // Escolher poltrona
escolher_poltrona:
    system("cls");
    
    
selecionar:
    num_linha=1;
    printf ("\n\t Escolha a poltrona \n\n");
    printf ("\t -----------------\n");
    printf ("\t |      TELA     |\n");
    printf ("\t -----------------\n");
    printf ("\t    1  2  3  4  5\n");
    
    for(i=0;i<=9;i++)
    {
        printf ("\t");
        if (i<=8)
        {
            printf ("%d   ", num_linha);
            num_linha++;
        }
        if (i==9)
        {
            printf ("10  ");
        }
        for(j=0;j<=4;j++)
        {
            printf("%c  ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    
    {
        printf("\n\n\tDigite a fileira: ");
        scanf("%d",& l);
        printf("\tDigite a coluna: ");
        scanf("%d",& c);
        printf("\n\n");
    }
    if (matriz[l-1][c-1]==88)
    {
        printf("\tPoltrona ocupada.\n\n");
        goto selecionar;
    }
    else
    {
        printf("\tPoltrona [%d] x [%d] selecionada com sucesso.\n\n", l, c);
        matriz[l-1][c-1]=88;
    }
    
    
    // Escolher o tipo de ingresso: meia entrada, inteira ou gratuito
retorna_tipo_ingresso:
    system("cls");
    printf ("\n\n\t Escolha o tipo de ingresso \n\n");
    printf ("\t [1] Inteira - R$20,00 \n");
    printf ("\t [2] Meia entrada - R$10,00 \n");
    printf ("\t [3] Gratuito  - R$0,00\n");
    printf ("\n\t Digite o numero correspondente ao tipo de ingresso: ");
    scanf ("%d",& tipo_ingresso);
    printf ("\n\n");
    if (tipo_ingresso>3)
    {
        system("cls");
        printf ("\n\n\tOpção inválida!\n\n");
        goto retorna_tipo_ingresso;
    }
    if (tipo_ingresso==2)
    {
        printf ("\n\n\tVerificar carteira de estudante!\n\n");
        system ("pause");
    }
    if (tipo_ingresso==3)
    {
        printf ("\n\n\tVerificar identidade do idoso/aposentado ou carteira de escola pública!\n\n");
        system ("pause");
    }
    
    ingresso [controle_compra][0] = tipo_ingresso;
    ingresso [controle_compra][1] = l;
    ingresso [controle_compra][2] = c;
    controle_compra++;
    poltronas_vendidas++;
    
    
    controle_ingressos--;
    if (controle_compra < quant_ingresso)
        goto selecionar;
    
    
    num_linha=1;
    printf ("\t -----------------\n");
    printf ("\t |      TELA     |\n");
    printf ("\t -----------------\n");
    printf ("\t    1  2  3  4  5\n");
    
    for(i=0;i<=9;i++)
    {
        printf ("\t");
        if (i<=8)
        {
            printf ("%d   ", num_linha);
            num_linha++;
        }
        if (i==9)
        {
            printf ("10  ");
        }
        for(j=0;j<=4;j++)
        {
            printf("%c  ", matriz[i][j]);
        }
        
        printf("\n");
    }
    // x maiusculo = 88 ascii
    
    
    // Escolher a forma de pagamento
retorna_pagto:
    system("cls");
    printf ("\n\n\t Escolha a forma de pagamento \n\n");
    printf ("\t [1] Dinheiro \n");
    printf ("\t [2] Cartão de crédito \n");
    printf ("\t [3] Cartão de débito  \n");
    printf ("\t [4] Entrada gratuita  \n");
    printf ("\n\t Digite o número correspondente a forma de pagamento: ");
    scanf ("%d",& pagto);
    if (pagto>4)
    {
        system("cls");
        printf ("\n\n\tOpção inválida!\n\n");
        goto retorna_pagto;
    }
    
    printf ("\n\n\t Confirmação do bilhete: \n\n");
    
    controle_dia_semana = dia_semana;
    controle_sala_especial = sala_especial;
    controle_horario_especial = horario_especial;
    controle_sala_normal = sala_normal;
    controle_horario_normal = horario_normal;
    
    
    for (i=0; i<quant_ingresso; i++)
    {
        
        printf ("\t----------------------------------------------------------------------\n");
        printf ("\t                              INGRESSO                                \n");
        printf ("\t----------------------------------------------------------------------\n");
        printf ("\n\n");
        if (dia_semana==1)
            printf("\tSegunda-feira\n\n");
        if (dia_semana==2)
            printf("\tTerça-feira\n\n");
        if (dia_semana==3)
            printf("\tQuarta-feira\n\n");
        if (dia_semana==4)
            printf("\tQuinta-feira\n\n");
        if (dia_semana==5)
            printf("\tSexta-feira\n\n");
        if (dia_semana==6)
            printf("\tSábado\n\n");
        if (dia_semana==7)
            printf("\tDomingo\n\n");
        
        
        if (dia_semana==1)
        {
            if (sala_especial==1)
                printf("\t[Sala 1] Filme: Mentes perigosas\n\n");
            if (sala_especial==2)
                printf("\t[Sala 2] Filme: Wall-E\n\n");
            
            
            if (horario_especial==1)
                printf ("\t[Sessão 1]: 13:30h\n\n");
            if (horario_especial==2)
                printf ("\t[Sessão 2]: 19:30h\n\n");
        }
        
        else
        {
            if (sala_normal==1)
                printf("\t[Sala 1] Filme: Procurando Dory\n\n");
            if (sala_normal==2)
                printf("\t[Sala 2] Filme: X-Men\n\n");
            
            
            if (horario_normal==1)
                printf ("\t[Sessão 1]: 13:30h\n\n");
            if (horario_normal==2)
                printf ("\t[Sessão 2]: 16:00h\n\n");
            if (horario_normal==3)
                printf ("\t[Sessão 3]: 19:30h\n\n");
        }
        
        printf("\tPoltrona selecionada: [%d] x [%d]\n\n", ingresso [i][1], ingresso [i][2]);
        
        tipo_ingresso = ingresso [i][0];
        if (tipo_ingresso==1)
        {
            printf ("\tInteira - R$20,00\n\n");
            quant_inteiro++;
        }
        if (tipo_ingresso==2)
        {
            printf ("\tMeia-entrada - R$10,00\n\n");
            quant_meia++;
        }
        if (tipo_ingresso==3)
        {
            printf ("\tGratuito - R$0,00\n\n");
            quant_gratis++;
        }
        
        
        if (pagto==1)
            printf ("\tForma de pagamento: Dinheiro\n\n");
        if (pagto==2)
            printf ("\tForma de pagamento: Cartão de crédito\n\n");
        if (pagto==3)
            printf ("\tForma de pagamento: Cartão de débito\n\n");
        if (pagto==4)
            printf ("\tForma de pagamento: Entrada gratuita\n\n");
        
    }
    printf ("\t----------------------------------------------------------------------\n");
    
    
    
    system ("pause");
    system("cls");
nova_compra:
    printf ("\n\n\tDeseja efetuar uma nova compra?\n\n");
    printf ("\tDigite [1] para sim.\n\n");
    printf ("\tDigite [2] para ver o controle de caixa.\n\n");
    printf ("\tDigite [3] para encerrar o sistema.\n\n");
    printf ("\tDigite a opção desejada: ");
    scanf ("%d", & nova_compra);
    printf ("\n\n");
    
    if (nova_compra==1)
        goto inicio_sistema;
    
    if (nova_compra==2)
    {
        printf ("\n\tCONTROLE DE CAIXA\n\n");
        printf ("\tQuantidade de ingressos inteiros:      [%d]\n", quant_inteiro);
        printf ("\tQuantidade de ingressos meia entrada:  [%d]\n", quant_meia);
        printf ("\tQuantidade de ingressos gratuitos:     [%d]\n", quant_gratis);
        printf ("\tTotal de ingressos vendidos:           [%d]\n", quant_inteiro + quant_meia + quant_gratis);
        
        soma_inteira = quant_inteiro * 20;
        soma_meia = quant_meia * 10;
        soma_total = soma_inteira + soma_meia;
        
        printf ("\n\tTotal de igressos inteiros:      R$ %.2f\n", soma_inteira);
        printf ("\tTotal de igressos meia entrada:   R$ %.2f\n", soma_meia);
        printf ("\tTotal de igressos vendidos:       R$ %.2f\n", soma_total);
        printf ("\n\n");
        system ("pause");
        goto nova_compra;
    }
    
    if (nova_compra==3)
        return (0);
    
    if (nova_compra>3)
    {
        printf ("\tOpção inválida!!!");
        goto nova_compra;
    }
    
    
    system("cls");
    system ("pause");
    
    return (0);
}
