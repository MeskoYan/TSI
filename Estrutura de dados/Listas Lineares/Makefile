CXX = g++
CXXFLAGS = -Wall -Wextra -Wno-type-limits -std=c++11 -IAlgoritmos

BIN_DIR = bin
SRC_DIR = src
ALG_DIR = Algoritmos

# Arquivos base
BASE_LISTA = $(ALG_DIR)/blista.cpp $(ALG_DIR)/ListaSequencial.cpp
BASE_PILHA = $(ALG_DIR)/blista.cpp $(ALG_DIR)/Pilha.cpp $(ALG_DIR)/Fila.cpp
BASE_BLISTA = $(ALG_DIR)/blista.cpp

TARGETS = ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09
BINS = $(addprefix $(BIN_DIR)/, $(TARGETS))

.PHONY: all clean run $(TARGETS)

all: $(BINS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/ex01: $(SRC_DIR)/ex01.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex02: $(SRC_DIR)/ex02.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex03: $(SRC_DIR)/ex03.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex04: $(SRC_DIR)/ex04.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex05: $(SRC_DIR)/ex05.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex06: $(SRC_DIR)/ex06.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex07: $(SRC_DIR)/ex07.cpp $(BASE_LISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex08: $(SRC_DIR)/ex08.cpp $(BASE_PILHA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/ex09: $(SRC_DIR)/ex09.cpp $(BASE_BLISTA) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Atalhos individuais
ex01: $(BIN_DIR)/ex01
ex02: $(BIN_DIR)/ex02
ex03: $(BIN_DIR)/ex03
ex04: $(BIN_DIR)/ex04
ex05: $(BIN_DIR)/ex05
ex06: $(BIN_DIR)/ex06
ex07: $(BIN_DIR)/ex07
ex08: $(BIN_DIR)/ex08
ex09: $(BIN_DIR)/ex09

run: all
	@echo "========================================"
	@echo "Executando Exercicio 01..."
	@echo "========================================"
	@./$(BIN_DIR)/ex01
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 02..."
	@echo "========================================"
	@./$(BIN_DIR)/ex02
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 03..."
	@echo "========================================"
	@./$(BIN_DIR)/ex03
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 04..."
	@echo "========================================"
	@./$(BIN_DIR)/ex04
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 05..."
	@echo "========================================"
	@./$(BIN_DIR)/ex05
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 06..."
	@echo "========================================"
	@./$(BIN_DIR)/ex06
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 07..."
	@echo "========================================"
	@./$(BIN_DIR)/ex07
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 08..."
	@echo "========================================"
	@./$(BIN_DIR)/ex08
	@echo ""
	@echo "========================================"
	@echo "Executando Exercicio 09..."
	@echo "========================================"
	@./$(BIN_DIR)/ex09

clean:
	rm -rf $(BIN_DIR)
