/*
Programa: Proyecto final - Sistema de gesti�n de inventario y ventas 
Autores: Andr�s Felipe Rond�n Lara - Andres Felipe Perez Motta - Andres Felipe Tovar Molina
Fecha: 27 de noviembre de 2023
*/

//Declaramos variables
#include <iostream>
#include <locale.h>
#include <string>
#include <sstream> 
#include <cstdlib> 

using namespace std;

//Struct para registrar los productos
struct tienda{
	string Codigo;
	string Nombre;
	int Valor;
	int Cantidad;
};

//Struct para registar las ventas
struct venta{
	
}mas;

//Struct para registar los clientes
struct cliente{
	
}people;

//Struct para registrar las devoluciones
struct devolu{
	
}menos;





//Incluimos funciones que utilizaremos para la ejecucui�n del programa
void unistore();
bool esEntero(const string& str);
int obtenerEnteroValido(const string& mensaje);
void creaProduc(tienda* articulos, int contador);
void printProduc(tienda* articulos, int contador);
void addExist(tienda* articulos, int contador);
//Se incluyen las funciones de los submen�s
void menu1(tienda* articulos, int contador);
void menu2();
void menu3();

// <<------------------------- Inicio del programa ------------------------->> 
int main(){
	//Esta orden permite los caracteres especiales
	setlocale(LC_ALL, "");
	system("cls");//Limpia pantalla
	int n;
	//Se crea la portada del programa
	system("color 6");
	unistore();
	system ("pause");
	system("cls");
	
	// ���Se inicia todo el programa!!!
	
	//Creamos un arreglo para los productos de la tienda
	tienda* articulos = new tienda[100];
    int contador = 0;
	//Se ejecuta el men� principal que vera el usuario en pantalla 
	system("color 4F");
	cout<<"\t\t\t\t���Bienvenido a la gesti�n de tu emprendimiento!!!\n";
    cout<<endl;
    int menu;
    //Se ingresa el men� principal
    do{
    	cout<<"\t\t�Que deseas hacer hoy?\n";
		cout<<"\t1. Revisar tus productos\n";
		cout<<"\t2. Ventas\n";
		cout<<"\t3. Devoluciones\n";
		cout<<"\t4. Salir\n"<<endl;
		menu = obtenerEnteroValido("Por favor, ingresa una opci�n: ");
		cout<<endl<<endl;
		//Se limitan las respuestas del usuario
	    while (menu<0||menu>4){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu = obtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		cout<<"\t\tSiempre disponible para ayudarte :D\n";
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� principal
		switch(menu){
	    	case 1:
	    		menu1(articulos, contador);
	    		break;
	    	case 2:
	    		menu2();
	    		break;
	    	case 3:
	    		menu3();
	    		break;
		}
		
	}while (menu!=4);
	system("cls");
	system("color 6");
	cout<<"\t\t\t\t\t���Sigue as�, vas por buen camino!!!\n";
	unistore();
	cout<<"\t\t\t\tNos vemos en una pr�xima ocasi�n, �xitos :D\n";
	system("pause");
	system("cls");
	cout<<"\t\t\t��� Cr�ditos del programa !!!\n"<<endl;
	cout<<"\tAutores: Andr�s Felipe Rond�n - Andr�s Felipe Perez - Andr�s Felipe Tovar\n"<<endl;
	cout<<"\tIngenier�a de sistemas\n"<<endl;
	cout<<"\tProgramaci�n B�sica 2023-3\n"<<endl;
	system("pause");
	return 0;
}


//<<-----------------------------------------Se desarrollan las funciones------------------------------------------------------------>>

//Submen� 1
void menu1(tienda* articulos, int contador){
	int menu1;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\t\tTus productos \n"; //Se le pide al usuario una opci�n
	    cout<<endl;
	    cout<<"\t1. Crear producto. \n";
	    cout<<"\t2. Lista de productos. \n";
	    cout<<"\t3. A�adir existencia a un producto. \n";
	    cout<<"\t4. Salir. \n";
	    cout<<endl;
	    menu1 = obtenerEnteroValido("Por favor, ingresa una opci�n: ");
	    //Se valida que el programa no acepte otro n�mero aparte de los que se permiten en el men�
	    while (menu1<0||menu1>4){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu1 = obtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� de productos
	    switch(menu1){
	    	case 1:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t��Crear producto!! \n"<<endl;
	    		creaProduc( articulos, contador);
	    		cout<<endl;
	    		break;
	    	case 2:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t��Listar los productos!! \n" <<endl;
	    		printProduc( articulos, contador);
	    		cout<<endl;
	    		system("pause");
	    		break;
	    	case 3:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t��A�adir existencia a un producto!! \n";
	    		addExist( articulos, contador);
	    		cout<<endl;
	    		system("pause");
	    		break;
		}
	}while (menu1!=4);
	system ("cls");
	system("color 4F");
}

//Submen� 2
void menu2(){
	int menu2;
	do{
		system("cls");
		system("color 3F");
	    cout<<"\t\t��Ventas!! \n"; //Se le pide al usuario una opci�n
	    cout<<endl;
	    cout<<"\t1. Registrar una nueva venta. \n";
	    cout<<"\t2. Registrar un nuevo cliente.\n";
	    cout<<"\t3. Registro de ventas. \n";
	    cout<<"\t4. Salir. \n";
	    cout<<endl;
	    menu2 = obtenerEnteroValido("Por favor, ingresa una opci�n: ");
	    //Se valida que el programa no acepte otro n�mero aparte de los que se permiten en el men�
	    while (menu2<0||menu2>4){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu2 = obtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� de ventas
	    switch(menu2){
	    	case 1:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t!!Registrar una nueva venta!! \n";
	    		
	    		system("pause");
	    		cout<<endl;
	    		break;
	    	case 2:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t��Registrar un nuevo cliente!! \n";
	    		
	    		system("pause");
	    		cout<<endl;
	    		break;
	    	case 3:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t��Registro de ventas!! \n";
	    		
	    		system("pause");
	    		cout<<endl;
	    		break;	
		}
	}while(menu2!=4);
	system ("cls");
	system("color 4F");
}

//Submen� 3
void menu3(){
	int menu3;
	do{
		system ("cls");
		system("color 3F");
	    cout<<"\t\t��Devoluciones!! \n"; //Se le pide al usuario una opci�n
	    cout<<endl;
	    cout<<"\t1. Registrar una devoluci�n. \n";
	    cout<<"\t2. Registro de devoluciones. \n";
	    cout<<"\t3. Salir. \n";
	    cout<<endl;
	    menu3 = obtenerEnteroValido("Por favor, ingresa una opci�n: ");
	    //Se valida aue el programa no acepte otro n�mero aparte de los que se permiten en el men�
	    while (menu3<0||menu3>3){
	    	cout<<"La opci�n que seleccionaste no se encuentra en el men� \n";
	    	menu3 = obtenerEnteroValido("Por favor, selecciona una opci�n v�lida \n");
		}
		//Se ejecutan las distintas opciones que pudo elegir el usuario en el men� de devoluciones
	    switch(menu3){
	    	case 1:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t!!Registrar una devoluci�n!! \n";
	    		
	    		cout<<endl;
	    		system("pause");
	    		break;
	    	case 2:
	    		system ("color 70");
	    		system ("cls");
	    		cout<<"\t\t��Registro de devoluciones!! \n";
	    		
	    		cout<<endl;
	    		system("pause");
	    		break;
		}
	}while(menu3!=3);
	system ("cls");
	system("color 4F");
}

//crea un nuevo producto
void creaProduc(tienda* articulos, int contador){
	while(true){
		tienda produ;
		cout << "Por favor ingrese la informaci�n del producto: " << endl;
	    cin.ignore(); // Limpia el b�fer de entrada
	    cout << "C�digo: ";
	    getline(cin, produ.Codigo);
	    
	    //Revisar que el codigo ya exista
	    
		cout << "Nombre: ";
	    getline(cin, produ.Nombre);
	    produ.Valor = obtenerEnteroValido("Valor unitario: ");
	    while (produ.Valor < 0) {
	        cout << "Ingrese un valor unitario v�lido: ";
	        produ.Valor = obtenerEnteroValido("Ingrese un valor unitario v�lido: ");
	    }
		produ.Cantidad = obtenerEnteroValido("Existencias: ");
	    while (produ.Cantidad < 0) {
	        produ.Cantidad = obtenerEnteroValido("Ingrese una catidad de existencias v�lida: ");
	    }
	    articulos[contador] = produ;
	    contador++;
	    
	    int continuar = obtenerEnteroValido("�Desea agregar otro producto? (cualquier n�mero para s�, 0 para no): ");
		system("cls");
        if (continuar == 0) {
            break;
        }
	}
}

//lista los productos ingresados
void printProduc(tienda* articulos, int contador){
    cout << "Los productos guardados son:\n";
    for (int i = 0; i < contador; i++) {
        cout << "\tC�digo: " << articulos[i].Codigo << endl << "\tNombre: " << articulos[i].Nombre << endl << "\tValor unitario: " << articulos[i].Valor << endl << "Existencias: " << articulos[i].Cantidad<< endl;
    }
}

void addExist(tienda* articulos, int contador){
	string cod;
	int nuevos;
    cout << "Ingrese el c�digo del producto al que agregar existencias: "<<endl;
    getline(cin, cod);
    for (int i = 0; i < contador; i++) {
    	if( articulos[i].Codigo == cod){
    		cout << "El art�culo de nombre " << articulos[i].Nombre << " tiene actualmente " << articulos[i].Cantidad <<" existencias." << endl;
    		nuevos = obtenerEnteroValido("�Cuantas existencias le gustaria agregar?");
    		while(nuevos<0){
    			cout<<"Cantidad incorrecta, solo se admiten valores positivos"<< endl;
    			nuevos = obtenerEnteroValido("�Cuantas existencias le gustaria agregar?");
			}
		} else{
			cout << "El c�digo ingresado no est� asociado a ning�n producto."<<endl;
		}
    }
}

//retorna true si el n�mero ingresado es entero	
bool esEntero(const string& str) {
    stringstream ss(str); // Un stringstream se utiliza para operar en cadenas como si fueran flujos de entrada/salida.
    int n;
    return (ss >> n) && ss.eof(); //Esto ser� verdadero si se pudo extraer un n�mero entero de la cadena str y no hay nada m�s despu�s del n�mero.
}

//valida que la entrada por consola sea entero
int obtenerEnteroValido(const string& mensaje) {
    string entrada;
    while (true) {
        cout << mensaje;
        cin >> entrada;
        if (esEntero(entrada)) {
            return atoi(entrada.c_str()); // Utiliza atoi para convertir la entrada a un entero y lo devuelve
        } else {
            cout << "Entrada no v�lida. Por favor, ingrese un n�mero entero." << endl;
        }
    }
}

void unistore(){
	cout<<endl;
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                            *****************              *****************                                  \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                                                                                              \n";
	cout<<"\t ****    ****  ****       ***   *****  ************  ************  ************   ************  ************  \n";
	cout<<"\t ****    ****  *****      ***   *****  ************  ************  ************   ****    ****  ************  \n";
	cout<<"\t ****    ****  *** **     ***   *****  ****              ****      ****    ****   ****    ****  ****          \n";
	cout<<"\t ****    ****  ***  **    ***   *****  ************      ****      ****    ****   ************  ************  \n";
	cout<<"\t ****    ****  ***   **   ***   *****  ************      ****      ****    ****   **** ****     ************  \n";
	cout<<"\t ****    ****  ***    **  ***   *****          ****      ****      ****    ****   ****  ****    ****          \n";
	cout<<"\t ************  ***     ** ***   *****  ************      ****      ************   ****   ****   ************  \n";
	cout<<"\t ************  ***      *****   *****  ************      ****      ************   ****    ****  ************  \n";
	cout<<"\t                                                                                                              \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                *********                      *********                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<"\t                                ****************************************                                      \n";
	cout<<endl;
}
