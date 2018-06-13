//
// Created by william on 6/13/18.
//

#ifndef UNTITLED_DNA_H
#define UNTITLED_DNA_H
#include <vector>
#include <cstdio>
#include <cctype>
#include <ctime>
using std::vector;
using std::clock_t;

struct DNAcontainer{
    /* A = T, T = A, G = C, C = G */
    unsigned short first, second;
};

class DNA_Class
{
private:
    vector<DNAcontainer> dnalist;
    unsigned short dna_1 {0};
    unsigned short dna_2 {0};


public:
    void AddDNA(unsigned short dnatype);
    void OutputDNANumeric();
};

#endif //UNTITLED_DNA_H