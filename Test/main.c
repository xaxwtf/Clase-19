#include <stdio.h>
#include <stdlib.h>
#define tam 5
typedef struct{
    char nombre[50];
    int nota;
}eAlumno;
void mostarCadena(char *punteroCadena);
void ordenar(eAlumno *puntero[], int tama�o);
int main()
{
    /*char text[20]={"hola 123564"};
    char* puntero;
    puntero=&text;
    mostarCadena(puntero);*/
    int i;
    eAlumno alumnos[tam];
    eAlumno aux;
    eAlumno *puntAlumnos[tam];
    for(i=0;i<tam;i++)
    {
        puntAlumnos[i]=&alumnos[i];
        printf("indique el Nombre");
        fflush(stdin);
        gets(alumnos[i].nombre);
        printf("indique la nota");
        scanf("%d",&alumnos[i].nota);
    }
    printf("\nMostrar Sin Ordenar\n");
    for(i=0;i<tam;i++)
    {
        printf("\n%s     %d",puntAlumnos[i]->nombre,puntAlumnos[i]->nota);
    }
    ordenar(puntAlumnos,tam);
    printf("\n Mostar Ordenado");
    for(i=0;i<tam;i++)
    {
        printf("\n%s     %d",puntAlumnos[i]->nombre,puntAlumnos[i]->nota);
    }






    return 0;
}
void mostarCadena(char *punteroCadena)
{
    while(*punteroCadena!='\0')
    {
        printf("%c",*punteroCadena);
        punteroCadena++;
    }
}
void ordenar(eAlumno* puntero[], int tama�o)
{
    eAlumno* aux;
    int i;
    int j;
    for(i=0;i<tama�o;i++)
    {
        for(j=i+1;j<tama�o;j++)
        {
            if(puntero[i]->nota<puntero[j]->nota)
               {
                    aux=puntero[i];
                    puntero[i]=puntero[j];
                    puntero[j]=aux;
               }
        }
    }
}
