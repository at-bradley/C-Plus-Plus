//
//  main.cpp
//  PrataListings_4
//
//  Created by Thudium on 9/5/17.
//  Copyright © 2017 Thudium. All rights reserved.
//

#include <iostream>
using namespace std;

//arrayone.cpp

/*
int main() {
     
     int yams[3];
     
     yams[0] = 7;
     yams[1] = 8;
     yams[2] = 6;
     
     int yamcosts[3] = {20, 30, 5};
     
     cout << "Total yams = ";
     cout << yams[0] + yams[1] + yams[2] << endl;
     cout << "The package with " << yams[1] << " yams costs ";
     cout << yamcosts[1] << " cents per yam.\n";
     
     int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
     total = total + yams[2] * yamcosts[2];
     
     cout << "The total yam expense is " << total << " cents.\n";
     cout << "\nSize of yams array = " << sizeof yams;
     cout << " bytes.\n";
     cout << "Size of one element = " << sizeof yams[0];
     cout << " bytes.\n";
     
     return 0;
     }

*/

//strings.cpp

/*
 #include <cstring>
 
 int main() {
 
 const int Size = 15;
 char name1[Size];
 char name2[Size] = "C++owboy";
 
 cout << "Howdy! I'm " << name2;
 cout << "! What's your name?\n";
 
 cin >> name1;
 
 cout << "Well, " << name1 << ", your name has ";
 cout << strlen(name1) << " letters and is stored\n";
 cout << "in an array of " << sizeof(name1) << " bytes.\n";
 cout << "your initial is " << name1[0] << ".\n";
 
 name2 [3] = '\0'; //Set to null character
 
 cout << "Here are the first three characters of your name: ";
 cout << name2 << endl;
 
 return 0;
 }
 */


//instr1.cpp

/*
 int main() {
 
 const int Arsize = 20;
 char name[Arsize];
 char dessert[Arsize];
 
 cout << "Enter your name:\n";
 cin >> name;
 
 cout << "Enter your favorite dessert:\n";
 cin >> dessert;
 
 cout << "I have some delicious " << dessert;
 cout << " for you, " << name << ".\n";
 return 0;
 }
 */

//instr2.cpp

/*
int main() {
    
    const int ArSize = 20;
    char name [ArSize];
    char dessert[ArSize];
    
    cout << "Enter you name: \n";
    cin.getline(name, ArSize);
    
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    
    return 0;
}
*/

//instr3.cpp

/*
int main() {
    
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];
    
    cout << "Enter your name:\n";
    cin.get(name, Arsize).get();
    
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, Arsize).get();
    
    cout << "I have some delicicous " << dessert;
    cout << " for you, " << name << ".\n";
    
    return 0;
}
 */

/*
int main() {
    
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get(); //cin >> year;
    
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    
    return 0;
}
*/

/*
#include <string>

int main() {
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    
    cout << "enter another kind of feline: ";
    cin >> str1;
    
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
    << str1 << " " << str2 << endl;
    
    cout << "The third letter in " << charr2
    << " is " << charr2[2] << endl;
    
    cout << "The third letter in " << str2
    << " is " << str2[2] << endl;
}
 */

/*
#include <string>

int main() {
    
    string s1 = "penguin";
    string s2, s3;
    
    cout << "You can assign one string object to another: s2 = s1\n"; s2 = s1;
    
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    
    s2 = "buzzard";
    
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    
    s3 = s1 + s2;
    
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    
    s1 += s2;
    
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    
    s2 += " for a day";
    
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
    
    return 0;
}
*/

//strtype3.cpp

/*
#include <string>
#include <cstring>

int main() {
    
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    str1 = str2;
    strcpy(charr1, charr2);
    
    str1 += " paste";
    strcat(charr1, " juice");
    
    int len1 = str1.size();
    int len2 = strlen(charr1);
    
    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
}
*/

//strtype4.cpp

/*
#include <string>
#include <cstring>

int main() {
    
    char charr[20];
    string str;
    
    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text:\n"; cin.getline(charr, 20);
    
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n"; getline(cin, str);
    
    cout << "You entered " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;
    
    return 0;
}
*/

//structur.cpp

/*
struct inflatable {
    
    char name[20];
    float volume;
    double price;
};

int main() {
    
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };
    
    inflatable pal = {
        
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    
    return 0;
}
 */

//assgn_st.cpp

/*
struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    
    inflatable bouquet = {
        "sunflowers",
        0.20,
        12.49
    };
    
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    
    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    
    return 0;
}
 */

//random.cpp

/*
struct car {
    
    char name[20];
    int doors;
    double cost;
};

int main() {
    
    car tesla = {
        "Tesla",
        2,
        100000
    };
    
    car winner;
    cout << "Description:\n" << tesla.name << endl;
    cout <<  tesla.doors << " doors\n" << "cost: " << tesla.cost << endl << endl;
    
    winner = tesla;
    cout << "The winner is " << winner.name << ".\n";
}
*/

//arrstruc.cpp

/*
struct inflatable {
    int location;
    char name[20];
    float volume;
    double price;
};

int main() {
    inflatable guests[2] = {
        {0, "Bambi", 0.5, 21.99},
        {1, "Godzilla", 2000, 565.99}
    };
    
    cout << "The guests " << guests[0].name << " and "
    << guests[1].name << "\nhave a combined volume of "
    << guests[0].volume + guests[1].volume << " cubic feet." << endl;
    
    cout << "Guest 1 Array Location: " << guests[0].location << endl;
    cout << "Guest 2 Array Location: " << guests[1].location << endl;
    
    return 0;
}
 */

//address.cpp

/*
int main() {
    
    int donuts = 6;
    double cups;
    
    cout << "Donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    cout << "Cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    
    return 0;
}
 */

//pointer.cpp

/*
int main() {
    
    int updates = 6;
    int *p_updates;
    p_updates = &updates;
    
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    *p_updates += 1;
    cout << "Now updates = " << updates << endl;
    
    return 0;
}
 */

//init_ptr.cpp

/*
int main() {
    
    int higgens = 5;
    int *pt = &higgens;
    
    cout << "Value of higgens = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    
    cout << "Value of *pt = " << *pt
    << "; Value of pt = " << pt << endl;
    
    return 0;
}
*/

//use_new.cpp

/*
int main() {
    
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;
    
    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    
    double * pd = new double;
    *pd = 10000001.0;
    
    cout << "double ";
    cout << "value = " << *pd << ": location  = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    
    return 0;
}
*/

//arraynew.cpp

/*
int main() {
    
    double* p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    
    cout << "p3[1] is " << p3[1] << ".\n";
    
    p3 += 1;
    
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    
    p3 -= 1;
    
    delete [] p3;
    return 0;
}
*/

//addptrs.cpp

/*
int main() {
    
    double wages[3] = {10000.0, 20000.0, 300000.0};
    short stacks[3] = {3, 2, 1};
    
    double* pw = wages;
    short* ps = &stacks[0];
    
    cout << "pw = " << pw << ", *pw "<< endl;
    
    pw += 1;
    
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps += 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    
    cout << "access two elements whith array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) =  " << *(stacks + 1) << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    
    return 0;
}
*/

/*
int main () {
    
    short tell [10];
    short (*ps) [20]; //pointer to array of 20 shorts
    //short* pas [20]; //array of 20 pointers to short
    
    cout << "tell: " << tell << endl;
    cout << "tell + 1: " << tell + 1 << endl;
    cout << "(2 byte block)\n" << endl;
    
    cout << "&tell: " << &tell << endl;
    cout << "&tell + 1: " << &tell + 1 << endl;
    cout << "(14 byte block)\n" << endl;
    
    cout << &ps << endl;
    
    return 0;
}
*/

/*
int main() {
    
    short check_2;
    int check_4;
    long check_8;
    
    cout << sizeof(check_2) << endl;
    cout << sizeof(check_4) << endl;
    cout << sizeof(check_8) << endl;
}
*/

//ptrstr.cpp

/*
#include <cstring>

int main() {
    
    char animal[20] = "bear"; //Intializes the animal array (of 20) to the bear string
    const char* bird = "wren"; //Initializes cahr pointer bird to address of string wren
    char* ps;
    
    cout << animal << " and ";
    cout << bird << "\n";
    
    cout << "Enter a kind of animal: ";
    cin >> animal;
    
    ps = animal;
    
    cout << ps << "!\n";
    cout << "Before using strcopy():\n";
    cout << animal << " at " << (int*) animal << endl; //
    cout << ps << " at " << (int*) ps << endl; //
    
    ps = new char[strlen(animal) + 1];
    
    strcpy(ps, animal);
    cout << "After using strcopy():\n";
    cout << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;
    
    delete [] ps;
    return 0;
}
 */

//newstrct.cpp

/*
struct inflateable {
    char name[20];
    float volume;
    double price;
};

int main() {
    
    inflateable * ps = new inflateable;
    
    cout << "Enter name of inflateable item: ";
    cin.get(ps -> name, 20); //Method 1
    
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume; //Method 2
    
    cout << "Enter price: $";
    cin >> ps -> price;
    
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps -> price << endl;
    
    cout << ps << endl; //1st element
    cout << &ps << endl;
    
    cout << &(*ps).name << endl; //1st element
    cout << &(*ps).volume << endl;
    cout << &(*ps).price << endl;
    
    cout << sizeof(ps) << endl; //1st element
    cout << sizeof(*ps) << endl; //Entire element
    
    delete ps;
    return 0;
}

 */

//delete.cpp

/*
#include <cstring>

char * getname(void);

//

int main() {
    
    char * name;
    
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    
    return 0;
}

char * getname() {
    
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1]; // ?
    strcpy(pn, temp); // ?
    
    return pn;
}

*/

//mixtypes.cpp ?

/*
struct antarctica_years_end {
    
    int year;
};

int main() {
    
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    
    antarctica_years_end * pa = &s02;
    pa -> year = 1999;
    
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio -> year << endl;
    
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1] -> year << endl;
    
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    
    cout << (*ppa) -> year << endl;
    cout << (*(ppb + 1)) -> year << endl;
    
    return 0;
}
*/

//choices.cpp

/*
#include <vector>
#include <array>

int main() {
    
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    
    vector <double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    
    array <double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    
    array <double, 4> a4;
    a4 = a3;
    
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    
    return 0;
}
*/
