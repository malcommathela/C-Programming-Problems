#include <stdio.h>

int main(){
    int choice = 0;
    printf("Jack was lost in the deep tropical jungle, jack was hungry, so\nwhat kind of food did jack thought of eating?\n");
    printf("1. Pizza\n");
    printf("2. Wild Fruits\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        /* code */
        printf("Jack Started looking for pizza shops nearby, but he couldn't find any pizza shops in the\njungle, so he thought of hunting some animals to eat.\n");
        printf("While looking for animals to prey upon he stumbled upon a sleeping jaguar.\nDid he:\n");
        printf("1. Try to Kill the jaguar and eat it\n");
        printf("2. Leave the jaguar alone\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            printf("Jack tried to kill the jaguar, but the jaguar woke up and attacked jack.\nJack couldn't survive the attack and died in the jungle.\n");
            printf("THE END\n");
            break;

        case 2:
            printf("Jack decided to leave the jaguar alone but as he was walking away, the jaguar woke up\nJack:\n");
            printf("1. Immediatly ran away.\n");
            printf("2. Froze in place behind the bushes.\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                /* code */
                printf("Jack ran as fast as he could and managed to escape the jaguar.\nHe then found a small village nearby where he got some food and shelter.\n");
                printf("THE END\n");
                break;

            case 2:
                printf("Jack froze in place, hoping the jaguar wouldn't notice him.\nUnfortunately, the jaguar spotted him and attacked.\nJack couldn't survive the attack and died in the jungle.\n");
                printf("THE END\n");
                break;
            
            default:
                printf("Invalid choice. THE END\n");
                break;
            }
            break;
        
        default:
            break;
        }
        break;

    case 2:
        /* code */
        printf("Jack started looking for wild fruits to eat.\nWhile searching for fruits, he stumbled upon a beehive full of honey.\nDid he:\n");
        printf("1. Try to take some honey from the beehive\n");
        printf("2. Leave the beehive alone\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            printf("Jack tried to take some honey from the beehive, but the bees got angry and stung him.\nJack had a severe allergic reaction and couldn't survive.\n");
            printf("THE END\n");
            break;

        case 2:
            printf("Jack decided to leave the beehive alone and continued searching for fruits.\nHe eventually found a tree full of delicious fruits and ate to his heart's content.\n");
            printf("But, the fruits were poisonous and Jack fell ill.\nHe thought of:");
            printf("1. Finding a way to cure himself\n");
            printf("2. Accepting his fate\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                /* code */
                printf("Jack remembered a book he read about medicinal herbs that can be found in the jungle to help cure an infection or poison.\n");
                printf("He tried to search for the herbs, with his weakened body but, his legs gave away before he even got far.\n");
                printf("Jack:\n");
                printf("1. Yelled for help hoping to get someone's attention\n");
                printf("2. Decided to rest and gather strength\n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    /* code */
                    printf("Jack yelled for help with all his might.\nBut a group of men found him and took him captive\n");
                    printf("THE END\n");
                    break;
                
                    case 2:
                    /* code */
                    printf("Jack decided to rest and gather strength, but he collapsed. As all hope seemed lost, some locals found him and treated him hence he woke up better and later\n recovered fully.\n");
                    printf("THE END\n");
                    break;

                default:
                    printf("Invalid choice. THE END\n");
                    break;
                }

            case 2:
                printf("Jack accepted his fate and sat down under a tree to rest.\nHe eventually succumbed to the poison and died in the jungle.\n");
                printf("THE END\n");
                break;
            
            default:
            printf("Invalid choice. THE END\n");
                break;
            }
            
        
        default:
            printf("Invalid choice. THE END\n");
            break;
        }
        break;
    
    default:
        break;
    }
    
}