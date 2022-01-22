
#include <iostream>
//#include "windows"
#include <string>
#include "myClass.h"
int main()
{
	 myClass myClase;
	 int var1 ,var2;
	 std::cout << "Variable#1" << "\n";
	 std::cin >> var1;
     std::cout << "Variable #2" << "\n";
	 std::cin>> var2;
	 int result = myClase.paint( var1, var2);
	 std::cout << "Resultado: " << result << "\n";
	return 0;
}


