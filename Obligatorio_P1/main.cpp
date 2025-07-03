#include <iostream>
#include <stdio.h>

const int MAX = 80;
const int MAX_HEROES = 5;

typedef char String[MAX];
typedef String superHeroes[MAX_HEROES];
typedef enum { DC, MARVEL } Universo;

int main()
{
    String nombreUsuario;
    Universo universo;
    superHeroes nombreHeroes;

    printf("Ingrese su nombre: ");
    int i = 0;
    char ingreso;
    do{
        scanf("%c", &ingreso);
        while( (i < MAX-1) && (ingreso != '\n') ){
            nombreUsuario[i] = ingreso;
            i++;
            scanf("%c", &ingreso);
        }
        nombreUsuario[i] = '\0';
        if(nombreUsuario[0] == '\0'){
            printf("No se ingreso un nombre.. Intente nuevamente.\n");
            i = 0;
        }
    }while(nombreUsuario[0] == '\0');
    i = 0;

    while(nombreUsuario[i] != '\0'){
        printf("%c", nombreUsuario[i]);
        i++;
    }
}
