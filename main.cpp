/*Construir un programa que capture los datos de un empleado, desplegar su cheque semanal si gana más de $500.00 y si esta en el departamento de producción, 
en caso contrario desplegarle un bono de despensa del 25% de su sueldo semanal.*/
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string nombre, puesto;
	char departamento;
	int SueldoSem, bono;
	printf("INGRESE EL NOMBRE DEL EMPLEADO\n");
	cin>>nombre;
	printf("\nINGRESE EL PUESTO DEL EMPLEADO\n");
	cin>>puesto;
	printf("\nINGRESE EL DEPARTAMENTO DEL EMPLEADO\n");
	printf("1.PRODUCCIÓN\n");
	printf("2.ADMINISTRACION\n");
	printf("3.SEGURIDAD\n");
	printf("4.SEGURIDAD\n");
	cin>>departamento;
	printf("\nINGRESE EL SUELDO SEMANAL DEL EMPLEADO EN $\n");
	scanf("%d", &SueldoSem);
	if(SueldoSem>500 && departamento=='1'){
		printf("\nSU CHEQUE SEMANAL ES DE: $%d\n\n", SueldoSem);
	}
	else{
		bono=SueldoSem*0.25;
		printf("FELICIDADES, SE LE OTORGARÁ UN BONO DE DESPENSA DE: $%d\n", bono);
	}
	system("pause");
}
