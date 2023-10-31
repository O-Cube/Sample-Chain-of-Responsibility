/*
 * perform the difference of two numbers
 */
 #include <cstring>
 #include "substractionHandler.h"
 
 void SubtractionHandle::handle(struct request *data) {
	 /* check request for difference if not send request to the next handle 
	  * "diff" represents difference of the two operands */
	 if (strcmp( "diff", data->operation ) == 0) {
		 data->result = data->firstOperand - data->secondOperand;
	 }
	 else {
		 AbstractHandler::handle(data);
	 }
 }