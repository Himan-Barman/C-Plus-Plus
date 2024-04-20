 #include <iostream>
 using namespace std;

 int main(){
    int array[] = {1, 3, 9, 4, 6, 8, 9, 3, 5};
    int size = 8, j;
    int max = 0, max1 = 0, subMax = 0;

    for ( int i = 0; i < size; i++){
        if (array[i] > max){
            max = array[i];
            j = i;
        }
    }

    cout << "Largest number is: " << max << endl;

    for ( int i = 0; i < size; i++){
        if (array[j] == array[i]){
            array[i] = 0;
        }
    }

    
    for ( int i = 0; i < size; i++){
        if (array[i] > max1){
            max1 = array[i];
        }
    }

    cout << "The second max number is: " << max1 << endl;


    return 0;
 }