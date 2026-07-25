#include<stdio.h>
#include <stdlib.h>

struct compu{
	char *marca;
	char *modelo;
	char *proce;
	int ram;
	int almac;
	char *graficos;
	int power;
};

void imprimirpc(compu);

main(){
	
	compu pc;
	pc.marca=(char*)malloc(sizeof(char));
	printf("Dame la marca: \n");
	fflush(stdin);
	gets(pc.marca);
	
	pc.modelo=(char*)malloc(sizeof(char));
	printf("\nDame el modelo: \n");
	fflush(stdin);
	gets(pc.modelo);
	
	pc.proce=(char*)malloc(sizeof(char));
	printf("\nDame el tipo de procesador: \n");
	fflush(stdin);
	gets(pc.proce);
	
	printf("\nCuantos gigas de ram tiene?: \n");
	scanf("%d",&pc.ram);
	
	printf("\nCuantos gigas de almacenamiento tienes?: \n");
	scanf("%d",&pc.almac);
	
	pc.graficos=(char*)malloc(sizeof(char));
	printf("\nQue graficos tiene: \n");
	fflush(stdin);
	gets(pc.graficos);
	
	printf("\nQue cantidad de watts tiene?: \n");
	scanf("%d",&pc.power);
	printf("\n");

	
	imprimirpc(pc);
	return 0;
}

void imprimirpc(compu c){
	
	printf("La computadora es de la marca %s, modelo %s",c.marca,c.modelo);
	printf("\nProcesador: %s",c.proce);
	printf("\nTiene %d de ram",c.ram);
	printf("\n%d Gb de almacenamiento",c.almac);
	printf("\nTiene los graficos: %s",c.graficos);
	printf("\nTiene %d watts",c.power);

}
