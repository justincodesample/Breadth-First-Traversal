CXX = g++

CFLAGS = -std=c++17 -Wall -Wextra

TARGET = driver

SRCS = driver.cpp bft.cpp graph.cpp

HDRS = $(wildcard *.h)

OBJS = $(SRCS:.cpp=.o)
all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)
