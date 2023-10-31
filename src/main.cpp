/*
 * main.cpp
 */
 
 #include <iostream>
 #include <string>
 
 #include "additionHandler.h"
 #include "multiplicationHandler.h"
 #include "substractionHandler.h"
 #include "divisionHandler.h"
 #include "moduloHandler.h"
 #include "exponentHandler.h"
 
 int main() {
	 /* sample request */
	 struct request data = {
		                         .firstOperand = 10.0,
								 .secondOperand = 20.0,
	                             .operation = "add" };
	/* creation of handlers */
	 Handler *add = new AdditionHandle(), *mul = new MultiplicationHandle(), \
	 *sub = new SubtractionHandle(), *div = new DivisionHandle(), *mod = new ModuloHandle(), \
	 *exp = new ExponentHandle();
	 /*
	 Handler mul;
	 SubtractionHandle sub;
	 DivisionHandle div;
	 ModuloHandle mod;
	 ExponentHandle exp;
	 */
	 /* chain of handlers */
	 add->setNext(mul);
	 mul->setNext(sub);
	 sub->setNext(div);
	 div->setNext(mod);
	 mod->setNext(exp);
	 exp->setNext(exp);
	 
	 /* perform addition */
	 add->handle(&data);
	 std::cout << "Addition: " <<  data.result << "\n";
	 
	 /* perform multiplication */
	 data.operation = "mul"; 
	 mul->handle(&data);
	 std::cout << "Multiplication: " <<  data.result << "\n";

     /* perform substraction */
	 data.operation = "diff";
	 sub->handle(&data);
	 std::cout << "Subtraction: " <<  data.result << "\n";

     /* perform division */
	 data.operation = "div"; 
	 div->handle(&data);
	 std::cout << "Division: " <<  data.result << "\n";
 
     /* perform modulo */
	 data.operation = "mod"; 
	 mod->handle(&data);
	 std::cout << "Modulo: " <<  data.result << "\n"; 

     /* perform exponent */
	 data.operation = "exp";
	 exp->handle(&data);
	 std::cout << "Exponent: " <<  data.result << "\n"; 
	 
	 return(0);
 }