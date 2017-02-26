#include "MyDataBase.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void Main::menu(){
    cout<<"--------------Меню--------------\n";
    cout<<"1) Добавить/удалить транспорт\n";
    cout<<"2) Добавить/удалить остановку\n";
    cout<<"3) Показать транспорт\n";
    cout<<"4) Показать остановки\n";
    cout<<"0) Выйти\n";

    char choice;
    cin>>choice;

    system("CLS");
    switch(choice){
    case '1':
        add_removeTrans();
        break;
    case '2':
        add_removeStops();
        break;
    case '3':
        showTrans();
    case '4':
        showStops();
    default:
        Exit();
        break;
    }
}

void Main::add_removeTrans(){
    cout<<"--------------(Добавить/удалить транспорт)--------------\n";
    cout<<"1) Добавить\n";
    cout<<"2) Удалить\n";
    cout<<"9) Меню\n";
    cout<<"0) Выйти\n";

    char choice;
    cin>>choice;

    system("CLS");
    switch(choice)
    {
    case '1':
        addTrans();
        break;
    case '2':
        removeTrans();
        break;
    case '9':
        menu();
        break;
    default:
        Exit();
        break;
    }
}
void Main::add_removeStops(){};
void Main::showTrans(){};
void Main::showStops(){};

void Main::addTrans(){

    cout<<"--------------(Добавить транспорт)--------------\n";
    cout<<"Выберите тип машини: \n";
    cout<<"1) Автобус\n";
    cout<<"2) Тролейбус\n";
    cout<<"3) Трамвай\n";
    cout<<"9) Меню\n";
    cout<<"0) Выйти\n";

    char choice;
    cin>>choice;

    switch(choice)
    {
    case '1':

        break;
    }

}
void Main::removeTrans(){};
void Main::addStops(){};
void Main::removeStops(){};
void Main::connect(){};

void Main::run(){
    setlocale(LC_ALL,"russian");
    menu();
}
void Main::Exit(){
    cout<<"До свидания\n";
    exit(0);
}
