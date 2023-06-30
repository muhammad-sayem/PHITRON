#include<stdio.h>
int main()
{
    long long eye, mouth, body, res = 0;
    scanf("%lld %lld %lld", &eye,&mouth,&body);

    if(eye == 0 || body == 0){
        printf("0\n");
    }

    else{
        long long min = eye;
        if(mouth < min) min = mouth;
        if(body < min) min = body;

        eye -= min;
        mouth -= min;
        body -= min;

        res += min;

        if(eye/2 < body) {
            res += eye/2;
        }
        else{
         res += body;
        }

        printf("%lld\n", res);

    }
    
    return 0;
}

/*
#include<stdio.h>
int main()
{
    long long eye, mouth, body, ans, min, min2, min3, remEye, remBody;
    scanf("%lld%lld%lld", &eye, &mouth, &body);

    if(eye == 0 || body == 0) printf("0\n");
    else if(mouth == 0){
        remEye = eye/2;
        remBody = body;

        if(remEye > remBody) min = remBody;
        else min = remEye;
        printf("%lld\n", min);
    }
    else{
        if(eye<mouth && eye<body) min2 = eye;
        else if(mouth<body) min2 = mouth;
        else min2 = body;

        ans = min2;

        if(mouth == min2){

            remEye = (eye-min2)/2;
            remBody = body-min2;

            if(remEye < remBody) min3 = remEye;
            else if(remEye > remBody) min3 = remBody;
            else min3 = remBody;

            ans += min3;

            printf("%lld\n", ans);
        }
        else printf("%lld\n", ans);
    }

    return 0;
}
*/


