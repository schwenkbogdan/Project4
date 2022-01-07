#pragma once
#include "IError.h"


class MathIError : 
    public IError 
{
private:
    string m_mathIError;
public:
    MathIError(string error, int a, int b, char op);

    string what() const noexcept;
};