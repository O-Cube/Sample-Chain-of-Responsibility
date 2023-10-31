/*
 * multiplicationHandle.h
 */
 
 #ifndef MULTIPLICATIONHANDLE_H
 #define MULTIPLICATIONHANDLE_H
 
 /*
  * multiplies two operands
  */
 
 #include "abstractHandler.h"
 
 class MultiplicationHandle : public AbstractHandler {
public:
	 void handle(struct request *data) override;
 };
 
 #endif