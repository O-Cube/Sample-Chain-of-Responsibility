/*
 * perform the modulo of two numbers
 */
 #include <cstring>
 #include "moduloHandler.h"
 
 void ModuloHandle::handle(struct request *data) {
	 /* check request for modulo if not send request to the next handle 
	  * "mod" represents modular operator */
	 if (strcmp( "mod", data->operation ) == 0) {
		 data->result = (int)data->firstOperand % (int)data->secondOperand;
	 }
	 else {
		 AbstractHandler::handle(data);
	 }
 }