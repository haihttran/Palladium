#include <iostream>
#include <cctype>

// void capitalize(char arr[], int size);

// void decapitalize(char arr[], int size);

// void cap_each_word(char arr[], int size);

// void decap_each_word(char arr[], int size);

// void flip_char(char arr[], int size);

// int main(){
//     char array[] = "Anne talks to Marry.";
//     int size = sizeof(array)/sizeof(array[0]);
//     void (*c_ptr)(char*, int) = &capitalize;
//     void (*d_ptr)(char*, int) = &decapitalize;
//     void (*cew_ptr)(char*, int) = &cap_each_word;
//     void (*dew_ptr)(char*, int) = &decap_each_word;
//     void (*fc_ptr)(char*, int) = &flip_char;

//     std::cout<<"Original string: "<< array << std::endl;
//     (c_ptr)(array, size);
//     std::cout<<"Capitalized string: "<< array << std::endl;
//     (d_ptr)(array, size);
//     std::cout<<"Decapitalized string: "<< array << std::endl;
//     (cew_ptr)(array, size);
//     std::cout<<"String with each word capitalized: "<< array << std::endl;
//     (dew_ptr)(array, size);
//     std::cout<<"String with each word decapitalized: "<< array << std::endl;
//     (fc_ptr)(array, size);
//     std::cout<<"String with each word's case flipped: "<< array << std::endl;
// }

void capitalize(char arr[], int size){
    for(int i=0;i<size;i++)
        arr[i] = toupper(arr[i]);
}

void decapitalize(char arr[], int size){
    for(int i=0;i<size;i++)
        arr[i] = tolower(arr[i]);
}

void cap_each_word(char arr[], int size){
    int capitalized = 0;
    arr[0] = toupper(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i] == ' '){            
            arr[i+1] = toupper(arr[i+1]);        
            capitalized = i+1;
        }
        else if (i == capitalized)
            continue;
        else
            arr[i] = tolower(arr[i]);
    }
}

void decap_each_word(char arr[], int size){
    int decapitalized = 0;
    arr[0] = tolower(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i] == ' '){            
            arr[i+1] = tolower(arr[i+1]);        
            decapitalized = i+1;
        }
        else if (i == decapitalized)
            continue;
        else
            arr[i] = toupper(arr[i]);
    }
}

void flip_char(char arr[], int size){
    for(int i=0;i<size;i++){
        if(isupper(arr[i]))
            arr[i] = tolower(arr[i]);                        
        else
            arr[i] = toupper(arr[i]);
    }
}

