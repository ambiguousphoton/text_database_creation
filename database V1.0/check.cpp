#include <iostream>
#include <fstream>
#include <string>

using  namespace std;
int main(){
    ofstream myfile;
    myfile.open("data.txt");
    myfile<<"narayan narayan narayan narayan \n";
    myfile.close();
    return 0;

}