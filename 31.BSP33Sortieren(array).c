//BSP33:Sortieren(array)



void bubblesort(int array[], int length)
{
    int i, j, tmp;

    for (i = 1; i < length; i++)
    {
        for (j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
