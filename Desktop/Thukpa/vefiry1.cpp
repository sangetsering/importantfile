#include <stdio.h>

struct product
{
    char pro_name[10];
    char pro_code[10];
    float cost;
    int nitem;
};

void write(struct product *, FILE *);

int main()
{
    FILE *fp;
    struct product prod;

    fp = fopen("sange.txt", "w");
    write(&prod, fp);
    fclose(fp);

    fp = fopen("sange.txt", "r");
    while (fscanf(fp, "%s %s %f %d", prod.pro_name, prod.pro_code, &prod.cost, &prod.nitem) == 4)
    {
        printf("%-8s %-8s %.2f %7d\n", prod.pro_name, prod.pro_code, prod.cost, prod.nitem);
    }
    fclose(fp);

    return 0;
}

void write(struct product *pro, FILE *pf)
{
    printf("Enter the product name:\n");
    scanf("%s", pro->pro_name);

    printf("Enter the product code:\n");
    scanf("%s", pro->pro_code);

    printf("Enter the product cost:\n");
    scanf("%f", &pro->cost);

    printf("Enter the number of products:\n");
    scanf("%d", &pro->nitem);

    printf("**********************\n");

    fprintf(pf, "%s %s %.2f %d\n", pro->pro_name, pro->pro_code, pro->cost, pro->nitem);
}
