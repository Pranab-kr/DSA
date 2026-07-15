bool find4Numbers(int arr[], int n, int target) {

  for (int i = 0; i < n - 1; i++) {
    int swapped = 0; // Flag

    for (int j = 0; j < n - i - 1; j++) {

      if (arr[j] > arr[j + 1]) {
        swapped = 1;

        swap(arr[j], arr[j + 1]);
      }
    }
    if (!swapped)
      break;
  }

  for (int i = 0; i < n - 3; i++) {

    for (int j = i + 1; j < n - 2; j++) {
      int rem = target - arr[i] - arr[j];
      int st = j + 1, end = n - 1;
      while (st < end) {
        if (arr[st] + arr[end] == rem)
          return true;
        else if (arr[st] + arr[end] > rem)
          end--;
        else
          st++;
      }
    }
  }
  return false;
  // TC-> O(n^3) , SC -> O(1)
}
