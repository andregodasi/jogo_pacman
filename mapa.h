typedef struct mapa {
    char** matriz;
    int linhas;
    int colunas;
} MAPA;

typedef struct posicao {
    int x;
    int y;
} POSICAO;

void alocamapa();
void lemapa();
void liberamapa();
void imprimemapa();
void encontramapa(MAPA* m, POSICAO* p, char c);
