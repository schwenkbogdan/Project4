#pragma once
#include "IError.h"

class InputIError : 
    public IError {
private:
    string m_inputIError;
public:
    InputIError(string error, string inputtext);

    string what() const noexcept;

};