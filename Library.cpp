// Copyright 2015 <SYCH>
#include "stdafx.h"
#include "Library.h"
#include <string>
#include <vector>
Library::Library() {
    name = "";
    adress = "";
    mas.clear();
}
Library::Library(const std::string Name, const std::string Adress) {
    name = Name;
    adress = Adress;
    mas.clear();
}
Library::~Library() {
    name = adress = "";
    for (unsigned int i = 0; i < mas.size(); i++)
        delete mas[i];
    mas.clear();
}
void Library::SetName(const std::string& Name) {
    name = Name;
}
void Library::SetAdress(const std::string& Adress) {
    adress = Adress;
}
std::string  Library::GetName() const {
    return name;
}
std::string  Library::GetAdress() const {
    return adress;
}
void Library::printAll() {
    std::cout << "\n" << name << "\n" << adress << "\n";
    for (unsigned int i = 0; i < mas.size(); i++)
        mas[i]->printBook();
}
void Library::printTaken() {
    std::cout << "\n" << name << "\n" << adress << "\n";
    for (unsigned int i = 0; i < mas.size(); i++)
    if (mas[i]->isTaken())
        mas[i]->printBook();
}
void Library::printAvailable() {
    std::cout << "\n" << name << "\n" << adress << "\n";
    for (unsigned int i = 0; i < mas.size(); i++)
    if (mas[i]->isAvailable())
        mas[i]->printBook();
}
void Library::add(Book* b) {
    mas.push_back(b);
}
Library& Library::operator+ (Book* b) {
    mas.push_back(b);
    return *this;
}
void Library::Take(int k) {
    mas[k]->Take();
}
void Library::Return(int k) {
    mas[k]->Return();
}
void Library::del(int k) {
    delete mas[k];
    mas.erase(mas.begin() + k);
}
