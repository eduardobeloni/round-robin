CXX = g++
SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)
TARGET = round-robin
CXXFLAGS += -O2

default: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

-include $(DEP)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	$(CXX) -MM $(CFLAGS) $< > $*.d

clean:
	rm -rf *.o $(TARGET)

clean-all:
	rm -rf *.o *~ $(TARGET)
