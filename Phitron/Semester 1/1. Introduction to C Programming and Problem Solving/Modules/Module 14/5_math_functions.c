// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x;
//     scanf("%lf", &x);

//     int ans1 = ceil(x);
//     printf("Ceil: %d\n", ans1); 
    
//     int ans2 = floor(x);
//     printf("Floor: %d\n", ans2); 
    
//     int ans3 = round(x);            /// Round er khetre ex: jodi 3.4999999 porjonto o hoy taholeo floor value (ei khetre 3) print kore. Ar 3.5 ba tar beshi hole ceil value (ei khetre 4) print kore ///
//     printf("Round: %d\n", ans3); 
    
//     return 0;
// }

// ------------------------------------------------------ //

/// sqrt function, pow function and abs function ///

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    /// sqrt function ///

    // double x;
    // scanf("%lf", &x);

    // double ans = sqrt(x);
    // printf("%0.2lf\n", ans);

/// --------------------------------------------------------------------- ///
    /// pow function ///

    // double a, b;
    // scanf("%lf %lf", &a, &b);

    // double ans = pow(a,b);
    // printf("%.0lf\n", ans);

/// ---------------------------------------------------------------------- ///
    /// abs function ///

    int x;
    scanf("%d", &x);

    int ans = abs(x);         /// abs function int er jonno kaj kore. long long er jonno abs use korle overflow kore. tai long long er abs value korte hoile if else diye manually korte hoy ///
    printf("%d\n", ans);

    return 0;
}