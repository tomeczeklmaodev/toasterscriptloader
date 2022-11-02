CC := g++
CFLAGS := -Wall -g
TARGET := toaster.exe # output filename (windows)

# $(wildcard *.cpp /xxx/xxx/*.cpp): get all .cpp files from the current directory and dir "/xxx/xxx/"
SRCS := $(wildcard *.cpp)
# $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
OBJS := $(patsubst %.cpp,%.o,$(SRCS))

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) src\Main.cpp src\TextAlignment.cpp -o $@
%.o: %.cpp
	$(CC) $(CFLAGS) -c $<
clean:
	del $(TARGET) *.o
	
.PHONY: all clean