//
// Created by Pedro Garcia on 11/1/2020.
// Worked on William h Cantu, Pedro Garcia, Christopher Mendez
#include <string>
#include <cstdlib>
#include <iostream>
#include "hack.h"
#include "evilcomputer.h"
using namespace std;

void hack(EvilComputer* ec){

    Hack_daveComputer(ec, "");
    Hack_guestComputer(ec, "passw123");
    Hack_mr_meanComputer(ec, "");
    Hack_ms_chiefComputer(ec, "");
    Hack_dr_evilComputer(ec, " ");
}
/////////////////////////////////////////////////////////////
// guest password is passw123
void Hack_guestComputer(EvilComputer* ec, string partial){

    (*ec).guess("Guest", partial);

    if((*ec).is_hacked("Guest")){
        return ;
    }

}
/////////////////////////////////////////////////////////////
// dave password consists of exactly 4 digits
void Hack_daveComputer(EvilComputer* ec, string partial){
    (*ec).guess("Dave", partial);
    if ((*ec).is_hacked("Dave")){

        return;
    }
    if((partial.size()>4)){

        return;
    }
    for(char c1 = '0'; c1<= '9'; c1++){
        Hack_daveComputer(ec, partial+c1);
    }

}
/////////////////////////////////////////////////////////////
//mr means  password consists of only the characters g and r
void Hack_mr_meanComputer(EvilComputer* ec, string partial){
    (*ec).guess("Mr. Mean", partial);
    if ((*ec).is_hacked("Mr. Mean")){

        return;
    }
    if((partial.size()>8)){
        return;
    }
    Hack_mr_meanComputer(ec, partial+'g');
    Hack_mr_meanComputer(ec, partial+'r');
}
/////////////////////////////////////////////////////////////
// ms chief password starts with"haha"
void Hack_ms_chiefComputer(EvilComputer* ec, string partial){
    (*ec).guess("Ms. Chief", partial);
    if ((*ec).is_hacked("Mr. Mean")){

        return;
    }
}

/////////////////////////////////////////////////////////////
// dr evil password starts or ends with the string "gato"
void Hack_dr_evilComputer(EvilComputer* ec, string partial){
    (*ec).guess("Dr. Evil", partial);

}
////////////////////////////////////////////////////////////
