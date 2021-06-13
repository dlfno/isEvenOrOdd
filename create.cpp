#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open file
  ofstream MyFile("isOdd.js");

  // Write to the file
  MyFile << "function issEven(number){\n"
            "    switch(number){\n";

  for (int i=0; i <= 5000; i++) {
    MyFile << "        case " + std::to_string(i) + ":\n";
    if (!(i % 2)) {
        MyFile << "            return false;\n";
    } else {
        MyFile << "            return true;\n";
    }
    // MyFile << "            break;\n";
  }

  MyFile << "           default:\n"
            "             return \"Tired. Figure it out on your own.\"\n"
            // "             break;\n"
            "  }\n"
            "}\n"
  "module.exports.isOdd = isOdd;\n";

  // Close the file
  MyFile.close();
}
