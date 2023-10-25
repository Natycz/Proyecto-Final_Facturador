/*
Programa de facturas
10/10/2023  03:19
*/
#include <iostream>
#include <string>
using namespace std;
int ope;

int main(){


	cout<<"============================================" << endl;
	cout<<"============================================" << endl;
	cout<<"¡Bienvenido, al Facturador " << endl;
	cout<<"Que Operacion Quieres Realizar " << endl;
	cout<<"1.¡Clientes! "<< endl;
    cout<<"2.¡Productos! "<< endl;
    cout<<"3.¡Ventas! "<< endl;
    cout<<"4.¡inventario! "<< endl;
    cout<<"5. ¡Proveedores! "<< endl;
	cin>>ope;
	cout<<"============================================" << endl;
	cout<<"============================================" << endl;
	
	switch (ope){
		case 1 :
			string nom,nom1,ape,ape1;
			int cog,registros,edad;
			system("cls");
			cout<<"!Bienvenido al menu de Clientes! " << endl;
			cout<<"Cuantos Cientes Quieres Registar " << endl;
			cin>>registros;
			cout<<" " << endl;
			for(int i=1; i<=registros;  i++){
				cout<<"Ingrese Codigo De Identficacion " << endl;
				cin>>cog;
				cout<<"Ingrese El Nombre " << endl;
				cin>>nom;
				cin>>nom1;
				cout<<"Ingrese apellidos " << endl;
				cin>>ape;
				cin>>ape1;
				cout<<"Ingrese La edad: "  << endl;
				
				
			}
			 break;
			 
		case 2: 
		system("cls");
			cout<<"!Bienvenido al menu de Productos " << endl;
			 break;
		
     	case 3: 
		system("cls");
			cout<<"!Bienvenido al menu de Ventas " << endl;
			 break;
		
		case 4: 
		system("cls");
			cout<<"!Bienvenido al menu de Iventario " << endl;
			 break;
		
		case 5: 
		system("cls");
			cout<<"!Bienvenido al menu de Proveedores" << endl;
			 break;
	}	
	
	system("Pause");
	return 0;
	
	
}
