// Copyright 2015 <SYCH>
#include "stdafx.h"
#include  "Book.h"
#include "Exceptions.h"
#include <string>
Book::Book() {
    title = "";
    author = "";
    publisher = "";
    int year = 0;
    int pages = 0;
    bool taken = 0;
}
Book::Book(const std::string& Title, const std::string& Author,
    const std::string& Publisher, int Year, int Pages, bool Taken) {
    if (Year < 1)
        throw ExceptYear();
    if (Pages < 1)
        throw ExceptPages();
    if (&Title == NULL)
        throw ExceptTitle();
    if (Author == "")
        throw ExceptAuthor();
    if (Publisher == "")
        throw ExceptPublisher();
    // getline(std::cin,Title);
    title = Title;
    author = Author;
    publisher = Publisher;
    year = Year;
    pages = Pages;
    taken = Taken;
}
Book::Book(const Book& otherBook) {
    if (&otherBook == NULL)
        throw std::exception("otherBook is NULL");
    title = otherBook.title;
    author = otherBook.author;
    publisher = otherBook.publisher;
    year = otherBook.year;
    pages = otherBook.pages;
    taken = otherBook.taken;
}
// if ((int choice = getchar() == 'X'))
Book& Book::operator=(const Book& otherBook) {
    if (&otherBook == NULL)
        throw std::exception("otherBook is NULL");
    if (&otherBook == this)
        return *this;
    title = otherBook.title;
    author = otherBook.author;
    publisher = otherBook.publisher;
    year = otherBook.year;
    pages = otherBook.pages;
    taken = otherBook.taken;
}
Book::~Book() {
}
void Book::SetTitle(const std::string& Title) {
    if (Title == "")
        throw std::exception();
    title = Title;
}
void Book::SetAuthor(const std::string& Author) {
    if (Author == "")
        throw std::exception("Author  is undefined");
    author = Author;
}
void Book::SetPublisher(const std::string& Publisher) {
    if (Publisher == "")
        throw std::exception("Publisher  is undefined");
    publisher = Publisher;
}
void Book::SetYear(int Year) {
    if (Year < 1)
        throw std::exception("year is invalid");
    year = Year;
}
void Book::SetPages(int Pages) {
    if (Pages < 1)
        throw std::exception("pages are invalid");
    pages = Pages;
}
void Book::SetTaken(bool Taken) {
    taken = Taken;
}
std::string Book::GetTitle() const {
    return title;
}
std::string Book::GetAuthor() const {
    return author;
}
std::string Book::GetPublisher() const {
    return publisher;
}
int Book::GetYear() const {
    return year;
}
int Book::GetPages() const {
    return pages;
}
bool Book::GetTaken() {
    return taken;
}
void Book::printBook() {
std::cout << "\ntitle:" << title << "\nauthor:" << author << "\npublisher:"
<< publisher << "\n god:" << year << "\npages:" << pages;
}
bool Book::isTaken() {
    return taken;
}
bool Book::isAvailable() {
    return !taken;
}
void Book::Take() {
    taken = 1;
}
void Book::Return() {
    taken = 0;
}
// getline()
