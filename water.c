#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int
max_area (int *height, int size) {
    int area = 0;
    int l = 0;
    int r = size - 1;
    
    while (l < r) {
        area = max(area, min(height[l], height[r]) * (r - l));
        
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }
    
    return area;
}

int
main (void)
{
    int a[] = {1, 5, 6, 3, 6, 1, 5, 2, 3, 4};
    int b[] = {1, 1};
     
    printf("%d\n", max_area(a, sizeof(a)/sizeof(int)));  
    printf("%d\n", max_area(b, sizeof(b)/sizeof(int)));  

    return 0;
}
