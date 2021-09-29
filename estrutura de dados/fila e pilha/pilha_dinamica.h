
typedef int type_item;

struct pilha_dinamica
{
    type_item valor;
    pilha_dinamica* proximo;
};


class Dinamic_stack{

    private:
    pilha_dinamica* NoTopo;
    int tamanho;

    public:

    Dinamic_stack(); //contrução da pilha
    ~Dinamic_stack(); //deletar pilha
    bool is_full(); //saber se ta cheia
    bool is_empyt();// saber se esta vazia
    void push(type_item item);//adcionar um elemento
    type_item pop();// remover um elemento
    void imprimir();//printar a pilha
    int length();//tamanho da pilha


};