typedef int type_item;

struct No
{
    type_item valor;
    No* proximo;
};

class fila2{

    private:
        No* primeiro;
        No* ultimo;
        int tamanho=0;
        
    public:
        fila2();
        ~fila2();
        void push(type_item item);
        type_item pop();
        bool is_empty();
        bool is_full();
        void imprimir();
        int lenght();

};
