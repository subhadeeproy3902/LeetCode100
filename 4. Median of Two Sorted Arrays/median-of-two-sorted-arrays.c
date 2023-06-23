double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int n = nums1Size + nums2Size;
    int arr[n];
    int i=0,j=0,k=0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            arr[k++] = nums1[i++];
        } else {
            arr[k++] = nums2[j++];
        }
    }

    while (i < nums1Size) {
        arr[k++] = nums1[i++];
    }
    
    while (j < nums2Size) {
        arr[k++] = nums2[j++];
    }


    if (n%2==0){
        int mid=n/2;
        return (arr[mid-1]+arr[mid])/2.0;
    }
    else{
        return arr[n/2];
    }
}