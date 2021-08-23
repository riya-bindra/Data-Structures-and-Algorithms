int MinHeap::extractMin() 
{
    // Your code here
    if(heap_size==0)
        return -1;
    if(heap_size==1)
    {
        heap_size--;
        return harr[0];
    }
    int x=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return x;
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    // Your code here
    if(i>=heap_size)
        return;
    decreaseKey(i,INT_MIN);
    extractMin();
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
    // Your code here
    if(heap_size==capacity)
        return;
    harr[heap_size]=k;
    heap_size++;
    int i=heap_size-1;
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(harr[i],harr[parent(i)]);
        i=parent(i);
    }
}

//Function to change value at ith index and store that value at first index.
void MinHeap::decreaseKey(int i, int new_val) 
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

/* You may call below MinHeapify function in
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i) 
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}

/*Time Complexity:
MinHeapify: O(log n)
decreaseKey: O(log n)
insertKey: O(log n)
deleteKey: O(log n)
extractMin: O(log n)*/
