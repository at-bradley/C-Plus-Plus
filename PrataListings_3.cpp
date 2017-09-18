//
//  main.cpp
//  PrataListings_3
//
//  Created by Thudium on 8/27/17.
//  Copyright © 2017 Thudium. All rights reserved.
//


#include <iostream>
using namespace std;


/*
int main() {
    
    int x = 1;
    //x++;
    //++x;
    
    cout << x <<endl;
}
*/

/*
int main() {
    
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;
    
    return 0;
}
*/

/*
int main() {
    
    int carrots;
    carrots = 25;
    
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    
    carrots = carrots - 1;
    
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}
*/

/*
int main() {
    
    int carrots;
    
    cout <<  "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    
    carrots = carrots + 2;
    
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}
*/

/*

#include <cmath>
 
int main() {
    
    double area;
    
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    
    double side;
    
    //double side = sqrt(area);

    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    
    return 0;
}
*/

/*
void simon(int); //Prototype

int main() {
    
    simon(3);
    cout << "Pick an integer: ";
    
    int count;
    
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n) {
    cout << "Simon says touch your toes " << n << " times." << endl;
}
*/

/*
int stonetolb(int);

int main() {
    
    int stone;
    
    cout << "Enter the weight in stone: ";
    cin >> stone;
    
    int pounds =  stonetolb(stone);
    
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    
    return 0;
}

int stonetolb(int sts) {
    
    return 14 * sts;
}
*/

/*
void simon(int);

int main() {
    
    simon(3);
    cout << "Pick an integer: ";
    
    int count;
    
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n) {
    cout << "Simon says touch your toes " << n << " times." << endl;
}
*/

/*
#include <climits>

int main() {
    
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    //long long n_llong = LLONG_MAX;
    
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    //cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;
    
    cout << "Maximum values:" << endl;
    cout << "int:   " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long:  " << n_long << endl;
    //cout << "llong: " << n_llong << endl << endl;
    
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Maximum int value = " << INT_MAX << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    
    return 0;
}
*/

//exceed.cpp

/*
#define ZERO 0
#include <climits>

int main() {
    
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Add $1 to each account." << endl << "Now ";
    
    sam  = sam + 1;
    sue = sue + 1;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    
    sam = ZERO;
    sue = ZERO;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Take $1 from each account. " << endl << "Now ";
    
    sam = sam - 1;
    sue = sue - 1;
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    
    return 0;
}
 
*/

//hexoct1.cpp

/*
int main() {
    
    int chest (42);
    int waist (0x42);
    int inseam (042);
    
    cout << "Mosieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    
    return 0;
}
*/

//hexoct2.cpp

/*
int main (){
    
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    
    return 0;
}
*/

//chartype.cpp

/*
int main() {
    
    char ch;
    
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    
    return  0;
}
*/

//morechar.cpp

/*
int main() {
    
    char ch = 'M';
    int i = ch;
    
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;
    
    ch = ch + 1;
    i = ch;
    
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    
    cout.put('!') << endl;
    
    return 0;
}
*/

//bondini.cpp

/*
int main() {
    
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter you agent code: \b\b\b\b\b\b";
    
    long code;
    
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    
    return 0;
}
*/

//modulus.cpp

/*
int main() {
    
    const int Lbs_per_stn = 14;
    int lbs;
    
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    
    cout << lbs << " pounds are " << stone << " stone, " << pounds << "pound(s).\n";
    
    return 0;
}
*/
