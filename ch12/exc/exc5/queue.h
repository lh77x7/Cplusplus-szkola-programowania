// queue.h -- interfejs kolejki, ćwiczenie 5 rozdział 12
#ifndef QUEUE_H_
#define QUEUE_H_

// ta kolejka będzie przechowywała element klasy Customer
class Customer
{
    private:
        long arrive;        // czas dołączenie klienta do kolejki
        int processtime;    // czas oczekiwania klienta
    public:
        Customer() { arrive = processtime = 0; }
        void set(long when);
        long when() const { return arrive; }
        int ptime() const { return processtime; }
};

typedef Customer Item;
class Queue
{
    private:
        // definicja zasięgu klasy
        // Node to definicja zagnieżdżona klasy, lokalna względem tej klasy
        struct Node { Item item; struct Node * next; };
        enum {Q_SIZE = 10};
        // prywatne składowe klasy
        Node * front;       // wskaźnik czoła kolejki
        Node * rear;        // wskaźnik ogona kolejki
        int items;          // bieżąca liczba elementów kolejki
        const int qsize;    // maksymalna liczba elementów kolejki
        // definicje blokujące publiczny dostęp do operatora kopiowania
        Queue(const Queue & q) : qsize(0) { }
        Queue & operator=(const Queue & q) { return *this; }
    public:
        Queue(int qs = Q_SIZE);     // tworzy kolejkę o pojemności qs
        ~Queue();                   // destruktor
        bool isempty() const;
        bool isfull() const;
        int queuecount() const;
        bool enqueue(const Item &item); // dodaje element na koniec kolejki
        bool dequeue(Item &item);       // wyciąga element z czoła kolejki
};

#endif 