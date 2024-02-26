#include <iostream>
#include <vector>

void bucketSort(std::vector<float>& arr) {
  // Define number of buckets and ranges
  int numBuckets = 10;
  float range = (arr.back() - arr.front()) / numBuckets;

  // Create empty buckets
  std::vector<std::vector<float>> buckets(numBuckets);

  // Scatter elements into buckets
  for (float element : arr) {
    int bucketIndex = (element - arr.front()) / range;
    buckets[bucketIndex].push_back(element);
  }

  // Sort elements in each bucket
  for (auto& bucket : buckets) {
    // Use any sorting algorithm here (e.g., insertionSort, selectionSort)
    // std::sort(bucket.begin(), bucket.end());
  }

  // Gather sorted buckets into final array
  arr.clear();
  for (auto& bucket : buckets) {
    arr.insert(arr.end(), bucket.begin(), bucket.end());
  }
}

int main() {
  std::vector<float> arr = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
  bucketSort(arr);

  std::cout << "Sorted array: ";
  for (float element : arr) {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  return 0;
}
