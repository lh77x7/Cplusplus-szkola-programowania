// rtti.cpp -- używanie operatora dynamic_cast
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

class Grand
{
    private:
        int hold;
    public:
        Grand(int h = 0) : hold(h) {}
        virtual void Speak() const { cout << "Jestem klasa Grand!\n";}
        virtual int Value() const { return hold; }
};

class Superb : public Grand
{
    public:
        Superb(int h = 0) : Grand(h) {}
        void Speak() const { cout << "Jestem klasa Superb!!\n"; }
        virtual void Say() const
        { cout << "Przechowuje wartosc klasy Superb, krora wynosi " << Value() << "!\n"; }
};

class Magnificient : public Superb
{
    private:
        char ch;
    public:
        Magnificient(int h = 0, char c = 'A') : Superb(h), ch(c) {}
        void Speak() const { cout << "Jestem klasa Magnificent!!!\n"; }
        void Say() const { cout << "Przechowuje znak " << ch << 
        " oraz liczbe " << Value() << "!\n";  }
};

Grand * GetOne();

int main()
{
    std::srand(std::time(0));
    Grand * pg;
    Superb * ps;
    for(int i = 0; i < 5; i++)
    {
        pg = GetOne();
        pg->Speak();
        if(ps = dynamic_cast<Superb *>(pg))
            ps->Say();
    }

    return 0;
}

Grand * GetOne() // generuje losowo jeden z trzech rodzajów obiektów
{
    Grand * p;
    switch(std::rand() % 3)
    {
        case 0: p = new Grand(std::rand() % 100);
            break;
        case 1: p = new Superb(std::rand() % 100);
            break;
        case 2: p = new Magnificient(std::rand() % 100, 'A' + std::rand() % 26);
            break; 
    }
    return p;    
}