#include <stdio.h>
#include <string.h>
#define MAX 100

int adj[MAX][MAX]; //matriz
int n; //numero de vertices

int main()
{
    int maxBordes;
	int i;
	int j;
	char origen[2];
	char destino[2];
    int tipoGrafo;
    int distancia = 0;

    printf("Ingrese 1 si el grafo es no dirigido. Ingrese 2 si el grafo es dirigido: \n");
    scanf("%d",&tipoGrafo);
	
    printf("Ingrese el numero de vertices: \n");
    scanf("%i",&n);
    
    /*int nArista;
	printf("Ingrese el numero de aristas: \n");
    scanf("%i",&nArista);*/
    
    /*int z;
    char etiquetaA[nArista];
    for(z = 0; z < nArista; z++)
    {
    	printf("Ingrese la etiqueta de la arista %i: \n",z+1);
    	scanf("%s",&etiquetaA[z]);
	}*/
    
	//tamaño de la matriz
    if(tipoGrafo==1)
	{
		maxBordes = n*(n-1)/2;
	}
    else
    {
        maxBordes = n*(n-1);    	
	}
    
    int k;
    int w;
    int x;
    char etiquetaV[n];
    
    for(k = 0; k < n; k++)
    {
    	printf("Ingrese la etiqueta del vertice %i: \n",k+1);
    	scanf("%s",&etiquetaV[k]);
	}

    for(i=1; i<=maxBordes; i++)
    {
    	for(x = 0; x<1;x++)
    	{
    		printf("Ingrese el nodo x o -1 para salir: \n");
    		fflush(stdin);
	        scanf("%s",&origen[x]);
	       	fflush(stdin);
	        printf("Ingrese el nodo y o -1 para salir: \n");
	        scanf("%s",&destino[x]);
	       	fflush(stdin);
		}
		
		int l;
		for(l = 0; l<1; l++)
		{
			printf("Ingrese el valor de la arista %i: \n",i+1);
			scanf("%i",&distancia);
		}
        
        if(strcmp(origen,"-1")==0 && strcmp(destino,"-1")==0)
        {
            break;         	
		}
		
		for(k = 0; k<n; k++)
		{
			if( origen[0] == etiquetaV[k] )
	        {
	        	for(w = 0; w<n; w++)
	        	{
		        	if( destino[0] == etiquetaV[w] )
		        	{
		        		adj[k][w] = distancia;
			            if( tipoGrafo == 1) //si el grafo es no dirigido
			            {
			            	adj[w][k] = distancia;
			            	break;
						}
					}
				}	       
	        }
		}
    }

    printf("La matriz Adyacente es: \n");
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=n-1; j++)
    	{
    		printf("%4i",adj[i][j]);
		}
        printf("\n");
    }
}
