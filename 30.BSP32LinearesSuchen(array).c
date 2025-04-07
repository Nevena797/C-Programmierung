int linearSearch(int key, int array[], int length) {
    int i;

    for (i = 0; i < length; i++)
        if (array[i] == key)
            return i;

    return -1;
}
