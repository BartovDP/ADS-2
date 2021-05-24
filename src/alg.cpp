// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int sch=0;
for(int i=0; i<len-1; i++) {
for(int j=i+1; j<len; j++) {
if (arr[i] + arr[j] == value) sch++;
}
}
return sch;
}

int countPairs2(int *arr, int len, int value) {
int sch = 0;
for (len; arr[]>value; len--) {};
for (int i=len; i>0; i--) {
for (int j=0; arr[i]+arr[j] <=value;j++)
if (arr[i]+arr[j] == value) sch++;
}
return sch;
}

int countPairs3(int *arr, int len, int value) {
int sch = 0;
for (int i = 0; i < len - 1; i++) {
int j = i + 1, r = len, key = value - arr[i];
for (; j < r;) {
int mid = j + (r - j) / 2;
if (arr[mid] == key) {
for (; arr[mid - 1] == key && mid > j; mid--) {}
for (; arr[mid] == key; mid++, sch++) {}
break;
} else if (arr[mid] < key) {
j = mid + 1;
} else {
r = mid;
}
}
}
return sch;
}
