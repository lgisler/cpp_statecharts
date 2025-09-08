CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -pedantic
INCLUDE_DIRS = src
SOURCES = src/example_main.cpp
TARGET = example_main

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -I $(INCLUDE_DIRS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
