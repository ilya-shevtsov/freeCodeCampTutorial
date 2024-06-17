//
// Created by dayzi on 17.06.2024.
//

#include "randomFunctions.h"
#include <iostream>

using namespace std;

// Class - a bluepring of a data type, a spesification
// Object - an actual instance of a class


class Student {
public:
    string name;
    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors() {
        if (gpa >= 3.5) {
            return true;
        }
        return false;
    }
};

class BookWithConstructors {
public:
    string title;
    string author;
    int pages{};

    BookWithConstructors() {
        title = "no title";
        author = "no author";
        pages = 0;
    }

    BookWithConstructors(string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

BookWithConstructors myBook(
    "99 Bottles of OOP",
    "Sandi Metz, Katrina Owen & TJ Stankus",
    300
);

class Book {
public:
    string title;
    string author;
    int pages{};
};

void nameMyBook() {
    Book myBook;
    myBook.title = "99 Bottles of OOP";
    myBook.author = "Sandi Metz, Katrina Owen & TJ Stankus";
    myBook.pages = 300;

    cout << myBook.pages;
}


void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << " years old";
}

double cude(double number) {
    return number * number * number;
}

int getMaxTwo(int num1, int num2) {
    int result{};
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int getMaxThree(int num1, int num2, int num3) {
    int result{};
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int simple2digitCalculator() {
    int num1, num2;
    char op;
    int result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else {
        cout << "Not supported operator";
    }

    cout << "The result is: " << result;
    return result;
}

string getDayOfWeek(int dayNum) {
    string dayName;

    switch (dayNum) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday ";
            break;
        default:
            dayName = "Invalid Day Number";
    }

    return dayName;
}

int SimplegGuessGame() {
    int secretNum = 7;
    int guess;

    while (secretNum != guess) {
        cout << "Enter guess: ";
        cin >> guess;
    }

    cout << "You Win!";
    return 0;
}

int GuessGame(int secretNum, int guessCount, int guessLimit) {
    int guess;
    bool outOfGuesses = false;
    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses) {
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }

    return 0;
}

int power(int baseNum, int powNum) {
    int result = 1;
    for (int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}

void nestedForLoops() {
    int numberGrid[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
}

void pointers() {
    // memeory adress is called a pointer
    int age = 19;
    int *pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;
    cout << *pAge;

    cout << "Age: " << *pAge << endl; // dreferencing
    cout << "Gpa: " << *pGpa << endl;
    cout << "Name: " << *pName << endl;
}
