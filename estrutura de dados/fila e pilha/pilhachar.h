
typedef char type_item;
const int max_item= 100;

class stackChar{

    private:
    int tamanho;
    char* pilha;

    public:
    stackChar();// iniciar pilha
    ~stackChar();// deletar pilha
    void push(type_item item);//add item
    type_item pop();// remove item
    bool is_empty();// verificador vazio
    bool is_full();// verificador cheio
    int lenght();// tamanho
    void imprimir();// imprimi a pilha
};