void display_main_options(void);
int process_main_selections(void);
void get_largest_file(void);


void display_main_options(void)
{
    printf("\n1. Select file to process");
    printf("\n2. Exit the program");
    printf("\n\nEnter a choice (1 or 2): ");

}

int process_main_selection(void)
{
    int selection;
    scanf("%d", &selection);

    return selection;
}

void get_largest_file(void)
{
    DIR* currDir = opendir(".");
    struct dirent *aDir;

    while((aDir = readdir(currDir)) != NULL){
        //compare file sizes
    }

}
