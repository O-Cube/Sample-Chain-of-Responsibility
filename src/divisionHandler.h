/*
 * divisionHandle.h
 */
 
 #ifndef DIVISIONHANDLE_H
 #define DIVISIONHANDLE_H
 
 /*
  * divides two operands
  */
 
 #include "abstractHandler.h"
 
 class DivisionHandle : public AbstractHandler {
public:
	 void handle(struct request *data) override;
 };
 
 #endif