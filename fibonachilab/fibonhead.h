#pragma once

template < unsigned forfibon > struct fibonachi
{
    static const unsigned value = fibonachi<forfibon - 1>::value + fibonachi<forfibon - 2>::value;
    };

template <> struct fibonachi <0>
{
    static const unsigned value = 0;
};

template <> struct fibonachi <1>
{
    static const unsigned value = 1;
};
