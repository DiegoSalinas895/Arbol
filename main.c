#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int generacion;
	
	printf("\t\tArbol Genealogico");
	
	printf("\n1 = Generacion 1");
	printf("\n2 = Generacion 2");
	printf("\n3 = Generacion 3");
	printf("\n4 = Generacion 4");
	printf("\n5 = Generacion 5");
	
	printf("\nIngresa un numero del 1 al 6: ");
	scanf("%d", & generacion);
	
	switch(generacion){
		case 1:
			printf("\tTatarabuelos");
			printf("\nPaternos: ");
			printf("\nFamiliar 1");
			printf("\nFamiliar 1");
			printf("\nMaternos: ");
			printf("\nFamiliar 2");
			printf("\nFamiliar 2");
		
			break;
			
		case 2:
			printf("\tVisabuelos");
			printf("\nPaternos: ");
			printf("\nFamiliar 3");
			printf("\nFamiliar 3");
			printf("\nMaternos: ");
			printf("\nFamiliar 4");
			printf("\nFamiliar 4");
			break;
			
		case 3:
			printf("\tAbuelos");
			printf("\nPaternos: ");
			printf("\nJesus");
			printf("\nFelicitas");
			printf("\nMaternos: ");
			printf("\nJosefina");
			printf("\nPedro");
			break;
			
		case 4:
			printf("\tPadres");
			printf("\nClaudia");
			printf("\nJesus");
			break;
	}
	
	return 0;
}
