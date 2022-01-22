
#include <iostream>
//#include "windows"
#include <string>
//#include "myClass.h"
int main()
{
	 //myClass myClase;
	 int x= 123;
	 //int y, result ;
    //var1 = 0;
    //var2 = 0;
    //result = 0;
    //result = &var1;
	 std::cout << "Valor x = " <<x<< "\n";
     std::cout << "Tamaño de x= "<<sizeof(x)<< "\n";
    //int y = &x;
	 std::cout << "Variable#1 <<&x>>= " <<&x<< "\n";
     std::cout << "Tamaño de &x= "<<sizeof(&x)<< "\n";
	 //std::cin >> var1;

    int* y = &x;
     std::cout << "Variable #2 Y= "<<y<< "\n";
     std::cout << "Variable #2 &Y= "<<&y<< "\n";
     std::cout << "Variable #2 *Y= "<<*y<< "\n";
     std::cout << "Tamaño de #2= "<<sizeof(*y)<< "\n";
    *y = *y + 1;
     std::cout << "Variable #2 *Y + 1= "<<*y<< "\n";
     std::cout << "Variable #1 x= "<<x<< "\n";
	 //std::cin>> var2;
	 //int result = myClase.paint( var1, var2);
	 //result = var2;
	 //std::cout << "Resultado: "<<var2<< "\n";
	return 0;
}


