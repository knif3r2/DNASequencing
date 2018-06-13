//
// Created by william on 6/13/18.
//
#include "../Headers/DNA.h"

void DNA_Class::AddDNA(unsigned short dnatype) {
    if (dnatype < 4) {
        dna_1 = dnatype;
        switch (dna_1) {
            case 0:
                dna_2 = 1; //A = T
                break;
            case 1:
                dna_2 = 0; //T = A
                break;
            case 2:
                dna_2 = 3; //G = C
                break;
            case 3:
                dna_2 = 2; //C = G
                break;
            default:
                printf("Error: Not numerical value between 0 - 3.");
                break;
        }
        dnalist.push_back({dna_1, dna_2});
    }
}

void DNA_Class::OutputDNANumeric() {
    for(auto & element : dnalist) {
        printf("DNA1: %i |DNA2: %i\n",element.first,element.second);
    }
}