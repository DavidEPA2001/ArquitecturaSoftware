//Tarea 1: strlen, strcpy, strcmp, strcat

#include<stdio.h>
#include<string.h>

void PedirFrase(char frase[100]);
void strlong(int*LONGITUD,int longitud, char frase[100]);
void strcopy(char frase[100], char frase2[100], int LONGITUD);
void strcomp(char frase[100]);
void strconcat(char frase[100]);

int main(void)
{
  char frase[100],frase2[100];
  int longitud,LONGITUD;

  PedirFrase(frase);
  strlong(&LONGITUD,longitud, frase);
  strcopy(frase,frase2,LONGITUD);
  strcomp(frase);
  strconcat(frase);
}

void PedirFrase(char frase[100])
{
  printf("Introduzca una frase: \n");
  gets(frase);
}

void strlong(int*LONGITUD,int longitud, char frase[100])
{
  int i;
  i=0;
  *LONGITUD=0;
  strlen(frase);
  longitud=strlen(frase);
  do
  {
    *LONGITUD=(*LONGITUD)+1;
    i++;
  } while(frase[i]!='\0');

  //printf("strlen es %d \n", longitud); //strlen
  printf("STRLONG ES %d \n", *LONGITUD); //mi funcion
}

void strcopy(char frase[100], char frase2[100],int LONGITUD)
{
  int i;
  for(i=0;LONGITUD;i++)
  {
    frase2[i]=frase[i];
  }
  puts(frase2);
}

void strcomp(char frase[100])
{

}

void strconcat(char frase[100])
{

}
