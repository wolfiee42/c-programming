#include <stdio.h>

int main()
{
    long long int eye, mouth, body;
    scanf("%lld%lld%lld", &eye, &mouth, &body);

    long long int katryoshkas = 0;
    long long int halfNumOfBody;

    if (eye <= mouth && eye <= body)
    {
        katryoshkas = eye;
    }
    else if (body <= mouth && body <= eye)
    {
        katryoshkas = body;
    }
    else if (mouth <= eye && mouth <= body)
    {
        katryoshkas = mouth;
        eye -= mouth;
        body -= mouth;

        halfNumOfBody = eye / 2;

        if (body >= halfNumOfBody)
        {
            katryoshkas += halfNumOfBody;
        }
        else
        {
            katryoshkas += body;
        }
    }

    printf("%lld", katryoshkas);
}
