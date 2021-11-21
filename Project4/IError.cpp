#include "IError.h"

using namespace std;

IError::IError()
{

}
string InputIError::what() const noexcept {
    string error = m_IError + " : " + m_inputIError;
    return error;
}

void IError::Print()
{

}
	