#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct State {
    unsigned int id;
    bool isAccepting;
    unsigned int numTransitions;
    vector<pair<char, unsigned int>> transitions;
};

class DFA {
public:
    unsigned int numStates;
    unsigned int startState;
    vector<State> states;

    void readDFA(const string& fileName) {
        ifstream input(fileName);

        if (!input) {
            cerr << "Error al abrir el archivo: " << fileName << endl;
            exit(1);
        }

        input >> numStates;
        input >> startState;

        states.resize(numStates);

        for (unsigned int i = 0; i < numStates; ++i) {
            State& currentState = states[i];
            currentState.id = i;
            input >> currentState.isAccepting;
            input >> currentState.numTransitions;

            currentState.transitions.resize(currentState.numTransitions);
            for (unsigned int j = 0; j < currentState.numTransitions; ++j) {
                input >> currentState.transitions[j].first;  
                input >> currentState.transitions[j].second; 
            }
        }
    }

    void printDFA() const {
        cout << "Número total de estados: " << numStates << endl;
        cout << "Estado de arranque: " << startState << endl;

        for (const State& s : states) {
            cout << "Estado " << s.id << ": ";
            cout << (s.isAccepting ? "Aceptación" : "No aceptación") << endl;
            cout << "Número de transiciones: " << s.numTransitions << endl;

            for (const auto& transition : s.transitions) {
                cout << "  Símbolo: " << transition.first << ", Estado destino: " << transition.second << endl;
            }

            cout << endl;
        }
    }
};

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << endl;
        return 1;
    }

    string fileName = argv[1];

    DFA dfa;
    dfa.readDFA(fileName);
    dfa.printDFA();

    return 0;
}

