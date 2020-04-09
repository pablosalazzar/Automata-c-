/*
	Name: Automata C++
	Author: Pablo Salazar
	Instagram : @pablosalazzar  (Contacto directo)
	Canal Youtube: (Programando con pablo) https://www.youtube.com/channel/UC4kQg80cyA7VHEV4VGKwtEA 
	Date: 04/08/2016 
	Description: 
		Automata que reconozca la palabra "hola"
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


#define INICIO 0
#define S1 1
#define S2 2
#define S3 3
#define ERROR 4


int main(){
	int estado = INICIO;
	string cadena;
	cout<<"Ingrese la cadena"<<endl;
	cin>>cadena;
	char *cadenaconver = strdup(cadena.c_str());
	
	
	for(int i=0;i<cadena.length();i++){
		
		
		//---------------------------------
		switch(estado){
			
			case INICIO:
				if(cadenaconver[i]== 'h'){
					estado = S1;
				}else{
					estado = ERROR;
				}
				break;
				
			case S1:
				if(cadenaconver[i]== 'o'){
					estado = S2;
				}else{
					estado = ERROR;
				}
				
				
			break;
			
			case S2:
					if(cadenaconver[i]== 'l'){
					estado = S3;
				}else{
					estado = ERROR;
				}
				
				
			break;
			
			case S3:
					if(cadenaconver[i]== 'a'){
					cout<<"cadena permitida"<<endl;
				}else{
					estado = ERROR;
				}
				
				
			break;	
			
			case ERROR:
				cout<<"cadena no permitida"<<endl;
				i =cadena.length() + 100;
				
				
				break;
			
		}
		
		
		
		//----------------------------------
	
		
	}
	
	
	
	
	
	getch();
	return 0;
}
