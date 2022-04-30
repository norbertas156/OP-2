#include "Studentai.h"
#include "Library.h"
#include "Prototipai.h"

Studentai::Studentai(const string &vardas, const string &pavarde){
    vardas_=vardas;
    pavarde_=pavarde;
}


void Studentai::IrasytiPazymius(int pazymys){
    pazymiai_.push_back(pazymys);
}

void Studentai::IstrintiEgzaminoPazymiIsGalo(){
    pazymiai_.pop_back();
}

void Studentai::EgzaminoPaz(int pazymys){
    egzaminas_=pazymys;
}

void Studentai::ApskaiciuotiVidurki(){
    vidurkis_=Vidurkis(pazymiai_, egzaminas_);
}

void Studentai::ApskaiciuotiMediana(){
    mediana_=Mediana(pazymiai_, egzaminas_);
}