    int partition(student s1[], int start, int end)
    {
        int pivot = s1[start].sgpa;
        int count = 0;
        for (int i = start + 1; i <= end; i++)
        {
            if (s1[i].sgpa <= pivot)
                count++;
        }
        // giving pivot element its correct position
        int pivotIndex = start + count;
        swap(s1[pivotIndex], s1[start]);
        // sorting left and right parts
        int i = start, j = end;
        while (i < pivotIndex && j > pivotIndex)
        {
            while (s1[i].sgpa <= pivot)
            {
                i++;
            }
            while (s1[j].sgpa > pivot)
            {
                j--;
            }
            if (i < pivotIndex && j > pivotIndex)
            {
                swap(s1[i++], s1[j--]);
            }
        }
        return pivotIndex;
    }
    void quickSort(student s1[], int start, int end)
    {
        // base case
        if (start >= end)
            return;
        // partioning the array
        int p = partition(s1, start, end);
        // sorting the left part
        quickSort(s1, start, p - 1);
        // sorting the right part
        quickSort(s1, p + 1, end);
    }
    void printArrays(student s1[], int n)
    {
        int i;
        cout << "enter the no of toppers you want to see " << endl;
        cin >> n;
        for (i = n - 1; i >= 0; i--)
        {
            s1[i].putdata();
        }
        cout << endl;
    }