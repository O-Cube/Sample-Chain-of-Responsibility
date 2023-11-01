/*
 * Test sample chain of command application using google test ( and mock ) frame work
 */
 
 #include "gtest/gtest.h"
 #include "gmock/gmock.h"
 
 #include "additionHandler.h"
 #include "divisionHandler.h"
 #include "exponentHandler.h"
 #include "moduloHandler.h"
 #include "multiplicationHandler.h"
 #include "substractionHandler.h"
 
 /* test fixture class to be used to perform test */
class CoR : public testing::Test
{
protected:
	
	void SetUp() override {
	
	/* chain of handles */
	add_op->setNext(mul_op);
	mul_op->setNext(sub_op);
	sub_op->setNext(div_op);
	div_op->setNext(mod_op);
	mod_op->setNext(exp_op);
	exp_op->setNext(nullptr);
	}
	/* data used for testing */
	struct request test_data = {.firstOperand = 5,
		                        .secondOperand = 10,
		                        .operation = "add"
	};
	/* handles */
	Handler *add_op = new AdditionHandle(), *mul_op = new MultiplicationHandle(), \
	*sub_op = new SubtractionHandle(), *div_op = new DivisionHandle(), *mod_op = new ModuloHandle(), \
	*exp_op = new ExponentHandle();
};
 
 /* testing addition handle */
 TEST_F(CoR, AdditionTest)
 {
	test_data.operation = "add";
	add_op->handle(&test_data);
	EXPECT_FLOAT_EQ(15, test_data.result);
 } 
 
 /* testing multiplication handle */
 TEST_F(CoR, MultiplicationTest)
 {
	test_data.operation = "mul";
	add_op->handle(&test_data);
	EXPECT_FLOAT_EQ(50, test_data.result);
 } 
 
 /* testing difference handle */
 TEST_F(CoR, SubtractionTest)
 {
	test_data.operation = "diff";
	add_op->handle(&test_data);
	EXPECT_FLOAT_EQ(-5, test_data.result);
 } 
 
 /* testing division handle */
 TEST_F(CoR, DivisionTest)
 {
	test_data.operation = "div";
	add_op->handle(&test_data);
	EXPECT_FLOAT_EQ(0.5, test_data.result);
 } 
 
 /* testing modulo handle */
 TEST_F(CoR, ModuloTest)
 {
	test_data.operation = "mod";
	add_op->handle(&test_data);
	EXPECT_FLOAT_EQ(5, test_data.result);
 } 
 
  
 
 