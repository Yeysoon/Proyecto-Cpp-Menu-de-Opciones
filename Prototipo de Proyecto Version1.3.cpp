#include <iostream>										//Utilizacion de uso de librerias
#include <stdlib.h>									
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string.h>


using namespace std;

//Funcion2 para consultar todos los clientes
void verRegistros(ifstream &Lec)
{
	//Declaracion de variables
	char cl[10];
	char nombre[50];
	char direccion[100];
	char tel[10];
	char NIT[10];
	
	//Apertura de archivo
	Lec.open("clientes.txt", ios::in);
	Lec>>cl;
	
	//Utilizacion del ciclo While para validar los datos de nuestro archivo.
	while(!Lec.eof())
	{
		//Lectura de datos en el archivo de texto
		Lec>>nombre;
		Lec>>direccion;
		Lec>>tel;
		Lec>>NIT;
		
		//Mostrar datos en pantalla 
		cout<<"__________________________________"<<endl;
		cout<<"\nCodigo: "<<cl<<endl;
		cout<<"Nombre: "<<nombre<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<tel<<endl;
		cout<<"NIT: "<<NIT<<endl;
		cout<<"__________________________________"<<endl;
		Lec>>cl;
	}
	
	Lec.close();
	system("Pause");
		
}


//Funcion3 para consultar todos los autores
void verRegistrosAutor(ifstream &LecAutor)
{
	//Declaracion de variables
	char au[50];
	char nombreau[50];
	char nac[100];
	
	LecAutor.open("autor.txt", ios::in);
	LecAutor>>au;
	
	while(!LecAutor.eof())
	{
	//Lectura de datos en el archivo de texto
		LecAutor>>nombreau;
		LecAutor>>nac;
	//Mostrar datos en pantalla 
	
		cout<<"__________________________________"<<endl;
		cout<<"\nCodigo: "<<au<<endl;
		cout<<"Nombre: "<<nombreau<<endl;
		cout<<"Nacionalidad: "<<nac<<endl;
		cout<<"__________________________________"<<endl;
		LecAutor>>au;
	}
	
	LecAutor.close();
	system("Pause");
		
}


//Funcion4 para consultar todos los libros que posee la empresa
void verRegistrosLibros(ifstream &LecLib)
{
	//Declaracion de Variables
	char lib[10];
	char titulo[50];
	char precio[10];
	char editorial[50];
	char fecha[10];
	char au[10];
	
	LecLib.open("libros.txt", ios::in);
	LecLib>>lib;
	
	while(!LecLib.eof())
	{
		//Lectura de datos en el archivo de texto
		LecLib>>titulo;
		LecLib>>precio;
		LecLib>>editorial;
		LecLib>>fecha;
		LecLib>>au;
		//Mostrar datos en pantalla 
		cout<<"__________________________________"<<endl;
		cout<<"\nCodigo: "<<lib<<endl;
		cout<<"Titulo: "<<titulo<<endl;
		cout<<"Precio: "<<precio<<endl;
		cout<<"Editorial: "<<editorial<<endl;
		cout<<"Fecha: "<<fecha<<endl;
		cout<<"Autor: "<<au<<endl;
		cout<<"__________________________________"<<endl;
		LecLib>>lib;
	}
	
	LecLib.close();
	system("Pause");
		
}

//Funcion5 para consultar todos los datos de los vendedores de la tienda

void verRegistrosVen(ifstream &LecVen)
{
	
	//Declaracion de variables
	char vendor[10];
	char nombre[50];
	char direct[100];
	int tel2;
	char DPI[15];
	
	LecVen.open("vendedores.txt", ios::in);
	LecVen>>vendor;
	
	while(!LecVen.eof())
	{
		//Lectura de datos en el archivo de texto
		LecVen>>nombre;
		LecVen>>direct;
		LecVen>>tel2;
		LecVen>>DPI;
		//Mostrar datos en pantalla 
		cout<<"__________________________________"<<endl;
		cout<<"\nCodigo: "<<vendor<<endl;
		cout<<"Colaborador: "<<nombre<<endl;
		cout<<"Direccion: "<<direct<<endl;
		cout<<"Telefono: "<<tel2<<endl;
		cout<<"DPI: "<<DPI<<endl;
		cout<<"__________________________________"<<endl;
		LecVen>>vendor;
	}
	
	LecVen.close();
	system("Pause");
		
}

//Funcion6 para ingresar los datos de la facturacion.

void verRegistrosFac(ifstream &LecFac)
{
	string felt;
	string fecha;
	string cliente;
	string NIT;
	string direccion;
	string vendor;
	string titulo;
	float precioU;
	float total;
	int cant;
	
	LecFac.open("facturas.txt", ios::in);
	LecFac>>felt;
	
	while(!LecFac.eof())
	{
		//Lectura de datos en el archivo de texto
		LecFac>>fecha;
		LecFac>>cliente;
		LecFac>>NIT;
		LecFac>>direccion;
		LecFac>>vendor;
		LecFac>>cant;
		LecFac>>titulo;
		LecFac>>total;
		
		
	
		system("cls");
		//Mostrar datos en pantalla 
		HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"___________________________________________________________________________"<<endl;
		SetConsoleTextAttribute(hConsole, 2);
		cout<<"\t\t\tE-books una libreria y mas..."<<endl;
		cout<<"\t\t\t\t2da. calle Zona 2"<<endl;
		cout<<"\t\t\t\tTel: 32123329"<<endl;
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"___________________________________________________________________________"<<endl<<endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout<<"\n\n\nNumero de Factura "<<felt<<"                  Fecha de Impresion:  "<<fecha<<endl;
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"___________________________________________________________________________"<<endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout<<"\t\n\n\nNombre del Cliente: "<<cliente<<"                   NIT: "<<NIT<<endl;
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"\n___________________________________________________________________________"<<endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout<<"\t\nDireccion: "<<direccion<<endl;
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"___________________________________________________________________________"<<endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout <<"Vendedor:             "<<vendor<<endl;
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"___________________________________________________________________________"<<endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout <<"Cantidad Vendida:             "<<cant<<" Unidad/es"<<endl;
		SetConsoleTextAttribute(hConsole, 3);
		cout<<"___________________________________________________________________________"<<endl;
		SetConsoleTextAttribute(hConsole, 7);
										
		LecFac>>felt;
			
	LecFac.close();
	system("pause");
	}
	
		
}

//Utilizacion del la funcion principal
int main ()
{
	//Ingreso a sistema por usuario administrador
	
	string user, contra;
	string valor = "Superuser", dato = "UM1";
	int veces = 0;
	bool ingresa = false;
	
	do{
	   system("cls");
	   HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	   SetConsoleTextAttribute(hConsole, 3);
	   cout<< "\t\t WELCOME TO E-BOOKS" << endl;
       cout<< "\t\t-------------------" << endl;	
	   SetConsoleTextAttribute(hConsole, 7);
	   
	   SetConsoleTextAttribute(hConsole, 2);
	   cout<< "\n\tUsuario: ";
	   getline(cin, user);
	   cout<< "\tPassword: ";
	   getline(cin, contra);
	   SetConsoleTextAttribute(hConsole, 7);
	
	
	   if(user == valor && contra == dato)
	   {
	     ingresa = true;
	   }
	   else
	   {
		cout<< "\tEl usuaro y/o contrasena son incorrectos"<< endl;
		cin.get();
		veces++;
	  }
	}while(ingresa==false && veces<3);
	
	
	if(ingresa == false)
	{
		cout<< "\n\tusted no pudo ingresar al sistema"<< endl;
	}
	else
	{
	int selec, elige, nuevom, dados;
	system ("cls");
	}
	
	
	/*Encabezado
	Agregar colores para una mejor diferenciacion
	*/
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(hConsole, 3);
	cout <<"E-book Libros y mas"<<endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout <<"\n\tMenu Principal: "<<endl;
	SetConsoleTextAttribute(hConsole, 7);
	int opcion,exit,opcion2;
	
	
	//Uitiliacion de ciclo do para validar que esten ingresando correctamente el usuario el rango numero que tiene opcion
	do
	{
		//Menu principal de opciones
		cout <<"\n1. Usuarios"<<endl;
		cout <<"2. Datos de Cliente:"<<endl;
		cout <<"3. Datos del Autor: "<<endl;
		cout <<"4. Datos del Libro: "<<endl;
		cout <<"5. Datos del Vendedor: "<<endl;
		cout <<"6. Facturacion:"<<endl;
		cout <<"7. Salir del Programa"<<endl;
		cout <<"\nHola usuario por favor digita la opcion que queras: ";
		cin >>opcion;
		system("cls");
		
		//Condicional switch para la utilizacion de opciones dentro de nuestros sub menus o modulos de opciones
		switch (opcion)
		{
			
			//Primera opcion del usuario
			case 1:
			{
				system("cls");
				do{
					//Submenu de opciones para primer caso
					system("cls");
					cout <<"\n1. Ingresar nuevo usuario:"<<endl;
					cout <<"2. Consultar usuarios en sistema:"<<endl;
					cout <<"3. Regresar al menu principal"<<endl;
					cout <<"Ingresa la opcion que queres: ";
					cin >>opcion2;
					
					switch(opcion2)
					{
						//Submenu de opciones para primer caso
						case 1:
						{
						system("cls");
						cout<<"Ingresando nuevo usuario..."<<endl;
						cout<<"No logre averiguar como."<<endl;
						system("Pause");
						break;
						}
						case 2:
						{
						system("cls");
						cout <<"Consultando datos del usuario..."<<endl;
						cout<<"No logre averiguar como."<<endl;
						system("Pause");
						break;
						}
						case 3:
						{
						system("cls");
						return main();
						system("pause");
						}
						default:
						system("cls");
						cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
						system("pause");
						break;
					}
				}while(opcion2<=4);
				system("cls");
			}
			system("cls");
			
			//Segunda opcion del usuario
			case 2:
			{
				system("cls");
				do{	
				    //Submenu de opciones para segundo caso
					system("cls");
					cout <<"1. Ingresar datos del cliente:"<<endl;
					cout <<"2. Consultar datos del cliente:"<<endl;
					cout <<"3. Regresar al menu principal"<<endl;
					cout <<"Ingresa la opcion que queres: ";
					cin >>opcion2;
					
					switch (opcion2)
					{
						case 1:	
						{
						//Submenu de opciones para segundo caso
							system("cls");
							ofstream cliente;

							//Declaracion de variables
							char cl[10];
							char nombre[50];
							char direccion[100];
							int tel;
							int NIT;
							
							//Aperturar de archivo clientes
							cliente.open("clientes.txt",ios::out|ios::app);
							
							//Condicional If si el archivo falla al abrir
							if (cliente.fail()){
								cout <<"Error en el archivo.";	
							}
							
							//Titulo
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\tDatos de cliente: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							
							
							//Ingreso de datos
							fflush(stdin);
							cout <<"Codigo de Cliente: ";
							cin.getline(cl,10);
							fflush(stdin);
							cliente<<cl<<endl;
							
							cout <<"Nombre: ";
							cin.getline(nombre,50);
							fflush(stdin);
							cliente<<nombre<<endl;
							
							cout <<"Direccion: ";
							cin.getline(direccion,100);
							fflush(stdin);
							cliente<<direccion<<endl;
							
							cout <<"Telefono: ";
							cin>>tel;
							fflush(stdin);
							cliente<<tel<<endl;
							
							cout <<"Numero de NIT: ";
							cin>>NIT;
							fflush(stdin);
							cliente<<NIT<<endl;
							
							//Cierre de Archivo
							cliente.close();
							
							system("pause");
							break;
						}
						case 2:
						{
							//Utilizacion de la funcion2 por medio de lectura de la funcion arriba colocada
							ifstream Lec;
							system("cls");
								SetConsoleTextAttribute(hConsole, 2);
								cout <<"\n\tRegistros de Clientes: "<<endl;
								SetConsoleTextAttribute(hConsole, 7);
							verRegistros(Lec);
							system("pause");
							break;
						}
						case 3:
						{
							//Opcion 3 para regresar a al menu principal.
							system("cls");
							return main();
							system("pause");
							break;
						}
						default:
						{
							//Si digita alguna opcion fuera del rango.
							system("cls");
							cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
							system("pause");
							break;
						}
					}
				}while(opcion2 <=4);
				system ("cls");
			}
			
			//Tercera opcion del usuario
			case 3:
			{
				do{
					//Submenu de opciones para tercer caso
					system("cls");
					cout <<"1. Ingresar datos del Autor:"<<endl;
					cout <<"2. Consultar datos del autor:"<<endl;
					cout <<"3. Regresar al menu principal"<<endl;
					cout <<"Ingresa la opcion que queres: ";
					cin >>opcion2;
					
					switch (opcion2)
					{
						case 1:	
						{
							//Submenu de opciones para tercer caso
							system("cls");
							ofstream autor;
							
							//Declaracion de variables
							char au[50];
							char nombreau[50];
							char nac[100];
							
							//Aperturar de archivo clientes
							autor.open("autor.txt",ios::out|ios::app);
							
							//Condicional If si el archivo falla al abrir
							if (autor.fail()){
								cout <<"Error en el archivo.";	
							}
							
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\tDatos del autor: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							
							//Ingreso de datos
							fflush(stdin);
							cout <<"Codigo de autor: ";
							cin>>au;
							fflush(stdin);
							autor<<au<<endl;
							
							cout <<"Nombre del autor: ";
							cin.getline(nombreau,50);
							fflush(stdin);
							autor<<nombreau<<endl;
							
							cout <<"Nacionalidad del autor: ";
							cin.getline(nac,100);
							fflush(stdin);
							autor<<nac<<endl;
							
							//Cierre de Archivo
							autor.close();
							
							system("pause");
							break;
						}
						case 2:
						{
							//Lectura de funcion3 arriba descrita
							ifstream LecAutor;
							system("cls");
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\n\tRegistros de Autores: "<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							verRegistrosAutor(LecAutor);
							system("pause");
							break;
						}
						case 3:
						{
							//Opcion 3 para regresar a al menu principal..
							system("cls");
							return main();
							system("pause");
							break;
						}
						default:
						{
							//Si digita alguna opcion fuera del rango.
							system("cls");
							cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
							system("pause");
							break;
						}
					}
				}while(opcion2<=4);	
				system ("cls");
			}
			
			//Cuarto caso elegido por el usuario
			case 4:{
				do
				{
				//Submenu de opciones para cuarto caso
				system("cls");
				cout <<"1. Ingresar datos del Libro:"<<endl;
				cout <<"2. Consultar datos del Libro:"<<endl;
				cout <<"3. Regresar al menu principal"<<endl;
				cout <<"Ingresa la opcion que queres: ";
				cin >>opcion2;
				
				switch (opcion2)
					{
						//Submenu de opciones para cuarto caso
						case 1:	
						{
							system("cls");
							ofstream libro;
							
							//Declaracion de variables
							char lib[10];
							char titulo[50];
							float precio;
							char editorial[50];
							int fecha;
							char au[10];
							
							//Aperturar de archivo
							libro.open("libros.txt",ios::out|ios::app);
							
							//Condicional If si el archivo falla al abrir
							if (libro.fail()){
								cout <<"Error en el archivo.";	
							}
								
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\tDatos de Libro: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							
							//Ingreso de datos
							fflush(stdin);
							cout <<"Codigo de Libro: ";
							cin.getline(lib,10);
							fflush(stdin);
							libro<<lib<<endl;
							
							
							cout <<"Titulo: ";
							cin.getline(titulo,50);
							fflush(stdin);
							libro<<titulo<<endl;
							
							
							cout <<"Precio: ";
							cin>>precio;
							fflush(stdin);
							libro<<precio<<endl;
							
						
							cout <<"Editorial: ";
							cin.getline(editorial,50);
							fflush(stdin);
							libro<<editorial<<endl;
							
							
							cout <<"Fecha de Impresion: ";
							cin>>fecha;
							fflush(stdin);
							libro<<fecha<<endl;
							
							
							cout <<"Codigo del Autor: ";
							cin.getline(au,10);
							fflush(stdin);
							libro<<au<<endl;
							
							
							//Cierre de Archivo
							libro.close();
							
							system("pause");
							break;
						}
						case 2:
						{
							//Utilizacion de funcion 4 arriba ingresada.
							ifstream LecLib;
							system("cls");
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\n\tRegistros de Libros: "<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							verRegistrosLibros(LecLib);
							system("pause");
							break;
						}
						case 3:
						{
							system("cls");
							return main();
							system("pause");
							break;
						}
						default:
						{
							system("cls");
							cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
							system("pause");
							break;
						}
					}
				}while(opcion2<=4);
				system ("cls");
			}
			
			//Quinta opcion elegida por el usuario
			case 5:{
				
				do
				{
					//Sub Menu de opciones
					system("cls");
					cout <<"1. Ingresar datos del Vendedor:"<<endl;
					cout <<"2. Consultar datos del Vendedor:"<<endl;
					cout <<"3. Regresar al menu principal"<<endl;
					cout <<"Ingresa la opcion que queres: ";
					cin >>opcion2;
					
					switch (opcion2)
					{
						case 1:	
						{
							system("cls");
							ofstream vendedor;
							//Declaracion de variables
							char vendor[10];
							char nombre[50];
							char direct[100];
							int tel2;
							char DPI[15];
							
							//Aperturar de archivo
							vendedor.open("vendedores.txt",ios::out|ios::app);
							
							//Si el archivo falla
							if (vendedor.fail()){
								cout <<"Error en el archivo.";	
							}
							
							
							//Ingreso de datos	
							SetConsoleTextAttribute(hConsole, 3);
							cout <<"\tDatos de Vendedor: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							
							fflush(stdin);
							cout <<"Codigo del vendedor: ";
							cin.getline(vendor,10);
							fflush(stdin);
							vendedor<<vendor<<endl;
							
							cout <<"Nombe del Vendedor: ";
							cin.getline(nombre,50);
							fflush(stdin);
							vendedor<<nombre<<endl;
							
							cout <<"Direccion: ";
							cin.getline(direct,100);
							fflush(stdin);
							vendedor<<direct<<endl;
							
							cout <<"Telefono: ";
							cin >>tel2;
							fflush(stdin);
							vendedor<<tel2<<endl;
							
							fflush(stdin);
							cout <<"Ingrese el numero de DPI: ";
							cin.getline(DPI,15);
							fflush(stdin);
							vendedor<<DPI<<endl;
							
							//Cierre de archivo
							vendedor.close();
							
							system("pause");
							break;
						}
						case 2:
						{
							//utilizacion de funcion para mostrar datos
							ifstream LecVen;
							system("cls");
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\n\tRegistros de Vendedores de la tienda: "<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							verRegistrosVen(LecVen);
							system("pause");
							break;
						}
						case 3:
						{
							//opcion3 para retornar a sistema.
							system("cls");
							return main();
							system("pause");
							break;
						}
						default:
						{
							//Si el usuario digita un numero fuera del rango
							system("cls");
							cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
							system("pause");
							break;
						}
					system("cls");
					}
				}while(opcion2<=4);
			}
			
			//Sexta opcion elegida por el usuario
			case 6:{
				
				do{
				//Sub Menu de opciones
				system("cls");
				cout <<"1. Ingresar los datos de la facturacion:"<<endl;
				cout <<"2. Consultar datos de la factura:"<<endl;
				cout <<"3. Regresar al menu principal"<<endl;
				cout <<"Ingresa la opcion que queres: ";
				cin >>opcion2;
				
				switch (opcion2)
					{
						case 1:	
						{
						
							system("cls");
							ofstream factura;
							
							//Declaracion de variables			
							string felt;
							string fecha;
							string cliente;
							string NIT;
							string direccion;
							string vendor;
							string titulo;
							float precioU;
							float total;
							int cant;

							
							//Apertura de archivo
							factura.open("facturas.txt",ios::out|ios::app);
							
							//Condicion si el archivo falla al momento de apertura o creacion
							if (factura.fail()){
								cout <<"Error en el archivo.";	
							}
							
							//Ingreso de datos
							SetConsoleTextAttribute(hConsole, 3);
							cout <<"\tDatos de Factura: "<<endl<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							
							fflush(stdin);
							cout <<"Numero de factura: ";
							getline(cin,felt);
							fflush(stdin);
							factura<<felt<<endl;
							
							fflush(stdin);
							cout <<"Fecha de Impresion: ";
							getline(cin,fecha);
							fflush(stdin);
							factura<<fecha<<endl;
							
							fflush(stdin);
							cout <<"Nombre del Cliente: ";
							getline(cin,cliente);
							fflush(stdin);
							factura<<cliente<<endl;
							
							fflush(stdin);
							cout <<"NIT del Cliente: ";
							getline(cin,NIT);
							fflush(stdin);
							factura<<NIT<<endl;
							
							fflush(stdin);
							cout <<"Direccion del Cliente: ";
							getline(cin,direccion);
							fflush(stdin);
							factura<<direccion<<endl;
							
							fflush(stdin);
							cout <<"Vendedor: ";
							getline(cin,vendor);
							fflush(stdin);
							factura<<vendor<<endl;
							
							fflush(stdin);
							cout<<"Cantidad de Libros: "<<endl;
							cin>>cant;
							fflush(stdin);
							factura<<cant<<endl;
							//Condicion si cantidad es mayor a 1 aplicar 
							if (cant>1)
							{
								
								//ciclo for para cantiddad ya que este sera un ciclo repetitivo
								for (int i=0;i<cant;i++)
								{
								
									//Ingreso de datos dentro de ciclo for
									fflush(stdin);
									cout<<"Titulo del Libro "<<i+1<<endl;
									getline(cin,titulo);
									fflush(stdin);
									factura<<titulo<<endl;
									
									fflush(stdin);
									cout<<"Precio Unitario del libro "<<i+1<<endl;
									cin>>precioU;
									fflush(stdin);
									factura<<precioU<<endl;
									total = cant*precioU; 
									factura<<total<<endl;
								}
									//Mostrar datos dentro de un ciclo for fundamental para ver la facturacion
									system("cls");
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 2);
									cout<<"\t\t\tE-books una libreria y mas..."<<endl;
									cout<<"\t\t\t\t2da. calle Zona 2"<<endl;
									cout<<"\t\t\t\tTel: 32123329"<<endl;
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl<<endl;
									SetConsoleTextAttribute(hConsole, 7);
									cout<<"\n\n\nNumero de Factura "<<felt<<"                  Fecha de Impresion:  "<<fecha<<endl;
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 7);
									cout<<"\t\n\n\nNombre del Cliente: "<<cliente<<"                   NIT: "<<NIT<<endl;
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"\n___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 7);
									cout<<"\t\nDireccion: "<<direccion<<endl;
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 7);
									cout <<"Vendedor:             "<<vendor<<endl;
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 7);
									cout<<"\nCantidad adquirida: "<<cant<<endl;
									cout <<"Cantidad     Descripcion                                   Precio Unitario"<<endl;
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 7);
										
								//Ciclo for para mostrar los datos de las cantidades arriba digitadas ya que estas si son mayores a 1 seran ejectudas y este ciclo lo muestra
								for(int i=0;i<cant;i++)
								{
									cout<<i+1<<")"<<"            "<<titulo<<"                                      "<<precioU<<endl;
								}
							} 
							
									// Mostrara en pantalla la cantidad a pagar para el cliente
									SetConsoleTextAttribute(hConsole, 3);
									cout<<"___________________________________________________________________________"<<endl;
									SetConsoleTextAttribute(hConsole, 7);
									cout <<"\nTotal a pagar es:                                                  Q."<<total;
									cout <<endl;
									
							//Cierre de archivo luego de la utilizacion del mismo	
							factura.close();
							
							system("pause");
							break;
						}
						case 2:
						{
							//utilizacion de la funcion numero 6 que nos sirve para visualizarlo dentro de nuestro programa
							ifstream LecFac;
							system("cls");
							SetConsoleTextAttribute(hConsole, 2);
							cout <<"\n\tRegistros de Vendedores de la tienda: "<<endl;
							SetConsoleTextAttribute(hConsole, 7);
							verRegistrosFac(LecFac);
							system("pause");
							break;
						}
						case 3:
						{
							//Opcion 3 para retornar al menu principal de opciones donde el usuario dejara ver las necesidades del mismo
							system("cls");
							return main();
							system("pause");
							break;
						}
						default:
						{	
							//Utilizacion default ya que este nos servira para validar si el usuario digito un numero fuera del rango este le permitira intentarlo de nuevo
							system("cls");
							cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
							system("pause");
							break;
						}
					system("cls");
					}
					//Finalizacion del ciclo do while ya que este terminara en un rango de 1-4
				}while(opcion2<=4);
			}
			
			//salida del programa
			case 7:{	
				cout <<"Seguro queres salir del programa...\n"<<endl;
				SetConsoleTextAttribute(hConsole, 2);
				cout <<"1. Si"<<endl;
				SetConsoleTextAttribute(hConsole, 5);
				cout <<"2. No"<<endl;
				SetConsoleTextAttribute(hConsole, 7);
				cin >>exit;
				
				//Condicional if para validar si el usuario elige la opcion 1 el sistema retornara a 0 para cerrarlo, si elige la 2 la condicional lo retornara a la funcion principal arriba descrita.
				
				if (exit == 1)
				{
					return 0;	
				}
				else
				{
					return main();	
				}
				break;
			}
			
			//Si ha digitado un numero fuera del rango se le solicita que vuelva a intentarlo
			default:{
				cout <<"Digitaste un numero fuera del rango por favor intentalo de nuevo."<<endl;
				break;
			}
		}
	//finalizacion del ciclo while para las opciones mayores al rango
	}while(opcion<=8);	
	//system clear para limpieza del tablero
	system("cls");
	return 0;
}