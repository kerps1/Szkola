//
//  main.cpp
//  Sygnały1
//
//  Created by WyDym on 10.06.2017.
//  Copyright © 2017 WyDym. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
using namespace std;

void funkcja_sigusr1 (int numer)
{
    cout << "Sygnał sigusr1" << endl;
    cout << "FIN" << endl;

    exit(0);
}
int main(int argc, const char * argv[]) {
    
    signal (SIGUSR1, funkcja_sigusr1);
    
    while (1)
    {
        sleep (4000);
        
    }
    return 0;
}
