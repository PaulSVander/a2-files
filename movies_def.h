int display_main_options(void);
int process_main_selection(void);
int get_largest_file(void);


int display_main_options(void)
{
    printf("\n1. Select file to process");
    printf("\n2. Exit the program");
    printf("\n\nEnter a choice (1 or 2): ");

    process_main_selection();

    return 1;
}

int process_main_selection(void)
{
    int selection;
    scanf("%d", &selection);

    if(selection == 1) {
        return 1;
    } else if(selection == 2) {
        exit(0);
    } else {
        printf("\n-----ERROR: Invalid input-----");
        display_main_options();
    }

    return 1;
}

int get_largest_file(void)
{
    DIR* currDir = opendir(".");
    struct dirent *aDir;

    while((aDir = readdir(currDir)) != NULL){
        //compare file sizes
    }

    return 1;
}
