// This is the main program for the CTP project

int fertilizer(int land_area, int crop_type, int fertilizer_type)
{
    int nitrogen, potassium, phosphorous;
    printf("Enter amount of nitrogen/litre in your fertilizer (Enter 0 for default value): ");
    scanf("%d", &nitrogen);
    printf("Enter amount of potassium/litre in your fertilizer (Enter 0 for default value): ");
    scanf("%d", &potassium);
    printf("Enter amount of phosphorous/litre in your fertilizer (Enter 0 for default value): ");
    scanf("%d", &phosphorous);
    if (nitrogen == 0)
        nitrogen = 50;
    if (potassium == 0)
        potassium = 50;
    if (phosphorous == 0)
        phosphorous = 50;
}

int season_of_cultivation(int x, int y, int z)
{
    int crop;
    // Will add if-else statements to determine which option is best suited for the trio of x (soil), y (money) and z (season).

    return crop;
}

void money_investment(int x, int y)
{
    int season;

    printf("Enter the number corresponding to the season you would be cultivating in: ");
    scanf("%d", &season);

    season_of_cultivation(x, y, season);
}

void type_of_soil(int x)
{
    int investment;

    printf("Enter the number corresponding to the money bracket which you would be investing: ");
    scanf("%d", &investment);

    money_investment(x, investment);
}

int main()
{
    int soil;

    printf("Enter the number corresponding to the soil you would be cultivating on:");
    printf("(1) Alluvial");
    printf("(2) Black");
    printf("(3) Red & Yellow");
    printf("(4) Arid");
    printf("(5) Laterite");
    printf("(6) Mountain & Forest");
    printf("\n");

    scanf("%d", &soil);
    type_of_soil(soil);
}
