/*
 * handler.h
 */

#ifndef HANDLER_H
#define HANDLER_H

/*
 * defines a request to be handled
 * firstOperand & secondOperand: value of two operands
 * result: stores the outcome of the operation
 * operation: a string of the operation to be performed
 */
 struct request {
	 float firstOperand;
	 float secondOperand;
	 float result;
	 const char* operation;
 };

class Handler {
public:
	virtual void setNext(Handler *handler) = 0;
	virtual void handle(struct request *data) = 0;
};
#endif