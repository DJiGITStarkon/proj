#include "MyDataBase.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void Main::menu(){
    cout<<"--------------����--------------\n";
    cout<<"1) ��������/������� ���������\n";
    cout<<"2) ��������/������� ���������\n";
    cout<<"3) �������� ���������\n";
    cout<<"4) �������� ���������\n";
    cout<<"0) �����\n";

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
    cout<<"--------------(��������/������� ���������)--------------\n";
    cout<<"1) ��������\n";
    cout<<"2) �������\n";
    cout<<"9) ����\n";
    cout<<"0) �����\n";

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

    cout<<"--------------(�������� ���������)--------------\n";
    cout<<"�������� ��� ������: \n";
    cout<<"1) �������\n";
    cout<<"2) ���������\n";
    cout<<"3) �������\n";
    cout<<"9) ����\n";
    cout<<"0) �����\n";

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
    cout<<"�� ��������\n";
    exit(0);
}
