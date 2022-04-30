#ifndef MainPrototipai_H_INCLUDED
#define MainPrototipai_H_INCLUDED

#include "Studentai.h"
#include "Library.h"
#include "Ivedimai.cpp"
#include "Isvedimas.cpp"


void SkaitymasIsFailo(vector<Studentai> &stud);
void AtsitiktinisFailas(int sk);
void Isvedimas(vector<Studentai> & stud);
void IsvedimasIFaila(vector<Studentai> & stud, string FileName);


#endif