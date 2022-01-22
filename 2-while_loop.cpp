/*
	Name: 2-while_loop.cpp
	Copyright: 06-2021
	Author: @jahmjah
	Date: 01/06/21 21:41
	Description: practice of while loop in c++
*/


#include <iostream>
#include <windows.h>
#include <string>


int main()
{
	int i=0, j=0;
	char name[50];
	std::cout << "dime tu nombre: " << "\n";
	std::cin >> name ;
	// +-+-+-
	std::cout << "dime tu edad: " << "\n";
	std::cin >> j ;
			
	while(j >=  18) {
	std::cout << "Hola: " << name << " eres mayor de Edad, tienes " << j << " años" "\n";
	break;
	//i++;
}
	while(j <  18) {	  
	std::cout << "Hola: " << name << " eres menor de Edad, tienes " << j << " años" "\n";
	break;		
	}
	system("pause");
	return 0;	
}
