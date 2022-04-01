// This is the main program for the CTP project
#include <stdio.h>

market_and_transportaion (int land_area, int crop_type)
{
    int market_distance, cost_per_quintal;
    printf ("Enter the distance (in km) of the nearest marketplace from the land: ");
    scanf ("%d", &market_distance);
    printf ("\n");

    printf ("Enter the cost per quintal: ");
    scanf ("%d", &cost_per_quintal);
    printf ("\n");
    
//     Will complete this once we have the functions of (D) to take the input about machinery (tractors, etc.)
}

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
        break;
        // printf("%d %d %d", nitrogen_required_per_sft, potassium_required_per_sft, phosphorous_required_per_sft);
    case 2:
        nitrogen_required_per_sft = 60;
        potassium_required_per_sft = 60;
        phosphorous_required_per_sft = 60;
        break;
    case 3:
        nitrogen_required_per_sft = 70;
        potassium_required_per_sft = 70;
        phosphorous_required_per_sft = 70;
        break;
    case 4:
        nitrogen_required_per_sft = 80;
        potassium_required_per_sft = 80;
        phosphorous_required_per_sft = 80;
        break;
    default:
        nitrogen_required_per_sft = 50;
        potassium_required_per_sft = 50;
        phosphorous_required_per_sft = 50;
    }
    printf("The total fertilizer required for your crop is (in litres): (In N P K order) %d %d %d", nitrogen_required_per_sft * land_area, phosphorous_required_per_sft * land_area, potassium_required_per_sft * land_area);
    printf("Do you wish to calculate the total cost of fertilizer? (y/n)");
    char p = 'n';
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
            break;
        case 2:
            water_per_sft = 30;
            break;
        case 3:
            water_per_sft = 40;
            break;
        case 4:
            water_per_sft = 50;
            break;
        default:
            printf("We do not have this crop type in our database, please provide the water needed per sft");
            scanf("%d", &water_per_sft);
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

int harvest(int land_area, int crop_type)
{
    int yield_per_sft;
    switch (crop_type)
    {
    case 1:
        yield_per_sft = 30;
        break;
    case 2:
        yield_per_sft = 40;
        break;
    case 3:
        yield_per_sft = 30;
        break;
    case 4:
        yield_per_sft = 40;
        break;
    default:
        printf("We do not have this crop type in our database, please provide the yield per sft");
        scanf("%d", &yield_per_sft);
    }
    printf("The total yield for your farm is %d.", land_area * yield_per_sft);
    printf("Do you wish to calculate net profit? (y/n)");
    int response;
    scanf("%d", &response);
    if (response == 'y')
    {
        int price, seed_price, seed_amount;
        printf("Enter selling price per ton: ");
        scanf("%d", &price);
        printf("Enter seed price per ton: ");
        scanf("%d", &price);
        switch (crop_type)
        {
        case 1:
            seed_amount = 4;
        case 2:
            seed_amount = 5;
        case 3:
            seed_amount = 6;
        case 4:
            seed_amount = 7;
        default:
            printf("We do not have this crop type in our database, please provide the seed required per sft");
            scanf("%d", &seed_amount);
        }
        // printf("Do you wish to include the cost of supplements");
        printf("The net profit will be %d.", ((land_area * yield_per_sft * price) - (land_area * seed_amount * seed_price)));
    }
}

void crop_suggestion(int x, int y, int z)
{
//     x = soil type
//     y = financial investment
//     z = season of cultivation
    if (x == 1)
    {
        if (z == 1)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate tomato.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate maize.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate pulses.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate sugarcane.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
        }
        else if (z == 2)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate cucumber.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate mustard.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate litchi.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate rice.");
            }
        }
        else
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate lemon.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate gram.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate tomato.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate banana.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate litchi.");
            }
        }
    }
    else if (x == 2)
    {
        if (z == 1)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate millets.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate oilseeds.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate groundnut.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate rice.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate cotton.");
            }
        }
        else if (z == 2)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate sunflower.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate jowar.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate cereals.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate rice.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate sugarcane.");
            }
        }
        else
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate millets.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate linseed.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate oilseed.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate cereals.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
        }
    }
    else if (x == 3)
    {
        if (z == 1)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate tomato.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate ragi.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate potato.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate orange.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate mango.");
            }
        }
        else if (z == 2)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate ragi.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate maize.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate oilseed.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate pulses.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate sugarcane.");
            }
        }
        else
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate jowar.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate groundnut.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate orange.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate rice.");
            }
        }
    }
    else if (x == 4)
    {
        if (z == 1)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate barley.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate millet.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate pulses.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate cotton.");
            }
        }
        else if (z == 2)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate seasame.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate mustard.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate beans.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate maize.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
        }
        else
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate millets.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate bajra.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate corn.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate peach.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
        }
    }
    else if (x == 5)
    {
        if (z == 1)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate areca nuts.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate cinchona.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate rubber.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate almonds.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate cotton.");
            }
        }
        else if (z == 2)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate coconut.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate cashew.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate walnut.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate coffee.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate tea.");
            }
        }
        else
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate cinchona.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate areca nuts.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate dates.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate cashew.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate coconut.");
            }
        }
    }
    else
    {
        if (z == 1)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate beans.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate barley.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate wheat.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate rice.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate tea.");
            }
        }
        else if (z == 2)
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate maize.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate barley.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate blueberry.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate apple.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate coffee.");
            }
        }
        else
        {
            if (y == 1)
            {
                printf("Based on the given inputs, it is recommended to cultivate beans.");
            }
            else if (y == 2)
            {
                printf("Based on the given inputs, it is recommended to cultivate capsicum.");
            }
            else if (y == 3)
            {
                printf("Based on the given inputs, it is recommended to cultivate raspberry.");
            }
            else if (y == 4)
            {
                printf("Based on the given inputs, it is recommended to cultivate strawberry.");
            }
            else
            {
                printf("Based on the given inputs, it is recommended to cultivate spices.");
            }
        }
    }
}

int season_of_cultivation(int x, int y)
{
//     x = soil type
//     y = financial investment
    int season;

    printf("Enter the number corresponding to the season you would be cultivating in: ");
    printf("(1) Monsoon (Kharif)");
    printf("(2) Winter (Rabi)");
    printf("(3) Summer (Rabi)");
    printf("\n");

    scanf("%d", &season);

    crop_suggestion(x, y, season);
}

void money_investment(int x)
{
//     x = soil type
    int season;
    int investment;

    printf("Enter the number corresponding to the money bracket which you would be investing per hectare:\n");
    printf("(1) < Rs. 10,000");
    printf("(2) Rs. 10,000 - 25,000");
    printf("(3) Rs. 25,000 - 50,000");
    printf("(4) Rs. 50,000 - 75,000");
    printf("(5) > Rs. 75,000");
    printf("\n");

    scanf("%d", &investment);

    season_of_cultivation(x, investment);
}

void type_of_soil()
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

    money_investment(soil);
}

// ___________________________________________________________________________________________________________________________________________________________________

// List of crops
// (grouped based on soil type; no repitition here to avoid confusion)

// tomato 
// maize 
// pulses 
// sugarcane 
// wheat 
// cucumber
// mustard 
// litchi 
// rice 
// lemon 
// gram 
// banana 

// millets 
// oilseeds 
// groundnut 
// cotton 
// sunflower 
// jowar 
// cereals 
// linseed 

// ragi 
// potato 
// orange 
// mango 

// barley 
// seasame 
// beans 
// bajra 
// peach 

// areca nuts 
// cinchona 
// rubber 
// almonds 
// coconut 
// cashews
// walnut
// coffee 
// tea 
// dates 

// blueberry 
// apple
// capsicum 
// raspberry 
// strawberry
// spices

// ____________________________________________________________________________________________________________________________________________________________________

// Grouping of crops for crop_type value

// (1)
// cucumber
// millets
// oilseed
// linseed
// seasame
// peach

// (2)
// tomato
// lemon
// gram
// jowar
// ragi
// beans
// barley
// cinchona
// cashews
// blueberry

// (3)
// maize
// mustard
// litchi
// banana
// groundnut
// sunflower
// orange
// bajra
// areca nuts
// almonds
// walnut
// dates
// capsicum
// raspberry

// (4)
// pulses
// sugarcane
// wheat
// rice
// cotton
// cereals
// potato
// mango
// rubber
// coconut
// coffee
// tea
// apple
// strawberry
// spices

// ____________________________________________________________________________________________________________________________________________________________________

int main()
{
    
}
