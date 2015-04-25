// Copyright 2015 <SYCH>
#pragma once
#ifndef __LIBRARY_H__
#define __LIBRARY_H__
#include "./Library.h"
#include <vector>
#include <string>
#include "Book.h"
class Library {
    std::string name;
    std::string adress;
    std::vector<Book*> mas;

 public:
    Library();
    Library(std::string n, std::string a);
    Library(const Library& otherLibrary);
    // if ((int choice = getchar() == 'X'))
        Library& operator=(const Library& otherLibrary);
    ~Library();
    void SetName(const std::string& Name);
    void SetAdress(const std::string& Adress);
    std::string  GetName() const;
    std::string  GetAdress() const;
    void printAll();
    void printTaken();
    void printAvailable();
    void add(Book* b);
    Library& operator+ (Book* b);
    void Take(int k);
    void Return(int k);
    void del(int k);
};
#endif
