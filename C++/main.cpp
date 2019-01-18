#include "stringcase.h"
#include "arrayutilities.h"
#include <iostream>
// void capitalize(char arr[], int size);

// void decapitalize(char arr[], int size);

// void cap_each_word(char arr[], int size);

// void decap_each_word(char arr[], int size);

// void flip_char(char arr[], int size);

int main(){
    char array[] = "Anne talks to Marry.";
    int size = sizeof(array)/sizeof(array[0]);
    void (*c_ptr)(char*, int) = &capitalize;
    void (*d_ptr)(char*, int) = &decapitalize;
    void (*cew_ptr)(char*, int) = &cap_each_word;
    void (*dew_ptr)(char*, int) = &decap_each_word;
    void (*fc_ptr)(char*, int) = &flip_char;

    std::cout<<"Original string: "<< array << std::endl;
    (c_ptr)(array, size);
    std::cout<<"Capitalized string: "<< array << std::endl;
    (d_ptr)(array, size);
    std::cout<<"Decapitalized string: "<< array << std::endl;
    (cew_ptr)(array, size);
    std::cout<<"String with each word capitalized: "<< array << std::endl;
    (dew_ptr)(array, size);
    std::cout<<"String with each word decapitalized: "<< array << std::endl;
    (fc_ptr)(array, size);
    std::cout<<"String with each word's case flipped: "<< array << std::endl;

    int arr[] = {63, 85, 76, 19, 11, 28, 77, 10};
    int num = 9;
    int (*sum_ptr)(int*, int) = &sum;
    int (*fac_ptr)(int) = &factorial;
    void (*rv_ptr)(int*, int) = &reverse;
    void (*ms_ptr)(int*, int, int) = &mergeSort;
    // int sum = (sum_ptr)(array);
    // int fac = (fac_ptr)(num);
    std::cout<<"Sum of the array is: "<< (sum_ptr)(arr, sizeof(arr)/sizeof(arr[0])) <<std::endl;
    std::cout<<"Factorial of the given number is: "<< (fac_ptr)(num) <<std::endl;
    (rv_ptr)(arr,sizeof(arr)/sizeof(arr[0]));
    print_array(arr,sizeof(arr)/sizeof(arr[0]));
    (ms_ptr)(arr,0,(sizeof(arr)/sizeof(arr[0]))-1);
    print_array(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}