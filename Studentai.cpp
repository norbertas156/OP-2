#include "Studentai.h"
#include "Library.h"
#include "Prototipai.h"

Studentai::~Studentai() = default;

Studentai& Studentai::operator=(const Studentai& studentai){
    if(&studentai == this) return *this;

    vardas_ = studentai.vardas_;
    pavarde_ = studentai.pavarde_;
    pazymiai_ = studentai.pazymiai_;
    egzaminas_ = studentai.egzaminas_;
    vidurkis_ = studentai.vidurkis_;
    mediana_ = studentai.mediana_;
    return *this;
}

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