// 8.1 - 8.7 - rozwiązania zadań z rodziału 8

/*

1 - NOT DONE
2 - DONE
3 - NOT DONE
4 - NOT DONE
5 - NOT DONE
6 - NOT DONE
7 - NOT DONE

*/

#include <iostream>
using namespace std;

// deklaracja struktur
struct Batonik{
    char name[40];
    double price;
    int length;
};

// deklaracje funkcji
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void showmenu();
void displayBatonik(Batonik &);

int main(){

    showmenu();
    int choice;
    cin >> choice;

    while(choice != 100)
    {
        switch (choice)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        case 4:
            zad4();
            break;
        case 5:
            zad5();
            break;
        case 6:
            zad6();
            break;
        case 7:
            zad7();
            break; 
        case 100: 
            break;     
        default:
            cout << "Nie ma takiej opcji.\n";
            break;
        }
        showmenu();
        cin >> choice;
    }
    cout << "Koniec programu.\n";

    return 0;
}

void showmenu(){
    
    cout << "Wybierz od 1 do 7: \n";

}

void zad1() {

}

void zad2() {
    Batonik one = {"Millennium Munch", 2.85, 350};
    displayBatonik(one);
}

void zad3() {
    
}

void zad4() {

}

void zad5() {

}

void zad6() {

}

void zad7() {
    
}

void displayBatonik(Batonik &a){
    cout << "Nazwa: "<< a.name << endl;
    cout << "Cena: " << a.price << endl;
    cout << "Dlugosc: " << a.length << endl;
}