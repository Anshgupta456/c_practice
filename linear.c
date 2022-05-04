#include <stdio.h>
int linearSearch(int arr[], int size, int number)
{
    for (int i = 0; i < size-1; i++){
        if (arr[i] == number){
            return i;
        }
    }
    return ("Not found");
}

int main(){
    int arr[] = {2,6,87,99,18,15,4,9,16,55,449,415,124,19,54,26,48,49,4564,12,31};
    int size = sizeof(arr)/sizeof(int);
    int number = 449;
    int searchIndex = linearSearch(arr, size, number);
    printf("Number = %d, Poition at index = %d", number, searchIndex);
    return 0; 
}

