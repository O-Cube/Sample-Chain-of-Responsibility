/*
 * additionHandle.h
 */
 
 #ifndef ADDITIONHANDLE_H
 #define ADDITIONHANDLE_H
 
 /*
  * sums up two operands
  */
 
 #include "abstractHandler.h"
 
 class AdditionHandle : public AbstractHandler {
public: 
     AdditionHandle();
	 void handle(struct request *data) override;
 };
 
 #endif