CC = g++
CFLAGS = -std=c++11

START = ./
TARGET = generateVector
SRC = generateVector.cc

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: 
	$(START)$(TARGET)	

clean:
	rm -f $(TARGET)

