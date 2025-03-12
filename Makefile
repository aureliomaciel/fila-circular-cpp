# Nome do executável
EXEC = programa_fila

# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -Wall -Wextra -std=c++11

# Arquivos fonte
SRC = main.cpp FilaCircular.cpp

# Objetos
OBJ = $(SRC:.cpp=.o)

# Regra principal (compila o programa)
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

# Regra para compilar os arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos gerados pela compilação
clean:
	rm -f $(OBJ) $(EXEC)
