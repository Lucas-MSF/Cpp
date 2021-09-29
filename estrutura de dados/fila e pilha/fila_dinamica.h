
typedef int type_item;

struct fila_dinamica
{
    type_item valor;
    fila_dinamica* proximo;
};


class Dinamic_queue{

    private:
    fila_dinamica* primeiro;
    fila_dinamica* ultimo;
    int tamanho;

    public:

    Dinamic_queue(); //contrução da fila
    ~Dinamic_queue(); //deletar fila
    bool is_full(); //saber se ta cheia
    bool is_empty();// saber se esta vazia
    void push(type_item item);//adcionar um elemento
    type_item pop();// remover um elemento
    void imprimir();//printar a fila
    int length();

};