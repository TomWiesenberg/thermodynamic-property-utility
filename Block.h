
#ifndef _BLOCK_H_
#define _BLOCK_H_
 
#include <vector>
#include <string>
#include <unordered_map>
 
using namespace std;

class Block {
    
public:
    
    Block();
    
    void addLine(string curr_line);
    
    void printBlock();

    float firstTemp();
    
    float lastTemp();
    
    
    
private:
    
    unordered_map<float, vector<float>> data;

    vector<float> temperature;
};


#endif