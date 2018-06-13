//
// Created by william on 6/13/18.
//

#ifndef UNTITLED_RANDOM_H
#define UNTITLED_RANDOM_H

#include <cstdlib>
#include <ctime>

short randomizeDNA() {
    return rand()%4+0;
}

short randomizeRNA() {
    return rand()%5+0;
}

#endif //UNTITLED_RANDOM_H
