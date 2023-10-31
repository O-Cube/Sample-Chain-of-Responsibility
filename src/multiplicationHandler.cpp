/*
 * perform the addition of two numbers
 */
 #include <cstring>
 #include "multiplicationHandler.h"

 
 void MultiplicationHandle::handle(struct request *data) {
	 /* check request for multiplication if not send request to the next handle 
	  * "mul" represents multiplication operator */
	 if (strcmp( "mul", data->operation ) == 0) {
		 data->result = data->firstOperand * data->secondOperand;
	 }
	 else {
		 AbstractHandler::handle(data);
	 }
 }