/*
        Name: for to
        Copyright: 06-2021
        Author: @jahmjah
        Date: 01/06/21 21:40
        Description: practices of loop in c++ with for to...
*/

#include <iostream>
#include <windows.h>
#include <string>


int main()
{

         int i = 0; // numero de vueltas
         int j = 0; // contador
         int k = 0;
         char name[50];
        std::cout << "dime tu nombre: " << "\n";
        std::cin >> name ;
        std::cout <<"Hola " << name << " dime num de vueltas: " << "\n";
        std::cin >> i ;
        for (j = 0; j < i; j++){
        std::cout << "Hola: " << name << "vuelta #" << j << "\n";
        }

        system("pause");
        return 0;
}



