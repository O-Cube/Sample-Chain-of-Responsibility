# sources
SRC = ./src/abstractHandler.cpp\
      ./src/additionHandler.cpp\
      ./src/divisionHandler.cpp\
      ./src/exponentHandler.cpp\
      ./src/moduloHandler.cpp\
      ./src/multiplicationHandler.cpp\
      ./src/substractionHandler.cpp\
	  ./src/main.cpp
	  
# include directories
INCLUDE = -I./src
# compiler options
CPPFLAGS = -Wall -g -std=c++14
# compiler 
CC = g++
# executable
EXECUTABLE = chain.out
# remove
RM = rm
# list of objects
OBJS = $(SRC:.cpp=.o)

Build: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CPPFLAGS) $(INCLUDE) $(OBJS) -o$@

%.o: %.cpp
	$(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o$@

Run: 
	./$(EXECUTABLE)

clean:
	$(RM) -f $(OBJS) $(EXECUTABLE)
