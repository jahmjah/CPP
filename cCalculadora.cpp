/***************************************************************
 * Name:      CalculatorApp.h
 * Purpose:   Defines Application Class
 * Author:    Jose Alberto Hernandez (jahm_jah@yahoo.com)
 * Created:   2021-12-28
 * Copyright: Jose Alberto Hernandez ()
 * License:
 **************************************************************/
#include <iostream>
#include <string>
#include "cCalculadora.h"

cCalculadora::cCalculadora()
{
    //ctor
}

cCalculadora::~cCalculadora()
{
    //dtor
}

 main(){
 	//int calculadora;
//string resultado;
    //string resultado;
    cCalculadora calculadora;
    //resultado = calculadora.mSumar(5,3);
    std::cout << "resultado: " << calculadora.mSumar(5,3) << "\n\r";
    std::cout << "resultado: " << calculadora.mRestar(5,3) << "\n\r";    
    return 0;
}

