//
// Created by 최영환1 on 7/14/24.
//

#include "fib.h"

int fib(int n){
    if (n<=1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}