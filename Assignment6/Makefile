CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Werror -Wpedantic -g -fPIC
TESTFLAGS:= -lgtest -lgtest_main -pthread
TARGET   := classes
SRC      := templates.cpp
OBJ      := $(SRC:.cpp=.o)   

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(TESTFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean

clean:
	rm -f $(TARGET) *.o
