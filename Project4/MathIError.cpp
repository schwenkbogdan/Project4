#include "MathIError.h"
MathIError::MathIError(string error, int a, int b, char op) : IError(error) {
    m_mathIError = to_string(a) + " " + op + " " + to_string(b);
}