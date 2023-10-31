/*
 * moduloHandle.h
 */
 
 #ifndef MODULOHANDLE_H
 #define MODULOHANDLE_H
 
 /*
  * modulo of two operands
  */
 
 #include "abstractHandler.h"
 
 class ModuloHandle : public AbstractHandler {
public:
	 void handle(struct request *data) override;
 };
 
 #endif