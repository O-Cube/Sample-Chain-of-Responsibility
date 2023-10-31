/*
 * perform the division of two numbers
 */
 #include <cstring>
 #include "divisionHandler.h"
 
 
 void DivisionHandle::handle(struct request *data) {
	 /* check request for divison if not send request to the next handle 
	  * "div" represents division operator */
	 if (strcmp( "div", data->operation ) == 0) {
		 data->result = data->firstOperand / data->secondOperand;
	 }
	 else {
		 AbstractHandler::handle(data);
	 }
 }