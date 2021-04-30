#include "Block.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;


Block::Block() {
}

void Block::addLine(string curr_line) {

    stringstream parse(curr_line);
    float dataPoint;
    vector<float> dataLine;
    
    
    parse >> dataPoint;
    temperature.push_back(dataPoint);

    while (!parse.eof()) {
        parse >> dataPoint;
        dataLine.push_back(dataPoint);
    }
    
    data.insert(make_pair(temperature.back(), dataLine));
    
}

void Block::printBlock() {

    for (size_t i = 0; i < temperature.size(); i++) {
        cout << "Temp: " << temperature[i] << " , ";
        for (size_t j = 0; j < data.at(temperature[i]).size(); j++) {
            cout << "Data" << j << ": "<< data.at(temperature[i]).at(j);
            cout << " ";
        }
        cout << endl;
    }
}

float Block::firstTemp() {
    
    return temperature.front();
}

float Block::lastTemp() {
    
    return temperature.back();
}