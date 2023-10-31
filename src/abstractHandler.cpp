/*
 * abstractHandler.cpp
 */
 
 #include "abstractHandler.h"
 /*
  * AbstractHandler construtor initializes next_handle_ member variable */
 
 void AbstractHandler::setNext(Handler *handler) {
	 this->next_handler_ = handler;
 }
 /* if next handler is null, then execution returns from chain pattern */
 void AbstractHandler::handle(struct request *data) {
	 if (this->next_handler_) {
		this->next_handler_->handle(data);
	 }
 }