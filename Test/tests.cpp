#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../Library.h"
#include "../MainPrototipai.h"
#include "../Prototipai.h"
#include "../Studentai.h"

TEST_CASE("Apskaiciuoti studento vidurki ir mediana") {
    vector<float> pazymiai = {7,10,9,3,5,2,6};
    int egzaminas = 10;
    REQUIRE(Vidurkis(pazymiai,egzaminas) == 8.4);
    REQUIRE(Mediana(pazymiai,egzaminas) == 8.4);
}

TEST_CASE("Studentu paskirstymas i kietekus ir nelaiminguosius"){
    vector<Studentai>::iterator it;
    vector<Studentai> student;
    vector<Studentai> kietekai;
    Studentai studentOne("Jonas","Jonaitis");
    studentOne.IrasytiPazymius(1);
    studentOne.IrasytiPazymius(4);
    studentOne.IrasytiPazymius(5);
    studentOne.IrasytiPazymius(3);
    studentOne.IrasytiPazymius(2);
    studentOne.IrasytiPazymius(4);
    studentOne.IrasytiPazymius(4);
    studentOne.EgzaminoPaz(5);
    studentOne.ApskaiciuotiVidurki();
    student.push_back(studentOne);
    Studentai studentTwo("Petras","Petraitis");
    studentTwo.IrasytiPazymius(10);
    studentTwo.IrasytiPazymius(9);
    studentTwo.IrasytiPazymius(6);
    studentTwo.IrasytiPazymius(8);
    studentTwo.IrasytiPazymius(5);
    studentTwo.IrasytiPazymius(10);
    studentTwo.IrasytiPazymius(7);
    studentTwo.EgzaminoPaz(6);
    studentTwo.ApskaiciuotiVidurki();
    student.push_back(studentTwo);
    Paskirstymas(student, kietekai);
    it=student.begin();
    REQUIRE(it->vardas() == "Jonas");
    it=kietekai.begin();
    REQUIRE(it->vardas() == "Petras");
}