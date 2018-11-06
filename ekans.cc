using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
    
unsigned int microseconds = 30000;

int main(int argc, char* argv[]){
    
    int numberOfPrinting = 10000;
    char *p;
    char simbol = 'c';

    if(argc == 2){
        long conv = strtol(argv[1], &p, 10);
        numberOfPrinting = conv;
    }
    else if(argc == 3){
        long conv = strtol(argv[1], &p, 10);
        numberOfPrinting = conv;

        simbol = argv[2][0];
    }
    else{
        cout << "ehm error?!" << endl;
    }
    
    
    for(int i = 0;i < numberOfPrinting; i++){
        cout << simbol;
        cout.flush();
        usleep(microseconds);
    }
    
}
