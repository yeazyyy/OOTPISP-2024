#include <iostream>
#include <string>

#include "Container.h"

#include "IError.h"
#include "IOError.h"
#include "NotEnoughMemory.h"
#include "ReadFileError.h"
#include "WriteFileError.h"

int main()
{
    Container container;

    IOError io1(IOError::Type::INPUT);
    IOError io2(IOError::Type::OUTPUT);

    if (io1 == io2)
    {
        std::cout << "Errors are same" << std::endl;
    }
    else
    {
        std::cout << "Errors are different" << std::endl;
    }

    container.Add(&io1);
    container.Add(&io2);

    NotEnoughMemory nem1(NotEnoughMemory::MemoryType::VRAM);
    NotEnoughMemory nem2(NotEnoughMemory::MemoryType::VRAM);

    if (nem1 == nem2)
    {
        std::cout << "Memory are same" << std::endl;
    }
    else
    {
        std::cout << "Memory are different" << std::endl;
    }
    nem2 = nem1;

    container.Add(&nem1);
    container.Add(&nem2);

    ReadFileError rfe1("CANNOT OPEN FILE");
    ReadFileError rfe2("CANNOT OPEN FILE");

    if (rfe1 == rfe2)
    {
        std::cout << "Errors are same" << std::endl;
    }
    else
    {
        std::cout << "Erros are different" << std::endl;
    }

    container.Add(&rfe1);
    container.Add(&rfe2);

    std::cout << "Amount of erros: " << container.size() << std::endl;
    container.ShowAll();

    container[7]->Print();
}
