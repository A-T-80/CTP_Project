// This is the main program for the CTP project
#include <stdio.h>

void market_and_transportaion(int land_area, int crop_type)
{
    int market_distance, cost_per_quintal;
    printf("Enter the distance (in km) of the nearest marketplace from the land: ");
    scanf("%d", &market_distance);
    printf("\n");

    printf("Enter the cost per quintal: ");
    scanf("%d", &cost_per_quintal);
    printf("\n");

    //     Will complete this once we have the functions of (D) to take the input about machinery (tractors, etc.)
}

void machinery()
{
    int x1, x2, x3;

    printf("Enter 1 if you posses a ploughing or tilling machine, and 0 if you don't:\n");
    scanf("%d", &x1);
    printf("\n");

    printf("Enter 1 if you posses a harvester, and 0 if you don't:\n");
    scanf("%d", &x2);
    printf("\n");

    printf("Enter 1 if you posses a water bowser, and 0 if you don't:\n");
    scanf("%d", &x3);
    printf("\n");

    if (x1 == 0)
    {
        printf("It is advised that you focus more on the effective preparation of the topsoil, and ensure spacing between seeds.\n");
        printf("It would be judicious to dedicate adequate time to proper tilling of the soil, in order to get good return on cultivation.\n");
        printf("\n");
    }
    else
    {
        printf("Proper tilling of the soil isn't a concern for you.\n ");
        printf("Just make sure to not over-till the soil in an attempt to make the topsoil as crop-ready as possible.\n");
        printf("\n");
    }

    if (x2 == 0)
    {
        printf("In the absense of a harvester, it becomes very important that you hire a good labour force for the task, in case of a large land area.\n");
        printf("In case the harvesting takes multiple days, ensure that the harvested crop is stored properly everyday.\n");
        printf("Don't try to rush the harvesting process, as that might negatively impact the qualtiy of the harvest.\n");
        printf("\n");
    }
    else
    {
        printf("In the presence of a harvester, you wouldn't have to spend any considerable amount of money towards labour for this task.\n");
        printf("However, make sure to not use the machine for long intervals of time without breaks.\n");
        printf("Doing so might lead to damage due to overheating, or in the worst case, the machine might catch fire too.\n");
        printf("Slso ensure that dust and chaff don't accumulate inside the harvester.\n");
        printf("\n");
    }

    if (x3 == 0)
    {
        printf("With respect to fertilizers, the most important thing you will have to be sure of is that you don't over-fertilize the crops.\n");
        printf("When manually fertilizing, one has the tendency to injudiciously give the crop more fertilizer than required.\n");
        printf("This can have bad effects, in both the short and long term.\n");
        printf("Thus, it is advised to thoroughly follow your fertilization plan, and to set up the plan itself very carefully.\n");
        printf("\n");
    }
    else
    {
        printf("With respect to fertilizers, the water bowser will ensure that no over-fertilization takes place.");
        printf("Only thing to note is to not become complacent and always turn on, turn off, and move the bowser around the land at the prescribed time intervals.\n");
        printf("\n");
        printf("Also try yo make maximum use of the bowser to mninmise irrigation costs.");
        printf("And just as with fertilizers, it is necessary to always stay alert when using such impactful machines.\n");
        printf("\n");
    }
}

void fertilizer(int land_area, int crop_type)
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
    printf("Do you wish to calculate the total cost of fertilizer? If yes, type 1, else 0: ");
    int p;
    scanf("%d", &p);
    if (p == 1)
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
        printf("Total cost is roughly %d.", ((cost_per_litre_n * nitrogen_required_per_sft * land_area) + (cost_per_litre_p * phosphorous_required_per_sft * land_area) + (cost_per_litre_k * potassium_required_per_sft * land_area)));
    }
}

void water(int land_area, int crop_type)
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
    printf("The total water required for your crop is (in litres): %d\n", water_per_sft * land_area);
    printf("Do you wish to calculate the total time/cost for water per day? Type 1 if yes, or 0: ");
    int p;
    scanf("%d", &p);
    if (p == 1)
    {
        int parameter;
        int need;
        printf("Enter 1 for time taken, or 2 for cost: ");
        scanf("%d", &need);
        printf("\n");
        if (need == 1)
        {
            printf("Enter the rate of water: ");
            scanf("%d", &parameter);
            printf("\n");
            printf("The time taken per day is: %d hours", (water_per_sft * land_area) / parameter);
        }
        else if (need == 2)
        {
            printf("Enter the cost of water per litre: ");
            scanf("%d", &parameter);
            printf("\n");
            printf("The total cost taken per day is: %d rupees", (water_per_sft * land_area) * parameter);
        }
        else
        {
            printf("Not a valid response, returning to main function.");
        }
    }
}

void harvest(int land_area, int crop_type)
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
    printf("The total yield for your farm is %d kgs", land_area * yield_per_sft);
    printf("Do you wish to calculate net profit? (y/n)");
    char response[1];
    scanf("%s", response);
    if (response[0] == 'y')
    {
        printf("%d", crop_type);
        int price, seed_price, seed_amount;
        printf("Enter selling price per ton: ");
        scanf("%d", &price);
        printf("Enter seed price per ton: ");
        scanf("%d", &seed_price);
        switch (crop_type)
        {
        case 1:
            seed_amount = 4;
            break;
        case 2:
            seed_amount = 5;
            break;
        case 3:
            seed_amount = 6;
            break;
        case 4:
            seed_amount = 7;
            break;
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

void crop_type_printer()
{

    printf("Group 1: \n");
    printf("Cucumber \n");
    printf("Millets \n");
    printf("Oilseed \n");
    printf("Linseed \n");
    printf("Sesame \n");
    printf("Peach \n");

    printf("\n");
    printf("Group 2: \n");
    printf("Tomato \n");
    printf("Lemon \n");
    printf("Gram \n");
    printf("Jowar \n");
    printf("Ragi \n");
    printf("Beans \n");
    printf("Barley \n");
    printf("Cinchona \n");
    printf("Cashews\n");
    printf("Blueberry\n");

    printf("\n");
    printf("Group 3: \n");
    printf("Maize \n");
    printf("Mustard \n");
    printf("Litchi\n");
    printf("Banana \n");
    printf("Groundnut\n");
    printf("Sunflower\n");
    printf("Orange\n");
    printf("Bajra \n");
    printf("Areca Nuts\n");
    printf("Almonds\n");
    printf("Walnut\n");
    printf("Dates\n");
    printf("Capsicum\n");
    printf("Raspberry\n");

    printf("\n");
    printf("Group 4: \n");
    printf("Pulses \n");
    printf("Sugarcane \n");
    printf("Wheat \n");
    printf("Rice \n");
    printf("Cotton \n");
    printf("Cereals \n");
    printf("Potato \n");
    printf("Mango \n");
    printf("Rubber \n");
    printf("Coconut \n");
    printf("Coffee \n");
    printf("Tea \n");
    printf("Apple \n");
    printf("Strawberry \n");
    printf("Spices \n");

    printf("Group 5: If your crop is not in the list.");
}

int main()
{
    printf("Welcome to the CTP Project - Per Drop More Crop\n");
    printf("Our services include: \n");
    printf("(1) Crop Suggestion\n");
    printf("(2) Water need and cost calculator\n");
    printf("(3) Yield and Profit calculator\n");
    printf("(4) Fertilizer need and cost calculator\n");
    printf("(5) Selling Assistance\n");
    printf("(6) Farming Advice\n");
    printf("(7) Exit\n");
    printf("Please choose the option which you would like to go with: ");
    int choice, crop_type, land_area;
    scanf("%d", &choice);
    printf("\n");
    switch (choice)
    {
    case 1:
        type_of_soil();
        main();
        break;
    case 2:
        printf("Please enter your land area: ");
        scanf("%d", &land_area);
        printf("\n");
        printf("Please enter your crop type(1-5) (Enter 9 to get the list of crop types): ");
        scanf("%d", &crop_type);
        printf("\n");
        if (crop_type == 9)
        {
            crop_type_printer();
            printf("Please enter your crop type(1-4):");
            scanf("%d", &crop_type);
            water(land_area, crop_type);
        }
        else
        {
            water(land_area, crop_type);
        }
        main();
        break;
    case 3:
        printf("Please enter your land area: ");
        scanf("%d", &land_area);
        printf("\n");
        printf("Please enter your crop type(1-5) (Enter 9 to get the list of crop types): ");
        scanf("%d", &crop_type);
        printf("\n");
        if (crop_type == 9)
        {
            crop_type_printer();
            printf("Please enter your crop type(1-4):");
            scanf("%d", &crop_type);
            harvest(land_area, crop_type);
        }
        else
        {
            harvest(land_area, crop_type);
        }
        main();
        break;
    case 4:
        printf("Please enter your land area: ");
        scanf("%d", &land_area);
        printf("\n");
        printf("Please enter your crop type(1-5) (Enter 9 to get the list of crop types): ");
        scanf("%d", &crop_type);
        printf("\n");
        if (crop_type == 9)
        {
            crop_type_printer();
            printf("Please enter your crop type(1-4):");
            scanf("%d", &crop_type);
            fertilizer(land_area, crop_type);
        }
        else
        {
            fertilizer(land_area, crop_type);
        }
        break;
    case 5:
        printf("Please enter your land area: ");
        scanf("%d", &land_area);
        printf("\n");
        printf("Please enter your crop type(1-5) (Enter 9 to get the list of crop types): ");
        scanf("%d", &crop_type);
        printf("\n");
        if (crop_type == 9)
        {
            crop_type_printer();
            printf("Please enter your crop type(1-4):");
            scanf("%d", &crop_type);
            market_and_transportaion(land_area, crop_type);
        }
        else
        {
            market_and_transportaion(land_area, crop_type);
        }
        break;
    case 6:
        machinery();
        break;
    case 7:
        printf("Thank you for using our program");
        break;
    default:
        printf("Not a valid response, please try again. \n");
        main();
    }
}
