#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Stack {
    string S;
};

int main(int argc , char *argv[]){
    vector<Stack> stack;
    ifstream file;
    string line;
    int n , count = 0 , i = 0;

    file.open(argv[1]);

    while (getline(file , line)){
        stack.push_back({line});
        i++;
        n=i;
    }

    file.close();

    for(int i=n-1;i>=0;i--){
        if (count == 10){
            break;
        }
        else{
            cout << stack[i].S << endl;
            count++;
        }
    }
    return 0;
}
