CXX = g++
CXXFLAGS = -std=c++17 -Iincludes
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

SRCS = src/main.cpp src/Environment.cpp
OBJS = $(SRCS:.cpp=.o)

EXEC = Slug-Chase

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC) $(LDFLAGS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

run: $(EXEC)
	./$(EXEC)