
#include <iostream>
#include <windows.h>
#include <string>


int main()
{
	 //myClass myClase;
	 int var1 = 5;
	 int var2 = 6;
	 char name[50];
	std::cout << "dime tu nombre: " << "\n";
	std::cin >> name ;
	std::cout << "Hola: " << name << "\n";	
	 //std::cout << myClase.paint( var1, var2) << "\n";
    int x=5;
	int* y = &x ;
	 std::cout << "resultado: " << &y << "\n";
	system("pause");
	return 0;
}


