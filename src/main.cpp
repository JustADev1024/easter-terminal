#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

json data;

std::string input;

void readFile() {
    std::ifstream file("./data/en.json");
    if (!file.is_open()) {
        std::cout << "Could not open data/en.json!";
    }
    else {
        file >> data;
    }
}

void help() {
    for(const auto& key: data.items()) {
        std::cout << "  " << key.key() << "\n";
    }
}

int main() {
    readFile();
    std::cout << data["greeting"] << "\n";
    while(true) {
        std::cout << "> ";
        std::getline(std::cin, input);
        if(input == "exit") {
            std::cout << data["exit"].get<std::string>() << "\n";
            break;
        }
        else if (input == "help") {
            help();
        }
        else if (data.contains(input)) {
            std::cout << data[input].get<std::string>() << "\n";
        }
        else if (!data.contains(input)) {
            std::cout << data["IDK"].get<std::string>() << "\n";
        }
    }
    return 0;
}
