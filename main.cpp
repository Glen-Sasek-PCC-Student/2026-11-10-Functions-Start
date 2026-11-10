#include <iostream>


using namespace std;


// Function definitions
void goodbye();
void clean_value(string copy_of_s);
void clean_reference(string &reference_to_s);

int main() {
    cout << "Hello" << endl;
    
    // Function call does not include return type 
    // not "void goodbye();" just "goodbye();"
    goodbye();

    string line = "qtoon!@  ubdwezjoo !!!!!@@    hg    q";
    cout << "line before clean_value(line): " << line << endl;
    // Function call
    clean_value(line);
    cout << "line after clean_value(line): " << line << endl;

    clean_reference(line);
    cout << "line after clean_reference(line): " << line << endl;

    return 0;
}

// Function implementations
void goodbye() {
    cout << "GOODBYE" << endl;
}

void clean_value(string copy_of_s) {
    clean_reference(copy_of_s);
    cout << "clean_value: " << copy_of_s << endl; 
}

void clean_reference(string &reference_to_s) {
    for(int i = 0; i < reference_to_s.size();) {
        switch(reference_to_s[i]) {
            case '"': // FALLTHROUGH
            case '\'':
            case '!':
            case '@':
            case ' ':
                // Remove
                reference_to_s.erase(i,1);
                break;
            default:
                // only increment index if not erasing.
                i++;
        }
    }
    cout << "clean_rerference: " << reference_to_s << endl; 
}
