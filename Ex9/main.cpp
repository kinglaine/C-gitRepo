#include <iostream> //std::cout
#include <fstream> //std::ifstream
#include <vector> //vector
#include <string> // for string class
#include <sstream> // for istringstream
using namespace std;

vector<string> split(string text, char delim) {
    string line;
    vector<string> vec;
    stringstream ss(text);
    while(getline(ss, line, delim)) {
        vec.push_back(line);
    }
    return vec;
}

int simpleAverage(vector<vector<string>> vec){
    int sum = 0;
    for(int i = 1; i < vec.size(); i++){
        int value = stoi(vec[i][1]);
        sum += value;
    }
    return sum/9;
}
int movingAverage(vector<vector<string>> vec, int months){
    int sum = 0;
    for(int i = 1; i <= months; i++){
        int value = stoi(vec[i][1]);
        sum += value;
    }
    return sum/months;
}
int weightMovingAverage(vector<vector<string>> vec){
    int result = 0;
    int weight = 0;
    for(int i = 1; i <= 3; i++){
        int value = stoi(vec[i][1]) * i;
        result += value;
        weight += i;
    }
    return result/weight;
}

int main(){
    vector<vector<string>> vec;
    fstream file;
    file.open("weather.txt");
    string line;
    while(getline(file, line)){
        vec.push_back(split(line,','));
    }
    /*calculate simple average
    for(auto i : vec){
        for(auto j : i)
            cout << j <<" ";
        cout << "\n";
    }*/

    fstream outfile;
    outfile.open("newFile.txt");
    for(int i = 0; i <=7; i++){
        int value = weightMovingAverage(vec);
        outfile << value << endl;
    }
    
    return 0;
}