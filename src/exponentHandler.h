/*
 * exponentHandle.h
 */
 
 #ifndef EXPONENTHANDLE_H
 #define EXPONENTHANDLE_H
 
 /*
  * exponent two operands
  */
 
 #include "abstractHandler.h"
 
 class ExponentHandle : public AbstractHandler {
public:
	 void handle(struct request *data) override;
 };
 
 #endif