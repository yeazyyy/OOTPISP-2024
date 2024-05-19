#pragma once

#include <iostream>

#include "IError.h"
#include "IOError.h"
#include "NotEnoughMemory.h"
#include "ReadFileError.h"
#include "WriteFileError.h"

#include <vector>
#include <memory>
#include <stdexcept>

class Container
{
public:
    Container() = default;

    void ShowAll() const;
    void Add(IError *_err);
    int size() const;

    IError *operator[](const int index);

    struct Node
    {
        explicit Node(IError *_date)
            : date(_date)
        {
        }

        IError *date;
        std::unique_ptr<Node> next = nullptr;
    };

private:
    int32_t _size = 0;
    std::unique_ptr<Node> head = nullptr;
};
