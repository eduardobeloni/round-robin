CXX = g++
SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)
TARGET = round-robin
CXXFLAGS += -O2

default: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf *.o $(TARGET)

clean-all:
	rm -rf *.o *~ $(TARGET)
