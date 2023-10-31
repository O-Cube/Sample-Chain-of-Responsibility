/*
 * abstractHandler.h
 */
 
 #ifndef ABSTRACTHANDLER_H
 #define ABSTRACTHANDLER_H
 
 #include "handler.h"
 /* 
  * AbstractHandler: performs setNext function and a default handle operation for different concrete classes
  */
 class AbstractHandler : public Handler {
public:
	 void setNext(Handler *handler) override;
	 virtual void handle(struct request *data) override;
protected:
	 Handler *next_handler_;
 };
 #endif