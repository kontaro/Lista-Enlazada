#include <iostream>

using namespace std;

class Nodo
{
    private:
        int elemento;
    public:
        Nodo *sig;

        Nodo(){
        setElemento(0);
        sig=NULL;
        }
    void setElemento(int numero){
        elemento=numero;
    }
    int getElemento(){
        return elemento;
    }
};
class Lista{

    private:
        Nodo *primero;
        Nodo *ultimo;

    public:
        Lista(){
            primero=NULL;
            ultimo=NULL;
        }

    bool vacio(){
        if (primero==NULL)
            return true;
        else
            return false;
    }


};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
