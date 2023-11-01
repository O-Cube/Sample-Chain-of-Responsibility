# Sample-Chain-of-Responsibility
A scalable solution that performs mathetical operations by using handlers to perform each operation.

# description
- makes operations like additions, subtractions, division, multiplication, modulo, exponent into handles.
- handles are liked into chain of handles which produces a chain of command.
- request is wrapped into a struct request data which is passed into the chain of handles.
- request moves from first handles to interior handles and whatever handle that processes the request causes the application to return.

# requirements
- g++ compiler and make tool
- additional requirements: google test and mock framework to perform test.

#result
- request data:
  firstOperand = 10
  secondOperand = 20
  operation = ('add' afterwards 'mul', 'diff', 'div', 'mod' and 'exp').
- output:
  Addition: 30
  Multiplication: 200
  Subtraction: -10
  Division: 0.5
  Modulo: 10
  Exponent: 1e+20
# preocedure
- clone application
- in git folder, execute make -fMakefile Build
- later execute make -f Makefile Run
- finally make -f Makefile clean to clean execute and object files.


