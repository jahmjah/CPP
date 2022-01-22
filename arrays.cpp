#include <string>
#include <iostream>
#include <stdio.h>


int main()
{
int i;
int myArray[10];
int number; // number of lengh - numero de vueltas
 std::cout << "------------------------------\n";
 std::cout << "Tellme a number - Dime un numero.\n";
 std::cin >> number;

    for (i=0; i < number; i++){
     	 std::cout << "Lengh: " << i << "\n";
     	 myArray[i]= i;
    }

        std::cout << "Lengh: " << myArray[2] << "\n";
     	 std::cout << "-------------------------------" << "\n";
    for (i=0; i < number; i++){

     	 std::cout << "|Array:| [" << i << "] | " << "Contiene:| " << myArray[i] << " | \n" ;
    }
     	 std::cout << "-------------------------------" << "\n";
//	 std::cout << "Lengh: " << number << "\n";
//    system("pause");
	return 0;
}


