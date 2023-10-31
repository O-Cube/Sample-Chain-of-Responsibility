/*
 * additionHandle.h
 */
 
 #ifndef SUBTRACTIONHANDLE_H
 #define SUBTRACTIONHANDLE_H
 
 /*
  * difference of two operands
  */
 
 #include "abstractHandler.h"
 
 class SubtractionHandle : public AbstractHandler {
public:
	 void handle(struct request *data) override;
 };
 
 #endif