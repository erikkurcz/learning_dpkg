# makefile

GCC=g++
TARGET=counter
SOURCE=main.cpp

all: 
	$(GCC) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

