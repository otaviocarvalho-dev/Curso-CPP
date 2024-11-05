#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
    public:
        int vel;
        int tipo;
        Veiculo(int tp);
        int getvelMax();
        bool getligado();
        void setligado(int l);
    private:
        std::string nome;
        int velMax;
        bool ligado;
        void setVelMax(int vm);
};

int Veiculo::getvelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

bool Veiculo::getligado(){
    return ligado;
}

void Veiculo::setligado(int l){
    if (l == 1){
        ligado = true;
    }
    else if (l == 0){
        ligado = false;
    }
}

Veiculo::Veiculo(int tp){
    tipo = tp;
    if (tipo == 1) {
        nome = "Carro";
        setVelMax(200);
    }
    else if (tipo == 2) {
        nome = "Aviao";
        setVelMax(2000);
    }
    else if (tipo == 3) {
        nome = "Navio";
        setVelMax(80);
    }
    setligado(0);
}

#endif // CLASSES_H_INCLUDED
