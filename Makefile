CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = the_second_largest_number.cpp determine_base.cpp painting.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXECUTABLES)

$(EXECUTABLES): %: %.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLES)