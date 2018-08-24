/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 23 de agosto de 2018, 09:49 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("Hola usuario\n Podrias proporcionarme tu edad?");
    int edad;
    scanf("%d",&edad);
    if ((edad>=1)&&(edad<=150)){
    if ((edad>=1)&&(edad<=4)){
            printf("Primera infancia");
    }
    if ((edad>4)&&(edad<=11)){
        printf ("Niñez");
    }
    if ((edad>11)&&(edad<=17)){
        printf("Adolescencia");
    }
    if ((edad>=18)&&(edad<=35)){
        printf("Juventud");
    }
    if ((edad>=36)&&(edad<=49)){
        printf("Etapa de madurez");
    }
        if ((edad>=50)&&(edad<=65)){
            printf("Adultez madura");
        }
        if (edad>65){
            printf("Tercera edad");
        }
    }else{
        printf("Favor de usar información veridica");
    }
    return 0;
}

