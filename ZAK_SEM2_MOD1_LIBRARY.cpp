// Copyright 2015 <SYCH>
// ZAK_SEM2_MOD1_LIBRARY.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "Book.h"
#include "Library.h"
#include "Exceptions.h"
void MenuAddBook(Library &l) {
    std::string  N, A, P;
    int y, p;
    bool t;
	// getchar
    std::cout << "name=";
    std::cin >> N;
    std::cout << "author=";
    std::cin >> A;
    std::cout << "publisher=";
    std::cin >> P;
    std::cout << "year= ";
    std::cin >> y;
    std::cout << "pages=";
    std::cin >> p;
    std::cout << "book is available 0 ,else 1\n";
    std::cin >> t;
    Book *b;
    try {
        b = new Book(N, A, P, y, p, t);
        l.add(b);
    }
    catch (ExceptYear& exception) {
        std::cout << exception.what()<<std::endl;
    }
    catch (ExceptPages& exception) {
        std::cout << exception.what() << std::endl;
    }
    catch (ExceptAuthor& exception) {
        std::cout << exception.what() << std::endl;
    }
    catch (ExceptTitle& exception) {
        std::cout << exception.what() << std::endl;
    }
    catch (ExceptPublisher& exception) {
        std::cout << exception.what() << std::endl;
    }
}
void MenuPrintAll(Library &l) {
    l.printAll();
}
void MenuTakeBook(Library &l) {
    int booknum;
    std::cout << "vvedite nomer knigi " <<std::endl;
    std::cin >> booknum;
    l.Take(booknum);
}
void  MenuPrintTaken(Library &l) {
    l.printTaken();
}
void   MenuReturnBook(Library &l) {
    int booknum;
    std::cout << "vvedite nomer knigi= " << std::endl;
    std::cin >> booknum;
    l.Return(booknum);
}
void MenuAvailableBook(Library &l) {
    l.printAvailable();
}
int _tmain(int argc, _TCHAR* argv[]) {
    Library lib1("libr1", "addr1");
    int choice;
    do {
        system("cls");
        std::cout << "0 - Exit" << std::endl;
        std::cout << "1 - Add new book" << std::endl;
        std::cout << "2 - Print All Books" << std::endl;
        std::cout << "3 - TakeBook" << std::endl;
        std::cout << "4 - PrintTakenBook" << std::endl;
        std::cout << "5 - ReturnBook" << std::endl;
        std::cout << "6 - PrintAvailableBook" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
        case 1: MenuAddBook(lib1); system("pause"); break;
        case 2: MenuPrintAll(lib1); system("pause"); break;
        case 3: MenuTakeBook(lib1); system("pause"); break;
        case 4: MenuPrintTaken(lib1); system("pause"); break;
        case 5: MenuReturnBook(lib1); system("pause"); break;
        case 6: MenuAvailableBook(lib1); system("pause"); break;
			//delete
        }
    } while (choice != 0);
    return 0;
}
