#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void swap(vector<int> &array, int i, int &gap){
        int buffer = array[i];
        array[i] = array[i+gap]; 
        array[i+gap] = buffer;
        gap-=2;             
}
int main() {
    system("chcp 1251>nul");     
    vector<int> array;
    array.reserve(20);  
    int buffer;     
    int gap = array.size()-1;      
    for (int i = 0; i < array.size(); i++)  
         array[i] = rand()%10;
    for (int j = 0; j < array.size(); j++){
        if (array[j] % 2 != 0)
            for (int i = j; i < array.size(); i++) 
                 array[i] = array[i+1];                         
    }     
    for (int i = 0; i <= (double)array.size()/2; i++){
        swap (array, i, gap);   
    }   
    system("pause>nul");
    return 0; 
}