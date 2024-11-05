#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
    public:
        int vel = 0;
        int velMax;
        std::string tipo;
        Aviao(int tp);
        void imprimir();

    private:

};

Aviao::Aviao(int tp){
    if (tp == 1){
        tipo = "Jato";
        velMax = 800;
    }
    else if (tp == 2){
        tipo = "Monomotor";
        velMax = 350;
    }
    else if (tp == 3){
        tipo = "Planador";
        velMax = 180;
    }
}

void Aviao::imprimir(){
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Velocidade Max.: " << velMax << std::endl;
    std::cout << "Velocidade atual: " << vel << std::endl;
    std::cout << "\n";
}

#endif // AVIAO_H_INCLUDED
