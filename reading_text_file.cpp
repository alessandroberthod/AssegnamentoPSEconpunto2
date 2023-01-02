#include <iostream>
#include <fstream>
#include <vector>
#include "Coordinate.h"
using std::vector;


vector<Coordinate> read_from_file(const std::string& filename) {

    vector<Coordinate> coords_from_text;

    // std::ifstream encapsulates the functionality of an 
    // input file stream as a class, is created by
    // providing a filename as its constructor argument
    std::ifstream infile{filename};

    while (!infile.eof()) {
        double x, y;
        infile >> x >> y;
        if (infile.eof() || infile.fail() || infile.bad()) {
            std::cerr << "Error in input or eof  \n";
            break;
        }
        std::cout << x << " " << y << "\n";
        coords_from_text.push_back({x,y});
        
    }

}

int main() {
    std::string filename{"sample_coordinates.txt"};

    read_from_file(filename);

    return 0;
}