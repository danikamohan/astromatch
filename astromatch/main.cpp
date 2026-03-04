//
//  astromatch.cpp
//  AstroMatch
//
//  Created by Danika on 1/30/26.
//  Welcome to AstroMatch, where you find out if you are astrologically compatible with your partner!
//

#include <iostream>
#include <string>
using namespace std;

string element(string sign); // function used to find out what element your sign is!
string findMatch(string element1, string element2); // used to determine your true match!
// main function that gets two signs from user, shows them their sign element, and shows them
// compatibilty result!
int main() {
    string zodiac_one, zodiac_two;
    string findElement1, findElement2;
    string result;
    
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
    
    if (findElement1 == "Unknown" || findElement2 == "Unknown") {
        cout << " Invalid sign entered. Please try again." << endl;
        return 0;
    }
    cout << " Your elements are " << findElement1 << " and " << findElement2 << "." << endl;
    
    result = findMatch(findElement1, findElement2);
    
    cout << " Compatibility result = " << result << endl;
    
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
        return "Wow! Strong match! Same energy!";
    }
    else if ((element1 == "Fire" && element2 == "Air") || (element1 == "Air" && element2 == "Fire")) {
        return "Good match! You bring out the best in eachother!";
    }
    else if ((element1 == "Water" && element2 == "Earth") || (element1 == "Earth" && element2 == "Water")) {
        return "Good match! You are grounding and nurturing with eachother!";
    }
    else if ((element1 == "Fire" && element2 == "Water") || (element1 == "Water" && element2 == "Fire")) {
        return "Hmm tricky match! you both are opposites that can clash.";
    }
    else {
        return "Neutral match, your relationship might take some effort!";
    }
}
