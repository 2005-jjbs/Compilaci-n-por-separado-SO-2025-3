# Configuración del compilador
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = programa
SRC_DIR = .
SRC_FILES = $(SRC_DIR)/main.c $(SRC_DIR)/funciones.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# Regla principal
all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza
clean:
	rm -f $(OBJ_FILES) $(TARGET)

.PHONY: all clean