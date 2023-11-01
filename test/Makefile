# sources
SRC = ../src/abstractHandler.cpp\
      ../src/additionHandler.cpp\
      ../src/divisionHandler.cpp\
      ../src/exponentHandler.cpp\
      ../src/moduloHandler.cpp\
      ../src/multiplicationHandler.cpp\
      ../src/substractionHandler.cpp\
	  ./main.cpp
	  
# include directories
INCLUDE = -I../src
# compiler options
CPPFLAGS = -Wall -g -std=c++14
# compiler 
CC = g++
# executable
EXECUTABLE = test.out
# remove
RM = rm
# list of objects
OBJS = $(SRC:.cpp=.o) 
# test flags
TESTFLAGS = -fprofile-arcs -ftest-coverage 

# garbage introduced by test coverage
GARBAGE = ./*.gcda ./*.gcno ../src/*.gcda ../src/*.gcno 

Build: $(EXECUTABLE) create_folder coverage

$(EXECUTABLE): $(OBJS)
	$(CC) $(CPPFLAGS) $(TESTFLAGS) $(INCLUDE) $(OBJS) -o$@ -lgtest -lgmock -lgtest_main -lpthread

%.o: %.cpp
	$(CC) $(CPPFLAGS) $(INCLUDE) $(TESTFLAGS) -c $< -o$@
	
create_folder: 
	mkdir -p ./output
	
coverage:
	./$(EXECUTABLE)
	lcov --capture --directory ./ --output-file ./output/lcov.info
	lcov -r ./output/lcov.info '/usr/include/*' '_deps/*' '*.png' --output-file ./output/lcov.info
	genhtml ./output/lcov.info --output-directory ./output

clean:
	$(RM) -f $(OBJS) $(EXECUTABLE) $(GARBAGE)
	$(RM) -rf ./output