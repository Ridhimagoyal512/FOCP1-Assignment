#include<stdio.h>
#include<math.h>
int main(){
// Q)1. armstrong number : it is a no. that is equal to the sum of its own digits each raised to the power of the no. of digits.
    /*int num, originalnum, remainder, n=0;
    double result = 0.0;
    printf("enter an integer :");
    scanf("%d", &num);
    originalnum = num;
    while(originalnum != 0){
        originalnum /= 10;
        ++n;
    }
    originalnum = num;
    while(originalnum != 0){
        remainder = originalnum % 10;
        result += pow(remainder,n);
        originalnum /= 10;
    }
    if((int)result == num)
    printf("%d is an armstrong number. \n", num);
    else
    printf("%d is not an armstrong number. \n", num);*/


// Q)2. 
    /*int num1, num2, hcf;
    printf("enter two integers :");
    scanf("%d %d", &num1, &num2);
    for(int i=1; i <= num1 && i<=num2; ++i){
        if(num1 % i == 0 && num2 % i == 0)
        hcf = i;
    }
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);*/


// Q)3. 
    /*int a, b;
    printf("enter two integers :");
    scanf("%d %d", &a, &b);
    while (b != 0){
        int borrow = (-a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    printf("difference = %d", a);*/


// Q)4. 
    /*int a, b, temp;
    printf("enter two numbers :");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swap using temp : a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after arithmetic swap : a=%d b=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after XOR swap : a=%d b=%d\n", a, b);
    int *p = &a, *q = &b;
    temp = *p; 
    *p = *q;
    *q = temp;
    printf("after pointer swap : a=%d b=%d\n", a, b);*/


// Q)5.
    /*int x, y;
    printf("enter coordinates (x y):");
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0)
        printf("point lies in first quadrant");
    else if(x <0 && y > 0)
        printf("point lies in second quadrant");
    else if(x < 0 && y < 0)
        printf("point lies in third quadrant");
    else if(x > 0 && y < 0)
        printf("point lies in fourth quadrant");
    else if(x == 0 && y == 0)
        printf("point lies at origin");
    else if(x == 0)
        printf("point lies on y-axis");
    else
        printf("point lies on x-axis");*/


// Q)6.
    /*int choice;
    printf("1. Binary to Decimal\n2.Decimal to Binary \n enter choice:");
    scanf("%d", &choice);
    if(choice == 1){
        long long bin;
        int dec = 0, i = 0, rem;
        printf("enter binary number :");
        scanf("%lld", &bin);
        while(bin != 0){
            rem = bin % 10;
            dec += rem * pow(2, i);
            bin /= 10;
            ++i;
        }
        printf("Decimal = %d", dec);
    }
    else if(choice == 2){
        int dec, bin[32], i = 0;
        printf("enter decimal number :");
        scanf("%d", &dec);
        while (dec > 0){
            bin[i] = dec % 2;
            dec /= 2;
            i++;
        }
        printf("binary =");
        for(int j = i - 1; j >= 0; j--)
            printf("%d", bin[j]);
    }
    else 
    printf("invalid choice");*/


// Q)7.
    /*int n, i, j;
    printf("enter number of rows :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j % 2);
        }
        printf("\n");
    }*/


// Q)8.
// Fibonacci series : it is a special number pattern where each number is the sum of the two numbers before it.
    /*int n, first = 0, second = 1, next;
    printf("enter no. of terms :");
    scanf("%d", &n);
    printf("Fibonacci series :");
    for(int i = 1; i <= n; i++){
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
    }*/


// Q)9.
    /*int arr[100], n, i, found=0;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elements :\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++){
        if(arr[i]==99){
            printf("first occurence of 99 found at position %d\n", i+1);
            found=1;
            break;
        }
    }
    if(! found)
        printf("99 not found in the array.\n");*/


// Q)10. 
    /*int arr[100], n, i, count = 0;
    printf("enter number of elements :");
    scanf("%d", &n);
    printf("enter %d elements :\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++)
        if(arr [i] == 99)
            count++;
    printf("number of students who scored 99 : %d\n", count);*/


// Q)11.
    /*int arr[100], even[100], odd[100];
    int n, i, e = 0, o = 0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("enter %d elements :\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++){
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }
    printf("\n even array :\t");
    for(i=0; i<e; i++)
        printf("%d", even[i]);
    printf("\n odd array :\t");
    for(i=0; i<o; i++)
        printf("%d", odd[i]);*/


// Q)12.
    /*int arr[100], n, i, max, min;
    printf("enter no. of elements :");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = min = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("maximum = %d\nminimum = %d\n", max, min);*/


// Q)13.
    /*int arr[100], n, i;
    printf("enter no. of elements :");
    scanf("%d", &n);
    printf("enter %d elements :\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++){
        if((i==0 || arr[i] >= arr[i-1]) && (i==n-1 || arr[i] >= arr[i+1])){
            printf("A peak element is %d at index %d\n", arr[i], i);
            break;
        }
    }*/


// Q)14.


// Q)15. 
    /*int arr[100], n, i, last;
    printf("enter number of elements :");
    scanf("%d", &n);
    printf("enter %d elements :\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    last = arr[n-1];
    for(i=n-1; i>0; i--)
        arr[i]=arr[i-1];
    arr[0] = last;
    printf("array after rotation :");
    for(i=0; i<n; i++)
        printf("%d", arr[i]);*/


// Q)16.
    /*int arr[100], n, pos, val;
    printf("enter no. of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("enter position to insert (0 for front, %d for end):", n);
    scanf("%d", &pos);
    printf("enter value to insert:");
    scanf("%d", &val);
    for(int i=n; i>pos; i--)
        arr[i] = arr[i-1];
    arr[pos]=val;
    n++;
    printf("array after isertion :");
    for(int i=0; i<n; i++)
        printf("%d", arr[i]);*/


// Q)17.
    /*int arr[100], n, pos;
    printf("enter no. of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("enter position to delete (0 for front, %d for end):", n-1);
    scanf("%d", &pos);
    for(int i = pos; i<n; i++)
        arr[i] = arr[i+1];
    n--;
    printf("array after deletion:");
    for(int i=0; i<n; i++)
        printf("%d", arr[i]);*/


// Q)18.
    /*int arr[100], n, i, j, found=0;
    printf("enter number of elements :");
    scanf("%d", &n);
    printf("enter %d elements :\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("duplicate elements :");
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("%d", arr[i]);
                found=1;
                break;
            }
        }
    }
        if(! found)
            printf("-1");*/
return 0;
}