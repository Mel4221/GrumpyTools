/*
#include <iostream>
#include <string>
#include <vector>
void ParseValuePairs(const char* input, std::vector<std::string>& keys, std::vector<std::string>& values) {
    // Clear previous keys and values
    keys.clear();
    values.clear();

    std::string key, value;
    bool parsingKey = true;
    int quoteCount = 0;

    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] == '=' && quoteCount % 2 == 0) {
            parsingKey = false;
        } else if (input[i] == ';' && quoteCount % 2 == 0) {
            keys.push_back(key);
            values.push_back(value);
            key.clear();
            value.clear();
            parsingKey = true;
        } else {
            if (input[i] == '"') {
                quoteCount++;
            }
            if (parsingKey) {
                key += input[i];
            } else {
                value += input[i];
            }
        }
    }

    if (!key.empty()) {
        keys.push_back(key);
        values.push_back(value);
    }
}


*/

/*
SECOND BACKUP
#include <iostream>
#include <string>
#include <vector>

void parseKeyValuePairs(const char* input, std::vector<std::string>& keys, std::vector<std::string>& values) {
    // Clear previous keys and values
    keys.clear();
    values.clear();

    std::string key, value;
    bool parsingKey = true;
    int quoteCount = 0;

    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] == '=' && quoteCount % 2 == 0) {
            parsingKey = false;
        } else if (input[i] == ';' && quoteCount % 2 == 0) {
            keys.push_back(key);
            values.push_back(value);
            key.clear();
            value.clear();
            parsingKey = true;
        } else {
            if (input[i] == '"') {
                quoteCount++;
            }
            if (parsingKey) {
                key += input[i];
            } else {
                value += input[i];
            }
        }
    }

    if (!key.empty()) {
        keys.push_back(key);
        values.push_back(value);
    }
}

int main() {
    const char input[] = "UserName=\"mel;\";Age=30;Country=\"USA; State=NY\";";

    std::vector<std::string> keys, values;
    parseKeyValuePairs(input, keys, values);

    std::cout << "Parsed key-value pairs:" << std::endl;
    for (size_t i = 0; i < keys.size(); ++i) {
        std::cout << keys[i] << " = " << values[i] << std::endl;
    }

    return 0;
}

*/

/*
  THIRD BACKUP


  for (int i = 0; input[i] != '\0'; ++i) {
    if (input[i] == '=' && quoteCount % 2 == 0) {
        parsingKey = false;
    } else if (input[i] == ';' && quoteCount % 2 == 0) {
        keys.push_back(key);
        values.push_back(value);
        key.clear();
        value.clear();
        parsingKey = true;
    } else {
        if (input[i] == '"' || input[i] == '\'') {
            quoteCount++;
        }
        if (parsingKey) {
            key += input[i];
        } else {
            value += input[i];
        }
    }
}

*/
