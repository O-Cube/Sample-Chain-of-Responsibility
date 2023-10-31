/*
 * perform the addition of two numbers
 */
 #include <cstring>
 #include <cmath>
 #include "exponentHandler.h"
 
 void ExponentHandle::handle(struct request *data) {
	 /* check request for exponent if not send request to the next handle 
	  * "exp" represents exponential operator */
	 if (strcmp( "exp", data->operation ) == 0) {
		 data->result = std::pow(data->firstOperand, data->secondOperand);
	 }
	 else {
		 AbstractHandler::handle(data);
	 }
 }