#include <iostream>
#include <string>
#include <stack>
#include "Worker.h"
#include "Product.h"
using namespace std;

char anotherTransaction() {
    char another;
    cout << "Do you need another transaction? Enter y for yes\n";
    cin >> another;
    return another;
}

int main()
{
    FixedWorker fixedWorker;
    UnfixedWorker unfixedWorker;
    Magazines magazines;
    ShortStories shortStories;
    IslamicBooks islamicBooks;
    MedicalBooks medicalBooks;
    EngineeringBooks engineeringBooks;

    int sell_or_rent, product_type, book_type;
    string fullName, first, middle, last;
    char c, another;
    bool wrongName;
    cout << "Welcome to our Bookstore System!\n\n";
    do {
        cout << "Please choose suitable number from below: \n  1- Fixed employee. \n  2- Unfixed employee. \n";
        cin >> c;
        switch (c) {
        case '1':
            // The fixed option
            cout << "Fixed Employee\n";
            do {
                cout << "Enter your full name: ";
                cin >> first >> middle >> last;
                fullName = first + " " + middle + " " + last;
                if (fixedWorker.checkName(fullName)) {
                    wrongName = false;
                    do {
                        cout << "Enter 1 if you want to Sell or 2 if you want to Rent:\n";
                        cin >> sell_or_rent;
                        // sell option
                        if (sell_or_rent == 1) {
                            do {
                                cout << "Enter the number of the product:\n  1- Books\n  2- Short stories\n  3- Magazines\n";
                                cin >> product_type;
                                // Book
                                if (product_type == 1) {
                                    do {
                                        cout << "write the number of the type of book:\n  1- Islamic book\n  2- Engineering book\n  3- Medical book\n";
                                        cin >> book_type;
                                        // Islamic books
                                        if (book_type == 1) {
                                            islamicBooks.checkStock(sell_or_rent);
                                            another = anotherTransaction();
                                        }
                                        // Engineering books
                                        else if (book_type == 2) {
                                            engineeringBooks.checkStock(sell_or_rent);
                                            another = anotherTransaction();
                                        }
                                        // Medical books
                                        else if (book_type == 3) {
                                            medicalBooks.checkStock(sell_or_rent);
                                            another = anotherTransaction();
                                        }
                                        else {
                                            cout << "Sorry wrong choice!!";
                                        }
                                    } while (book_type != 1 && book_type != 2 && book_type != 3);
                                }
                                // Short stories
                                else if (product_type == 2) {
                                    shortStories.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                // Magazine
                                else if (product_type == 3) {
                                    magazines.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                else {
                                    cout << "Sorry wrong choice!!";
                                }
                            } while ((product_type != 1 && product_type != 2 && product_type != 3) || (another == 'y' || another == 'Y'));
                        }
                        // Borrow option
                        else if (sell_or_rent == 2) {
                            do {
                                cout << "write the number of the product:\n  1- Books\n  2- Short stories\n  3- Magazines\n";
                                cin >> product_type;
                                // Book
                                if (product_type == 1) {
                                    do {
                                        cout << "write the number of the type of book:\n  1- Islamic book\n  2- Engineering book\n  3- Medical book\n";
                                        cin >> book_type;
                                        // Islamic books
                                        if (book_type == 1) {
                                            islamicBooks.checkStock(sell_or_rent);
                                            another = anotherTransaction();
                                        }
                                        // Engineering books
                                        else if (book_type == 2) {
                                            engineeringBooks.checkStock(sell_or_rent);
                                            another = anotherTransaction();
                                        }

                                        // Medical books
                                        else if (book_type == 3) {
                                            medicalBooks.checkStock(sell_or_rent);
                                            another = anotherTransaction();
                                        }
                                        else {
                                            cout << "Sorry wrong choice!!";
                                        }
                                    } while (book_type != 1 && book_type != 2 && book_type != 3);
                                }
                                // Short stories
                                else if (product_type == 2) {
                                    shortStories.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                // Magazine
                                else if (product_type == 3) {
                                    magazines.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                else {
                                    cout << "Sorry wrong choice!!";
                                }

                            } while ((product_type != 1 && product_type != 2 && product_type != 3) || (another == 'y' || another == 'Y'));
                        }
                        else {
                            cout << "Sorry wrong choice!!";
                        }
                    } while (sell_or_rent != 1 && sell_or_rent != 2);
                }
                else {
                    cout << "Wrong Entry! This name doesn't exist.\n";
                    wrongName = true;
                }
            } while (wrongName);
            break;
        case '2':
            // The unfixed option
            cout << "Unfixed\n";
            sell_or_rent = 2;
            do {
                cout << "Enter your full name: ";
                cin >> first >> middle >> last;
                fullName = first + " " + middle + " " + last;
                if (unfixedWorker.checkName(fullName)) {
                    wrongName = false;
                    do {
                        cout << "Enter the number of the product:\n  1- Books\n  2- Short stories\n  3- Magazines\n";
                        cin >> product_type;
                        // Book
                        if (product_type == 1) {
                            do {
                                cout << "Enter the number for type of the book:\n  1- Islamic book\n  2- Engineering book\n  3- Medical book\n";
                                cin >> book_type;
                                // Islamic books
                                if (book_type == 1) {
                                    islamicBooks.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                // Engineering books
                                else if (book_type == 2) {
                                    engineeringBooks.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                // Medical books
                                else if (book_type == 3) {
                                    medicalBooks.checkStock(sell_or_rent);
                                    another = anotherTransaction();
                                }
                                else {
                                    cout << "Sorry wrong choice!!";
                                }
                            } while (book_type != 1 && book_type != 2 && book_type != 3);
                        }
                        // Short stories
                        else if (product_type == 2) {
                            shortStories.checkStock(sell_or_rent);
                            another = anotherTransaction();
                        }
                        // Magazine
                        else if (product_type == 3) {
                            magazines.checkStock(sell_or_rent);
                            another = anotherTransaction();
                        }
                        else {
                            cout << "Sorry wrong choice!!";
                        }
                    } while ((product_type != 1 && product_type != 2 && product_type != 3) || (another == 'y' || another == 'Y'));
                }
                else {
                    cout << "Wrong Entry! This name doesn't exist.\n";
                    wrongName = true;
                }
            } while (wrongName);
            break;
        default:
            cout << "please enter the right case!";
        }
    } while (c != '1' && c != '2');
    return 0;
}