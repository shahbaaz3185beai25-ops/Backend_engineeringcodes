#include <stdio.h>

int main() {
    /*
    // ---------------------------------------------------------
    // 1. PRINT ARRAY
    // ---------------------------------------------------------
    int size1, index1;
    printf("1. PRINT ARRAY\nEnter size: ");
    scanf("%d", &size1);
    int array1[size1];
    printf("Enter elements: ");
    for(index1 = 0; index1 < size1; index1++) {
        scanf("%d", &array1[index1]);
    }
    printf("Output: ");
    for(index1 = 0; index1 < size1; index1++) {
        printf("%d ", array1[index1]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 10 20 30 | Output: 10 20 30

    // ---------------------------------------------------------
    // 2. SUM OF ARRAY
    // ---------------------------------------------------------
    int size2, index2, total_sum = 0;
    printf("\n2. SUM OF ARRAY\nEnter size: ");
    scanf("%d", &size2);
    int array2[size2];
    printf("Enter elements: ");
    for(index2 = 0; index2 < size2; index2++) {
        scanf("%d", &array2[index2]);
        total_sum = total_sum + array2[index2];
    }
    printf("Output: Sum = %d\n", total_sum);
    // Sample Input: 3, Elements: 5 10 15 | Output: 30

    // ---------------------------------------------------------
    // 3. FIND MAXIMUM
    // ---------------------------------------------------------
    int size3, index3, maximum_value;
    printf("\n3. FIND MAXIMUM\nEnter size: ");
    scanf("%d", &size3);
    int array3[size3];
    printf("Enter elements: ");
    for(index3 = 0; index3 < size3; index3++) {
        scanf("%d", &array3[index3]);
    }
    maximum_value = array3[0];
    for(index3 = 1; index3 < size3; index3++) {
        if(array3[index3] > maximum_value) {
            maximum_value = array3[index3];
        }
    }
    printf("Output: Max = %d\n", maximum_value);
    // Sample Input: 3, Elements: 4 9 2 | Output: 9

    // ---------------------------------------------------------
    // 4. FIND MINIMUM
    // ---------------------------------------------------------
    int size4, index4, minimum_value;
    printf("\n4. FIND MINIMUM\nEnter size: ");
    scanf("%d", &size4);
    int array4[size4];
    printf("Enter elements: ");
    for(index4 = 0; index4 < size4; index4++) {
        scanf("%d", &array4[index4]);
    }
    minimum_value = array4[0];
    for(index4 = 1; index4 < size4; index4++) {
        if(array4[index4] < minimum_value) {
            minimum_value = array4[index4];
        }
    }
    printf("Output: Min = %d\n", minimum_value);
    // Sample Input: 3, Elements: 10 5 8 | Output: 5

    // ---------------------------------------------------------
    // 5. AVERAGE OF ARRAY
    // ---------------------------------------------------------
    int size5, index5;
    float average_sum = 0;
    printf("\n5. AVERAGE\nEnter size: ");
    scanf("%d", &size5);
    int array5[size5];
    printf("Enter elements: ");
    for(index5 = 0; index5 < size5; index5++) {
        scanf("%d", &array5[index5]);
        average_sum = average_sum + array5[index5];
    }
    printf("Output: Average = %.2f\n", average_sum / size5);
    // Sample Input: 2, Elements: 10 20 | Output: 15.00

    // ---------------------------------------------------------
    // 6. LINEAR SEARCH
    // ---------------------------------------------------------
    int size6, index6, search_target, found_flag = 0;
    printf("\n6. LINEAR SEARCH\nEnter size: ");
    scanf("%d", &size6);
    int array6[size6];
    printf("Enter elements: ");
    for(index6 = 0; index6 < size6; index6++) {
        scanf("%d", &array6[index6]);
    }
    printf("Enter target: ");
    scanf("%d", &search_target);
    for(index6 = 0; index6 < size6; index6++) {
        if(array6[index6] == search_target) {
            printf("Found at index %d\n", index6);
            found_flag = 1;
            break;
        }
    }
    if(found_flag == 0) {
        printf("Not Found\n");
    }
    // Sample Input: 3, Elements: 1 2 3, Target: 2 | Output: Found at index 1

    // ---------------------------------------------------------
    // 7. REVERSE ARRAY
    // ---------------------------------------------------------
    int size7, index7;
    printf("\n7. REVERSE\nEnter size: ");
    scanf("%d", &size7);
    int array7[size7];
    printf("Enter elements: ");
    for(index7 = 0; index7 < size7; index7++) {
        scanf("%d", &array7[index7]);
    }
    printf("Output: ");
    for(index7 = size7 - 1; index7 >= 0; index7--) {
        printf("%d ", array7[index7]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 1 2 3 | Output: 3 2 1

    // ---------------------------------------------------------
    // 8. COUNT EVEN AND ODD
    // ---------------------------------------------------------
    int size8, index8, even_count = 0, odd_count = 0;
    printf("\n8. COUNT EVEN/ODD\nEnter size: ");
    scanf("%d", &size8);
    int array8[size8];
    printf("Enter elements: ");
    for(index8 = 0; index8 < size8; index8++) {
        scanf("%d", &array8[index8]);
        if(array8[index8] % 2 == 0) {
            even_count = even_count + 1;
        } else {
            odd_count = odd_count + 1;
        }
    }
    printf("Output: Even = %d, Odd = %d\n", even_count, odd_count);
    // Sample Input: 4, Elements: 1 2 3 4 | Output: Even = 2, Odd = 2

    // ---------------------------------------------------------
    // 9. COPY ARRAY
    // ---------------------------------------------------------
    int size9, index9;
    printf("\n9. COPY ARRAY\nEnter size: ");
    scanf("%d", &size9);
    int original_array[size9], copied_array[size9];
    printf("Enter elements: ");
    for(index9 = 0; index9 < size9; index9++) {
        scanf("%d", &original_array[index9]);
    }
    for(index9 = 0; index9 < size9; index9++) {
        copied_array[index9] = original_array[index9];
    }
    printf("Output: ");
    for(index9 = 0; index9 < size9; index9++) {
        printf("%d ", copied_array[index9]);
    }
    printf("\n");
    // Sample Input: 2, Elements: 5 6 | Output: 5 6

    // ---------------------------------------------------------
    // 10. BUBBLE SORT
    // ---------------------------------------------------------
    int size10, outer_index, inner_index, sort_temp;
    printf("\n10. BUBBLE SORT\nEnter size: ");
    scanf("%d", &size10);
    int array10[size10];
    printf("Enter elements: ");
    for(outer_index = 0; outer_index < size10; outer_index++) {
        scanf("%d", &array10[outer_index]);
    }
    for(outer_index = 0; outer_index < size10 - 1; outer_index++) {
        for(inner_index = 0; inner_index < size10 - outer_index - 1; inner_index++) {
            if(array10[inner_index] > array10[inner_index + 1]) {
                sort_temp = array10[inner_index];
                array10[inner_index] = array10[inner_index + 1];
                array10[inner_index + 1] = sort_temp;
            }
        }
    }
    printf("Output: ");
    for(outer_index = 0; outer_index < size10; outer_index++) {
        printf("%d ", array10[outer_index]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 3 1 2 | Output: 1 2 3

    // ---------------------------------------------------------
    // 11. SECOND LARGEST
    // ---------------------------------------------------------
    int size11, index11, first_largest, second_largest;
    printf("\n11. SECOND LARGEST\nEnter size: ");
    scanf("%d", &size11);
    int array11[size11];
    printf("Enter elements: ");
    for(index11 = 0; index11 < size11; index11++) {
        scanf("%d", &array11[index11]);
    }
    first_largest = -2147483648;
    second_largest = -2147483648;
    for(index11 = 0; index11 < size11; index11++) {
        if(array11[index11] > first_largest) {
            second_largest = first_largest;
            first_largest = array11[index11];
        } else if(array11[index11] > second_largest && array11[index11] < first_largest) {
            second_largest = array11[index11];
        }
    }
    printf("Output: %d\n", second_largest);
    // Sample Input: 3, Elements: 10 30 20 | Output: 20

    // ---------------------------------------------------------
    // 12. FREQUENCY OF ELEMENTS
    // ---------------------------------------------------------
    int size12, i12, j12, count;
    printf("\n12. FREQUENCY\nEnter size: ");
    scanf("%d", &size12);
    int array12[size12], frequency[size12];
    printf("Enter elements: ");
    for(i12 = 0; i12 < size12; i12++) {
        scanf("%d", &array12[i12]);
        frequency[i12] = -1;
    }
    for(i12 = 0; i12 < size12; i12++) {
        count = 1;
        for(j12 = i12 + 1; j12 < size12; j12++) {
            if(array12[i12] == array12[j12]) {
                count = count + 1;
                frequency[j12] = 0;
            }
        }
        if(frequency[i12] != 0) {
            frequency[i12] = count;
        }
    }
    for(i12 = 0; i12 < size12; i12++) {
        if(frequency[i12] != 0) {
            printf("%d occurs %d times\n", array12[i12], frequency[i12]);
        }
    }
    // Sample Input: 3, Elements: 1 2 1 | Output: 1 occurs 2 times, 2 occurs 1 times

    // ---------------------------------------------------------
    // 13. DELETE AT POSITION
    // ---------------------------------------------------------
    int size13, index13, position_to_delete;
    printf("\n13. DELETE AT POSITION\nEnter size: ");
    scanf("%d", &size13);
    int array13[size13];
    printf("Enter elements: ");
    for(index13 = 0; index13 < size13; index13++) {
        scanf("%d", &array13[index13]);
    }
    printf("Enter index: ");
    scanf("%d", &position_to_delete);
    for(index13 = position_to_delete; index13 < size13 - 1; index13++) {
        array13[index13] = array13[index13 + 1];
    }
    printf("Output: ");
    for(index13 = 0; index13 < size13 - 1; index13++) {
        printf("%d ", array13[index13]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 1 2 3, Index: 1 | Output: 1 3

    // ---------------------------------------------------------
    // 14. INSERT AT POSITION
    // ---------------------------------------------------------
    int size14, index14, position_to_insert, value_to_insert;
    printf("\n14. INSERT AT POSITION\nEnter size: ");
    scanf("%d", &size14);
    int array14[size14 + 1];
    printf("Enter elements: ");
    for(index14 = 0; index14 < size14; index14++) {
        scanf("%d", &array14[index14]);
    }
    printf("Enter index and value: ");
    scanf("%d %d", &position_to_insert, &value_to_insert);
    for(index14 = size14; index14 > position_to_insert; index14--) {
        array14[index14] = array14[index14 - 1];
    }
    array14[position_to_insert] = value_to_insert;
    printf("Output: ");
    for(index14 = 0; index14 <= size14; index14++) {
        printf("%d ", array14[index14]);
    }
    printf("\n");
    // Sample Input: 2, Elements: 1 3, Index: 1, Value: 2 | Output: 1 2 3

    // ---------------------------------------------------------
    // 15. MERGE TWO ARRAYS
    // ---------------------------------------------------------
    int size_A, size_B, k;
    printf("\n15. MERGE ARRAYS\nEnter sizes A and B: ");
    scanf("%d %d", &size_A, &size_B);
    int array_A[size_A], array_B[size_B], merged_result[size_A + size_B];
    printf("Enter A: ");
    for(k = 0; k < size_A; k++) {
        scanf("%d", &array_A[k]);
    }
    printf("Enter B: ");
    for(k = 0; k < size_B; k++) {
        scanf("%d", &array_B[k]);
    }
    for(k = 0; k < size_A; k++) {
        merged_result[k] = array_A[k];
    }
    for(k = 0; k < size_B; k++) {
        merged_result[size_A + k] = array_B[k];
    }
    printf("Output: ");
    for(k = 0; k < size_A + size_B; k++) {
        printf("%d ", merged_result[k]);
    }
    printf("\n");
    // Sample Input: 1 1, A: 1, B: 2 | Output: 1 2

    // ---------------------------------------------------------
    // 16. COUNT NEGATIVE NUMBERS
    // ---------------------------------------------------------
    int size16, index16, negative_count = 0;
    printf("\n16. COUNT NEGATIVES\nEnter size: ");
    scanf("%d", &size16);
    int array16[size16];
    printf("Enter elements: ");
    for(index16 = 0; index16 < size16; index16++) {
        scanf("%d", &array16[index16]);
        if(array16[index16] < 0) {
            negative_count = negative_count + 1;
        }
    }
    printf("Output: %d\n", negative_count);
    // Sample Input: 3, Elements: 1 -5 -2 | Output: 2

    // ---------------------------------------------------------
    // 17. UNIQUE ELEMENTS
    // ---------------------------------------------------------
    int size17, i17, j17, unique_flag;
    printf("\n17. UNIQUE ELEMENTS\nEnter size: ");
    scanf("%d", &size17);
    int array17[size17];
    printf("Enter elements: ");
    for(i17 = 0; i17 < size17; i17++) {
        scanf("%d", &array17[i17]);
    }
    printf("Output: ");
    for(i17 = 0; i17 < size17; i17++) {
        unique_flag = 1;
        for(j17 = 0; j17 < size17; j17++) {
            if(i17 != j17 && array17[i17] == array17[j17]) {
                unique_flag = 0;
                break;
            }
        }
        if(unique_flag == 1) {
            printf("%d ", array17[i17]);
        }
    }
    printf("\n");
    // Sample Input: 3, Elements: 1 2 1 | Output: 2

    // ---------------------------------------------------------
    // 18. COUNT DUPLICATES
    // ---------------------------------------------------------
    int size18, i18, j18, duplicate_total = 0;
    printf("\n18. COUNT DUPLICATES\nEnter size: ");
    scanf("%d", &size18);
    int array18[size18];
    printf("Enter elements: ");
    for(i18 = 0; i18 < size18; i18++) {
        scanf("%d", &array18[i18]);
    }
    for(i18 = 0; i18 < size18; i18++) {
        for(j18 = i18 + 1; j18 < size18; j18++) {
            if(array18[i18] == array18[j18]) {
                duplicate_total = duplicate_total + 1;
                break;
            }
        }
    }
    printf("Output: %d\n", duplicate_total);
    // Sample Input: 3, Elements: 5 2 5 | Output: 1

    // ---------------------------------------------------------
    // 19. SEPARATE EVEN AND ODD
    // ---------------------------------------------------------
    int size19, index19, even_ptr = 0, odd_ptr = 0;
    printf("\n19. SEPARATE EVEN/ODD\nEnter size: ");
    scanf("%d", &size19);
    int array19[size19], even_only[size19], odd_only[size19];
    printf("Enter elements: ");
    for(index19 = 0; index19 < size19; index19++) {
        scanf("%d", &array19[index19]);
        if(array19[index19] % 2 == 0) {
            even_only[even_ptr] = array19[index19];
            even_ptr = even_ptr + 1;
        } else {
            odd_only[odd_ptr] = array19[index19];
            odd_ptr = odd_ptr + 1;
        }
    }
    printf("Even: ");
    for(index19 = 0; index19 < even_ptr; index19++) {
        printf("%d ", even_only[index19]);
    }
    printf("Odd: ");
    for(index19 = 0; index19 < odd_ptr; index19++) {
        printf("%d ", odd_only[index19]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 1 2 3 | Output: Even: 2 Odd: 1 3

    // ---------------------------------------------------------
    // 20. CHECK PALINDROME
    // ---------------------------------------------------------
    int size20, index20, palindrome_flag = 1;
    printf("\n20. CHECK PALINDROME\nEnter size: ");
    scanf("%d", &size20);
    int array20[size20];
    printf("Enter elements: ");
    for(index20 = 0; index20 < size20; index20++) {
        scanf("%d", &array20[index20]);
    }
    for(index20 = 0; index20 < size20 / 2; index20++) {
        if(array20[index20] != array20[size20 - index20 - 1]) {
            palindrome_flag = 0;
            break;
        }
    }
    if(palindrome_flag == 1) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }
    // Sample Input: 3, Elements: 1 2 1 | Output: Yes

    // ---------------------------------------------------------
    // 21. SCALAR MULTIPLICATION
    // ---------------------------------------------------------
    int size21, index21, factor;
    printf("\n21. SCALAR MULTIPLY\nEnter size: ");
    scanf("%d", &size21);
    int array21[size21];
    printf("Enter elements: ");
    for(index21 = 0; index21 < size21; index21++) {
        scanf("%d", &array21[index21]);
    }
    printf("Multiplier: ");
    scanf("%d", &factor);
    printf("Output: ");
    for(index21 = 0; index21 < size21; index21++) {
        printf("%d ", array21[index21] * factor);
    }
    printf("\n");
    // Sample Input: 2, Elements: 3 4, Multiplier: 2 | Output: 6 8

    // ---------------------------------------------------------
    // 22. ELEMENT-WISE ADDITION
    // ---------------------------------------------------------
    int size22, index22;
    printf("\n22. ELEMENT-WISE ADDITION\nEnter size: ");
    scanf("%d", &size22);
    int list_A[size22], list_B[size22];
    printf("Enter A: ");
    for(index22 = 0; index22 < size22; index22++) {
        scanf("%d", &list_A[index22]);
    }
    printf("Enter B: ");
    for(index22 = 0; index22 < size22; index22++) {
        scanf("%d", &list_B[index22]);
    }
    printf("Output: ");
    for(index22 = 0; index22 < size22; index22++) {
        printf("%d ", list_A[index22] + list_B[index22]);
    }
    printf("\n");
    // Sample Input: 2, A: 1 1, B: 2 2 | Output: 3 3

    // ---------------------------------------------------------
    // 23. LEFT ROTATE
    // ---------------------------------------------------------
    int size23, index23, first_temp;
    printf("\n23. LEFT ROTATE\nEnter size: ");
    scanf("%d", &size23);
    int array23[size23];
    printf("Enter elements: ");
    for(index23 = 0; index23 < size23; index23++) {
        scanf("%d", &array23[index23]);
    }
    first_temp = array23[0];
    for(index23 = 0; index23 < size23 - 1; index23++) {
        array23[index23] = array23[index23 + 1];
    }
    array23[size23 - 1] = first_temp;
    printf("Output: ");
    for(index23 = 0; index23 < size23; index23++) {
        printf("%d ", array23[index23]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 1 2 3 | Output: 2 3 1

    // ---------------------------------------------------------
    // 24. RIGHT ROTATE
    // ---------------------------------------------------------
    int size24, index24, last_temp;
    printf("\n24. RIGHT ROTATE\nEnter size: ");
    scanf("%d", &size24);
    int array24[size24];
    printf("Enter elements: ");
    for(index24 = 0; index24 < size24; index24++) {
        scanf("%d", &array24[index24]);
    }
    last_temp = array24[size24 - 1];
    for(index24 = size24 - 1; index24 > 0; index24--) {
        array24[index24] = array24[index24 - 1];
    }
    array24[0] = last_temp;
    printf("Output: ");
    for(index24 = 0; index24 < size24; index24++) {
        printf("%d ", array24[index24]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 1 2 3 | Output: 3 1 2

    // ---------------------------------------------------------
    // 25. COUNT PRIMES
    // ---------------------------------------------------------
    int size25, i25, j25, prime_counter = 0, check_prime;
    printf("\n25. COUNT PRIMES\nEnter size: ");
    scanf("%d", &size25);
    int array25[size25];
    printf("Enter elements: ");
    for(i25 = 0; i25 < size25; i25++) {
        scanf("%d", &array25[i25]);
        check_prime = 1;
        if(array25[i25] < 2) {
            check_prime = 0;
        } else {
            for(j25 = 2; j25 * j25 <= array25[i25]; j25++) {
                if(array25[i25] % j25 == 0) {
                    check_prime = 0;
                    break;
                }
            }
        }
        if(check_prime == 1) {
            prime_counter = prime_counter + 1;
        }
    }
    printf("Output: %d\n", prime_counter);
    // Sample Input: 3, Elements: 2 3 4 | Output: 2

    // ---------------------------------------------------------
    // 26. ARRAY RANGE
    // ---------------------------------------------------------
    int size26, index26, max_r, min_r;
    printf("\n26. RANGE\nEnter size: ");
    scanf("%d", &size26);
    int array26[size26];
    printf("Enter elements: ");
    for(index26 = 0; index26 < size26; index26++) {
        scanf("%d", &array26[index26]);
    }
    max_r = array26[0];
    min_r = array26[0];
    for(index26 = 1; index26 < size26; index26++) {
        if(array26[index26] > max_r) {
            max_r = array26[index26];
        }
        if(array26[index26] < min_r) {
            min_r = array26[index26];
        }
    }
    printf("Output: %d\n", max_r - min_r);
    // Sample Input: 3, Elements: 1 10 5 | Output: 9

    // ---------------------------------------------------------
    // 27. BINARY SEARCH
    // ---------------------------------------------------------
    int size27, low, mid, high, target27, result_pos = -1;
    printf("\n27. BINARY SEARCH\nEnter size: ");
    scanf("%d", &size27);
    int array27[size27];
    printf("Sorted elements: ");
    for(int m = 0; m < size27; m++) {
        scanf("%d", &array27[m]);
    }
    printf("Target: ");
    scanf("%d", &target27);
    low = 0;
    high = size27 - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(array27[mid] == target27) {
            result_pos = mid;
            break;
        } else if(array27[mid] < target27) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(result_pos != -1) {
        printf("Found at index %d\n", result_pos);
    } else {
        printf("Not Found\n");
    }
    // Sample Input: 3, Elements: 1 2 3, Target: 3 | Output: Found at index 2

    // ---------------------------------------------------------
    // 28. REPLACE EVENS WITH ZERO
    // ---------------------------------------------------------
    int size28, index28;
    printf("\n28. REPLACE EVENS\nEnter size: ");
    scanf("%d", &size28);
    int array28[size28];
    printf("Enter elements: ");
    for(index28 = 0; index28 < size28; index28++) {
        scanf("%d", &array28[index28]);
        if(array28[index28] % 2 == 0) {
            array28[index28] = 0;
        }
    }
    printf("Output: ");
    for(index28 = 0; index28 < size28; index28++) {
        printf("%d ", array28[index28]);
    }
    printf("\n");
    // Sample Input: 3, Elements: 2 3 4 | Output: 0 3 0

    // ---------------------------------------------------------
    // 29. CHECK IF SORTED
    // ---------------------------------------------------------
    int size29, index29, sorted_check = 1;
    printf("\n29. CHECK SORTED\nEnter size: ");
    scanf("%d", &size29);
    int array29[size29];
    printf("Enter elements: ");
    for(index29 = 0; index29 < size29; index29++) {
        scanf("%d", &array29[index29]);
    }
    for(index29 = 0; index29 < size29 - 1; index29++) {
        if(array29[index29] > array29[index29 + 1]) {
            sorted_check = 0;
            break;
        }
    }
    if(sorted_check == 1) {
        printf("Output: Sorted\n");
    } else {
        printf("Output: Unsorted\n");
    }
    // Sample Input: 3, Elements: 1 3 2 | Output: Unsorted

    // ---------------------------------------------------------
    // 30. CLEAR ARRAY
    // ---------------------------------------------------------
    int size30, index30;
    printf("\n30. CLEAR ARRAY\nEnter size: ");
    scanf("%d", &size30);
    int array30[size30];
    printf("Enter elements: ");
    for(index30 = 0; index30 < size30; index30++) {
        scanf("%d", &array30[index30]);
    }
    for(index30 = 0; index30 < size30; index30++) {
        array30[index30] = 0;
    }
    printf("Output: ");
    for(index30 = 0; index30 < size30; index30++) {
        printf("%d ", array30[index30]);
    }
    printf("\n");
    // Sample Input: 2, Elements: 10 20 | Output: 0 0
    #include <stdio.h>

int main() {
    {
        int size, i, j;
        // Using char pointer for strings
        char* check = "Identity"; 
        scanf("%d", &size);
        int matrix[size][size];

        for (i = 0; i < size; i = i + 1) {
            for (j = 0; j < size; j = j + 1) {
                scanf("%d", &matrix[i][j]);
                // Main diagonal must be 1
                if (i == j && matrix[i][j] != 1) {
                    check = "Not an Identity";
                }
                // All other elements must be 0
                if (i != j && matrix[i][j] != 0) {
                    check = "Not an Identity";
                }
            }
        }
        // Using %s to print a string
        printf("%s\n", check);
    }
    return 0;
}

/* Sample Input:
3
1 0 0
0 1 0
0 0 1

Sample Output:
Identity
#include <stdio.h>

int main() {
    int r3 = 2, c3 = 3;
    int i3, j3, row_sum;
    int mat3[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // Outer loop to iterate through each row
    for (i3 = 0; i3 < r3; i3 = i3 + 1) {
        // row_sum is reset to 0 at the start of every row
        row_sum = 0; 
        
        // Inner loop to iterate through columns of the current row
        for (j3 = 0; j3 < c3; j3 = j3 + 1) {
            row_sum = row_sum + mat3[i3][j3];
        }
        
        // Output the sum of the current row before moving to the next
        printf("Row %d: %d\n", i3, row_sum);
    }

    return 0;
}

/* Sample Input:
Matrix: {{10, 20, 30}, {40, 50, 60}}

Sample Output:
Row 0: 60
Row 1: 150
*/

    return 0;
}