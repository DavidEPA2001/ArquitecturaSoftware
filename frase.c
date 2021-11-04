/*
* Ordena palabras con metodología de quickSort
* David Emmanuel Pérez Avila
* Progra
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quickSort( char[10][20], int, int);
int partition( char[10][20], int, int);

void main()
{
  char nombres[10][20];
  int i;
  printf("Ingrese una lista de nombres\n");
  for(i = 0; i <= 9; ++i)
    {
      printf("nombre %3d:", i+1);
      scanf("%s", nombres[i]);
    }

  quickSort(nombres, 0, 9);
  printf("\n\nLista ordenada es:\n ");
  for(i = 0; i <=9; ++i)
    printf(" %s\n ", nombres[i]);
}


void quickSort( char nombres[10][20], int l, int r)
{
  int j;
  char med[20];
  if(l<r)
    { // divide and conquer
      j = partition( nombres, l, r);
      quickSort( nombres, l, j-1);
      quickSort( nombres, j+1, r);
    }
}

int partition( char a[10][20], int l, int r)
{
  char pivot[20];
  int i, j;
  char temp[20];

  strcpy(pivot,a[l]);
  i = l;
  j = r+1;

  while(1)
    { do
++i;
      while((strcmp(a[i], pivot)<=0) && (i <= r));
      do
--j;
      while(strcmp(a[j], pivot)> 0);
      if(i >= j)
break;
      strcpy(temp, a[i]);
      strcpy(a[i], a[j]);
      strcpy(a[j], temp);
    }
 strcpy(temp, a[l]);
 strcpy(a[l], a[j]);
 strcpy(a[j], temp);
  return j;
}
