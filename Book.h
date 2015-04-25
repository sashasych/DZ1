// Copyright 2015 <SYCH>
#pragma once
#ifndef __BOOK_H__
#define __BOOK_H__
#include "./Book.h"
#include <string>
#include <vector>
class Book {
    std::string title;
    std::string author;
    std::string publisher;
    int year;
    int pages;
    bool taken;

 public:
    Book();
    Book(const std::string& Title, const std::string& Author,
        const std::string& Publisher, int Year, int Pages, bool Taken);
    Book(const Book& otherBook);
    Book& operator=(const Book& otherBook);
    ~Book();
    void SetTitle(const std::string& Title);
    void SetAuthor(const std::string& Author);
    void SetPublisher(const std::string& Publisher);
    void SetYear(int Year);
    void SetPages(int Pages);
    void SetTaken(bool Taken);
    std::string GetTitle() const;
    std::string GetAuthor() const;
    std::string GetPublisher() const;
    int GetYear() const;
    int GetPages() const;
    bool GetTaken();
    void printBook();
    bool isTaken();
    bool isAvailable();
    void Take();
    void Return();
};
#endif
