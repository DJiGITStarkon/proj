#include "MyDataBase.cpp"
/*
    stopsData:
        code
        name
    transportData:
        code
        type
    data:
        stopCode
        transportData

*/
int main()
{
    Main main;
    main.run();
    std::cout<<std::endl<<main.transNumber;
    return 0;
}
