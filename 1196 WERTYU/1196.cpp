#include <iostream>
#include <stdio.h>
#include <map>
#include <string>

using namespace std;

int main() {

    std::map< char,char> myMap;
    myMap ['1'] = '`';
    myMap ['2'] = '1';
    myMap ['3'] = '2';
    myMap ['4'] = '3';
    myMap ['5'] = '4';
    myMap ['6'] = '5';
    myMap ['7'] = '6';
    myMap ['8'] = '7';
    myMap ['9'] = '8';
    myMap ['0'] = '9';
    myMap ['-'] = '0';
    myMap ['='] = '-';
    myMap ['W'] = 'Q';
    myMap ['E'] = 'W';
    myMap ['R'] = 'E';
    myMap ['T'] = 'R';
    myMap ['Y'] = 'T';
    myMap ['U'] = 'Y';
    myMap ['I'] = 'U';
    myMap ['O'] = 'I';
    myMap ['P'] = 'O';
    myMap ['['] = 'P';
    myMap [']'] = '[';
    myMap ['\\'] = ']';
    myMap ['S'] = 'A';
    myMap ['D'] = 'S';
    myMap ['F'] = 'D';
    myMap ['G'] = 'F';
    myMap ['H'] = 'G';
    myMap ['J'] = 'H';
    myMap ['K'] = 'J';
    myMap ['L'] = 'K';
    myMap [';'] = 'L';
    myMap ['\''] = ';';
    myMap ['X'] = 'Z';
    myMap ['C'] = 'X';
    myMap ['V'] = 'C';
    myMap ['B'] = 'V';
    myMap ['N'] = 'B';
    myMap ['M'] = 'N';
    myMap [','] = 'M';
    myMap ['.'] = ',';
    myMap ['/'] = '.';
    myMap [' '] = ' ';
    myMap ['\n'] = '\n';

    /** **/
    string s;
    while (getline(cin, s)) {
	for(string::iterator it = s.begin(); it!=s.end();it++){
        	printf("%c", myMap[*it]);
    		}
	cout << endl;
	}

}
