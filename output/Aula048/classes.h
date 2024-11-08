#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Base1{
public:
    void impBase1();
private:

};

void Base1::impBase1(){
    std::cout << "Impressao da classe Base1:" << std::endl;
}

class Base2{
public:
    void impBase2();
private:

};

void Base2::impBase2(){
    std::cout << "Impressao da classe Base2:" << std::endl;
}

class CFB:public Base1, public Base2{

};

#endif
