#include "../Headers/DNA.h"
#include "../Headers/Random.h"

int main() {
    srand(time(0));
    DNA_Class dna;

    for(int i = 0; i < 9999999; i++)
        dna.AddDNA(randomizeDNA());
    //dna.OutputDNANumeric();
    
    printf("Done!");
    return 0;
}