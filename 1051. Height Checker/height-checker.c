void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int heightChecker(int* heights, int heightsSize){
    int arr[heightsSize];
    for(int i=0;i<heightsSize;i++) arr[i]=heights[i];
    bubbleSort(arr,heightsSize);
    int c=0;
    for(int j=0;j<heightsSize;j++){
        if(heights[j]!=arr[j]) c++;
    }
    return c;
}