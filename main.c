#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100

int _numeros[4];
void mostrar();
char arreglo[];
void jugador();
typedef struct personaje{char nombre[MAX];
                         char tipo[MAX];
                         int  fuerza;
                         int  salud;}personaje;


 int main(){

    jugador();

    getch();

    printf("\n\n\t\tVuelva pronto\n\n\n\n");

    return 0;
}

void jugador(){
        int i=0;

        personaje usuario[4];

        for(i=0;i<5;i++){

                    printf("\n\n\t--------captura de datos de personajes------\n\n\n");

        printf("\nNombre del personaje\n");
        scanf("%s",&usuario[i].nombre);

        printf("\nTipo/Raza del personaje\n");
        scanf("%s",&usuario[i].tipo);

        printf("\nCantidad de fuerza del personaje   MAX 100pts\n");
        scanf("%d",&usuario[i].fuerza);

        printf("\nCantidad de salud del personaje    MAX 100pts\n");
        scanf("%d",&usuario[i].salud);

        system("cls");

        }

}