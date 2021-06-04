#include <iostream> 
using namespace std; 
  
char *removeSpaces(char *str) 
{ 
    int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
           str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 
  
// Driver program to test above function 
int main() 
{ 
    char str1[] = "gee    k   "; 
    cout << removeSpaces(str1) << endl; 
  
    char str2[] = " g e e k "; 
    cout << removeSpaces(str2); 
    char a[8];
    for (int i=0; i<8 ; i++){
        cin >> a[i];
    }
    for (int j =0 ; j<8 ; j++){
        cout<< a[j]<<" " ; 
    }
    // char name[10]= "raju";
    // for (int k=0 ; k<10 ; k++){
    //     cout << name[k]<< " ";
    // }
    cout<<"hello world "<<endl ; 
    return 0; 
}