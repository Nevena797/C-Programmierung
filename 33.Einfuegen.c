void insertArray(int* array, int length, int value, int pos) {
    int i;

    if (pos <= length) {  
        for (i = length; i > pos; i--) {
            array[i] = array[i - 1]; 
        }
        array[pos] = value; 
        length++; 
    }
