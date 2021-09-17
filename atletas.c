#include<stdio.h>
#define NO_ATLETAS 13
typedef struct {
	char nombre[35];
	char pais[35];
	int oro;
	int plata;
	int bronce;
	//int total;	
}atletas;

void imprimirGanadores(atletas[]);
int suma();
void ordenarMedallero(atletas[]);
int main(atleta){
	//struct atletas ganadores[5];
	//int noAtletas=13;
	//struct winners;
	atletas ganadores[NO_ATLETAS]={
	{"Vitalina_Batsar","Russian_OlyCom",2,1,0},
	{"James_Guy","Gran_Bretana",2,1,0},
	{"Evgeniy_Rylov","Russian_OlyCom",2,1,0},	
	{"Daiki_Hashimoto","Japon	",2,1,0},	
	{"Adam_Peaty","Gran_Bretana",2,1,0},	
	{"Ariarne_Titmus","Australia",2,1,1},	
	{"Zhang_Yufei","China	",2,2,0},	
	{"Keaty_Ledecky","USA	",2,2,0},	
	{"Elaine_Thompson","Jamaica	",3,0,0},	
	{"Lisa_Carrington","Nueva_Zelanda",3,0,0},	
	{"An_San	","Korea	",3,0,0},	
	{"Kaylee_McKeown","Australia",3,0,1},	
	{"Caeleb_Dressel","USA	",2,1,0},		
	};
		
	printf("\t\t\t\tGanadores en Tokio 2020\n");
	imprimirGanadores(ganadores);
	ordenarMedallero(ganadores);
	printf("\n\t\t\t\tMedallero ordenado\n");
	imprimirGanadores(ganadores);
	return;
}

void imprimirGanadores(atletas ganadores[]){
	int i;
	printf("Nombre	\t\tPais\t\tOro\tPlata\tBronce\tTotal\n");
	for(i=0;i<NO_ATLETAS;i++){
		printf("%s\t\t%s\t %i\t %i\t %i\t %i\n",ganadores[i].nombre,ganadores[i].pais,
		ganadores[i].oro,ganadores[i].plata,ganadores[i].bronce,suma(ganadores[i]));
		
	}	
}
	

int suma(atletas a){
	return (a.oro+a.plata+a.bronce);
}

void ordenarMedallero(atletas ganadores[]){
	int i,j;
	atletas aux;
	
	for (i=0;i<NO_ATLETAS;i++){
		for (j=i+1;j<NO_ATLETAS;j++){			
			if(suma(ganadores[i])<suma(ganadores[j])){
				aux=ganadores[i];
				ganadores[i]=ganadores[j];
				ganadores[j]=aux;
			}
		}
	}
}
