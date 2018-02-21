#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ncurses.h>

int main ()
{
int dia_semana, sala_especial, horario_especial, sala_normal, horario_normal, tipo_ingresso, quant_ingresso, pagto;

 printf ("\n\n\t Confirmação do bilhete: \n\n");
    
    printf ("------------------------------------------------------------------------------------\n");
    printf ("                                     INGRESSO                                       \n");
    printf ("------------------------------------------------------------------------------------\n");
    printf ("\n\n");
    if (dia_semana==1)
        printf("Dia: Segunda-feira\n\n");
    if (dia_semana==2)
        printf("Dia: Terça-feira\n\n");
    if (dia_semana==3)
        printf("Dia: Quarta-feira\n\n");
    if (dia_semana==4)
        printf("Dia: Quinta-feira\n\n");
    if (dia_semana==5)
        printf("Dia: Sexta-feira\n\n");
    if (dia_semana==6)
        printf("Dia: Sábado\n\n");
    if (dia_semana==7)
        printf("Dia: Domingo\n\n");
    

        if (dia_semana==1)
        {
            if (sala_especial==1)
                printf("[Sala 1] Filme: Mentes perigosas\n\n");
            if (sala_especial==2)
                printf("[Sala 2] Filme: Wall-E\n\n");
    
    
            if (horario_especial==1)
                printf ("[Sessao 1]: 13:30h\n\n");
            if (horario_especial==2)
            printf ("[Sessao 2]: 19:30h\n\n");
        }
   
        else
            {
                if (sala_normal==1)
                    printf("[Sala 1] Filme: Procurando Dory\n\n");
                if (sala_normal==2)
                    printf("[Sala 2] Filme: X-Men\n\n");
    
    
                if (horario_normal==1)
                    printf ("[Sessao 1]: 13:30h\n\n");
                if (horario_normal==2)
                    printf ("[Sessao 2]: 16:00h\n\n");
                if (horario_normal==3)
                    printf ("[Sessao 3]: 19:30h\n\n");
            }
                
    printf ("Ingressos comprados: %d\n\n", quant_ingresso);
    
                if (tipo_ingresso==1)
                    printf ("Inteira - R$20,00\n\n");
                    if (tipo_ingresso==2)
                        printf ("Meia-entrada - R$10,00\n\n");
                        if (tipo_ingresso==3)
                            printf ("Gratuito - R$0,00\n\n");
                            
                            
                            if (pagto==1)
                                printf ("Forma de pagamento: Dinheiro\n\n");
                                if (pagto==2)
                                    printf ("Forma de pagamento: Cartão de crédito\n\n");
                                    if (pagto==3)
                                        printf ("Forma de pagamento: Cartão de débito\n\n");
                                        if (pagto==4)
                                            printf ("Forma de pagamento: Entrada gratuita\n\n");


}