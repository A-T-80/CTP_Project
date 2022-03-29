// This is the main program for the CTP project
#include <stdio.h>

int fertilizer(int land_area, int crop_type)
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
    int nitrogen_required_per_sft;
    int potassium_required_per_sft;
    int phosphorous_required_per_sft;
    switch (crop_type)
    {
    case 1:
        nitrogen_required_per_sft = 50;
        potassium_required_per_sft = 50;
        phosphorous_required_per_sft = 50;
        // printf("%d %d %d", nitrogen_required_per_sft, potassium_required_per_sft, phosphorous_required_per_sft);
    case 2:
        nitrogen_required_per_sft = 60;
        potassium_required_per_sft = 60;
        phosphorous_required_per_sft = 60;
    case 3:
        nitrogen_required_per_sft = 70;
        potassium_required_per_sft = 70;
        phosphorous_required_per_sft = 70;
    case 4:
        nitrogen_required_per_sft = 80;
        potassium_required_per_sft = 80;
        phosphorous_required_per_sft = 80;
    }
    printf("The total fertilizer required for your crop is (in litres): (In N P K order) %d %d %d", nitrogen_required_per_sft * land_area, phosphorous_required_per_sft * land_area, potassium_required_per_sft * land_area);
    printf("Do you wish to calculate the total cost of fertilizer? (y/n)");
    char p;
    scanf("%c", &p);
    if (p == 'y')
    {
        printf("Enter cost per litre for N P K respectively, or enter 0 0 0 for default value: ");
        int cost_per_litre_n, cost_per_litre_p, cost_per_litre_k;
        scanf("%d %d %d", &cost_per_litre_n, &cost_per_litre_p, &cost_per_litre_k);
        if (cost_per_litre_n == 0)
        {
            cost_per_litre_n = 30;
        }
        if (cost_per_litre_p == 0)
        {
            cost_per_litre_p = 30;
        }
        if (cost_per_litre_k == 0)
        {
            cost_per_litre_k = 30;
        }
        printf("Total cost is roughly %d.", (cost_per_litre_n * nitrogen_required_per_sft * land_area + cost_per_litre_p * phosphorous_required_per_sft * land_area + cost_per_litre_k * potassium_required_per_sft * land_area));
    }
}

int water(int land_area, int crop_type)
{
    {
        int water_per_sft;
        switch (crop_type)
        {
        case 1:
            water_per_sft = 20;
        case 2:
            water_per_sft = 30;
        case 3:
            water_per_sft = 40;
        case 4:
            water_per_sft = 50;
        }
        printf("The total water required for your crop is (in litres): %d", water_per_sft * land_area);
        printf("Do you wish to calculate the total time/cost for water per day? (y/n)");
        char p;
        scanf("%c", &p);
        if (p == 'y')
        {
            int need, parameter;
            printf("Enter t (rate of water) for time taken, or c (cost per litre) for cost: ");
            scanf("%d %d", &need, &parameter);
            if (need == 't')
            {
                printf("The time taken per day is: %d hours", (water_per_sft * land_area) / parameter);
            }
            else if (need == 'c')
            {
                printf("The total cost taken per day is: %d rupees", (water_per_sft * land_area) * parameter);
            }
            else
            {
                printf("Not a valid response, returning to main function.");
            }
        }
        return;
    }
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
}