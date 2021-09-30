#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void swap(vector<int> &array, int i){
    int buffer = array[i];
    array[i] = array[i+1];
    array[i+1] = buffer; 
    }     
int main() {
    system("chcp 1251>nul");
    vector<int> array;
    array.reserve(20);        
    for (int i = 0; i < array.size(); i++)  
         array[i] = rand()%10;
    for (int j = 0; j = 4; j++){
         for (int i = 0; i < array.size(); i++)        
             if (array[i] % 2 != 0 && array[i+1] % 2 == 0){
                  swap (array, i);    
             }
    }    
    for (int i = 1; i < array.size(); i++)  
         switch (array[i]%2){
              case 0:
              for (int j = 0; j = 4; j++)
                   if (array[i-1] >= array[i]){
                      swap (array, i);    
                   }
              case 1:
              for (int j = 0; j = 4; j++)
                   if (array[i] <= array[i+1]){
                       swap (array, i);    
                       }
         }         
    system("pause>nul");
    return 0; 
}