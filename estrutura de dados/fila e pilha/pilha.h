
typedef int type_item;
const int max_itens= 100;


class stack{

    private:
    int tamanho;
    type_item* estrutura;

    public:

    stack(); //contrução da pilha
    ~stack(); //deletar pilha
    bool is_full(); //saber se ta cheia
    bool is_empyt();// saber se esta vazia
    void push(type_item item);//adcionar um elemento
    type_item pop();// remover um elemento
    void imprimir();//printar a pilha
    int length();//tamanho da pilha


};