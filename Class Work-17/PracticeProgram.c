// Eligible For Admission
#include <stdio.h>
int main()
{
    int math, phy, che, total;
    printf("Enter the marks of Math,Physics,Chemistry: ");
    scanf("%d %d %d", &math, &phy, &che);
    total = math + che + phy;
    if ((math >= 60 && phy >= 50 && che >= 40 && total >= 200) || (math + phy) >= 150)
    {
        printf("Eligible For Admission!");
    }
    else
    {
        printf("Not Eligible!!");
    }

    return 0;
}