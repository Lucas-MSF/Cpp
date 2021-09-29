
typedef int type_item;
const int max_fila=100;

class fila{

    private:
        int tamanho;
        type_item *estrutura;
        
    public:
        fila();//iniciando
        ~fila();//deletando
        void push_fila(type_item item);//adcionando elemento
        void pop_fila();//retirando elemento
        bool is_empty();//verificando se ta vazia
        bool is_full();//verificando se ta cheia
        int lenght();//tamanho da fila
        void imprimir();//print da fila
        
};