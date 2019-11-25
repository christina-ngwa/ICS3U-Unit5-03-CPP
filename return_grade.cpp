// Copyright (c) Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program uses return values
// Reference: http://www.cplusplus.com/reference/map/map/find/
//            http://www.cplusplus.com/reference/map/map/at/

#include <iostream>
#include <string>
#include <map>
using namespace std;


std::string ConvertGrade(std::string grade) {
    std::map<std::string, std::string>::iterator it;

    map<string, string> ontarioRubric;
    // list of level of percentages based on the ontario rubric
    ontarioRubric["R-"] = "0%";
    ontarioRubric["R"] = "30%";
    ontarioRubric["R+"] = "40%";
    ontarioRubric["1-"] = "50%";
    ontarioRubric["1"] = "53%";
    ontarioRubric["1+"] = "57%";
    ontarioRubric["2-"] = "60%";
    ontarioRubric["2"] = "63%";
    ontarioRubric["2+"] = "67%";
    ontarioRubric["3-"] = "70%";
    ontarioRubric["3"] = "73%";
    ontarioRubric["3+"] = "77%";
    ontarioRubric["4-"] = "80%";
    ontarioRubric["4"] = "87%";
    ontarioRubric["4+"] = "95%";

    // converts levels to percentages
    it = ontarioRubric.find(grade);
    if (it != ontarioRubric.end()) {
        return ontarioRubric.at(grade);
    } else {
        return "-1"; }
}


main() {
    // variables
    std::string percentage;
    std::string grade;

    // input
    std::cout << "Welcome to the Ontario Rubric calculator." << std::endl;
    std::cout << "If you received '-1', please try again." <<std::endl;
    std::cout << std::endl;
    std::cout << "Enter your mark (ex. R+ or 4+): ";
    std::cin >> grade;
    std::cout << std::endl;

    // call function
    percentage = ConvertGrade(grade);

    // output
    if (percentage == "-1") {
        std::cout << "-1" <<std::endl;
    } else {
        std::cout << "You are at a " << percentage << "." << std::endl; }
}
