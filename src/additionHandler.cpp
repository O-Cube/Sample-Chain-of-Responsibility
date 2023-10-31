/*
 * perform the addition of two numbers
 */
 #include <cstring>
 #include "additionHandler.h"
 
 AdditionHandle::AdditionHandle() { }
 
 void AdditionHandle::handle(struct request *data) {
	 /* check request for addition if not send request to the next handle 
	  * "add" represents addition */
	 if (strcmp( "add", data->operation ) == 0) {
		 data->result = data->firstOperand + data->secondOperand;
	 }
	 else {
		 AbstractHandler::handle(data);
	 }
 }