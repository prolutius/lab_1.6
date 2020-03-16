#pragma once

template < typename forfibon >
forfibon my_fibonachi(forfibon f)
{
    if (f < 1) return 0;
    if (f == 1) return 1;
    return my_fibonachi(f - 1) + my_fibonachi(f - 2);
}