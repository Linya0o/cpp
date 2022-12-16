CC      = clang++
CFLAGS  = -g -Wall -Wno-unused-parameter -pedantic -std=c++20 -stdlib=libc++
TARGET  = main
SRC_DIR = src
BIN_DIR = bin
OBJ_DIR = obj
DEPS    = main.cc
OBJS    := $(DEPS:%.cc=$(OBJ_DIR)/%.o)
space   :=
space   +=
sources = $(subst $(space),:,$(filter-out src/main.cc, $(wildcard src/*)))

vpath %.cc $(SRC_DIR):$(sources)

$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) -o $(BIN_DIR)/$(TARGET) $(OBJS)

$(OBJ_DIR)/%.o : %.cc
	@$(CC) -c $(CFLAGS) $< -o $@

.PHONY: path clean run
path:
	@mkdir {$(BIN_DIR),$(OBJ_DIR),$(SRC_DIR)}
clean:
	@rm -r $(OBJ_DIR)/* $(BIN_DIR)/*
run:
	@./bin/main
