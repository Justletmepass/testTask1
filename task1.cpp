#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std; 
void swap(vector<int> &array, int j){
    int buffer = array[j];
    array[j] = array[j+1];
    array[j+1] = buffer;      
}
int main() {
    system("chcp 1251>nul"); 
    vector<int> array;
    array.reserve(20);
    for (int i = 0; i < array.size(); i++){
        array.at(i) = rand()%10;
    }     
    for ( int i = 0; i = 4; i++)
        for (int j = 0; j < array.size(); j++){          
             if (array[j] % 2 == 0){
                  int num = j - 1;
                  array.erase(array.begin() + num);
             }                
             if (array[j] >= array[j+1])
              swap (array, j);       
         }        
    system("pause>nul");
    return 0; 
}