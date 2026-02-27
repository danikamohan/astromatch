//
//  main.cpp
//  astromatch
//
//  Created by Danika on 1/30/26.
//

#include <iostream>
#include <string>
using namespace std;

string element(string sign);
int main() {
    string zodiac_one, zodiac_two;
    string findElement1, findElement2;
    
    cout << "------------------------------------------\n"
    << " Welcome to the zodiac compatibility test!\n"
    << " Please enter the first sign: " << flush;
    cin >> zodiac_one;
    cout << " Please enter the second sign: " << flush;
    cin >> zodiac_two;
    
    cout << " You entered " << zodiac_one << " and " << zodiac_two << "."
    << endl;
    
    findElement1 = element(zodiac_one);
    findElement2 = element(zodiac_two);
    
    cout << " Your elements are " << findElement1 << " and " << findElement2 << "." << endl;
    
    return 0;
}

string element(string sign) {
    if (sign == "Aries" || sign == "Leo" || sign == "Sagittarius") {
        return "Fire";
    }
    else if (sign == "Taurus" || sign == "Virgo" || sign == "Capricorn") {
        return "Earth";
    }
    else if (sign == "Gemini" || sign == "Libra" || sign == "Aquarius") {
        return "Air";
    }
    else if (sign == "Cancer" || sign == "Scorpio" || sign == "Pisces") {
        return "Water";
    }
    else {
        return "Unknown";
    }
}

string findMatch(string element1, string element2) {
    if (element1 == element2) {
        return "Wow! Great Match! Same energy!";
    }
    else if ((element1 == "Fire" && element2 == "Air") || (element1 == "Air" && element2 == "Fire")) {
        return "Good match! You bring out the best in eachother!";
    }
    else if ((element1 == "Water" && element2 == "Earth") || (element1 == "Earth" && element2 == "Water")) {
        return "Good match! You are grounding and nurturing with eachother!";
}
