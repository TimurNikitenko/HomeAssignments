CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Werror -Wpedantic -g -fPIC
TESTFLAGS:= -lgtest -lgtest_main -pthread
TARGET   := classes
SRC      := templates.cpp
OBJ      := $(SRC:.cpp=.o)   

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(TESTFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)
