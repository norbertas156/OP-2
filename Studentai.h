#pragma once

#include "Library.h"


class Studentai{
    private:
    string vardas_;
    string pavarde_;
    float egzaminas_;
    vector <float> pazymiai_;
    double vidurkis_;
    double mediana_;
    public:

    Studentai(): egzaminas_(0){}

    ~Studentai();
    Studentai(const Studentai& studentai);
    Studentai& operator = (const Studentai& studentai);

    Studentai(const string &vardas, const string &pavarde);
    inline string vardas() const {return vardas_;}
    inline string pavarde() const {return pavarde_;}
    inline vector<float> getPazymiai() const {return pazymiai_;}
    inline double StudentoVidurkis() const {return vidurkis_;}
    inline double StudentoMediana() const {return mediana_;}
    inline int getEgzaminas() const {return egzaminas_;}

    void IrasytiPazymius(int);
    void IstrintiEgzaminoPazymiIsGalo();
    void EgzaminoPaz(int);
    void ApskaiciuotiVidurki();
    void ApskaiciuotiMediana();
};
