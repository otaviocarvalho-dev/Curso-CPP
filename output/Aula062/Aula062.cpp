// Smart pointer

#include <iostream>
#include <memory>

using namespace std;

class Carro{
public:
    int vel = 0;
    int getVel(){
        return vel;
    }
    void setVel(int v){
        this->vel = v;
    }
};

int main()
{
    shared_ptr<Carro>c1(new Carro);
    shared_ptr<Carro>c2(new Carro);
    c1->setVel(10);
    c2->setVel(5);
    cout << "Velocidade: " << c1->getVel() << "\n";
    cout << "Velocidade: " << c2->getVel() << "\n";

    unique_ptr<int>pnum(new int());
    *pnum = 10;

    cout << *pnum << " - " << &pnum << "\n";

    return 0;
}
