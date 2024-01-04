#include <stdio.h>
#include <string.h>

void setting(int location) {
    switch (location) {
        case 1:
            printf("%s", "##########################\n");
            printf("%s", "Mystery at BlackWood Manor\n");
            printf("%s", "Location: Blackwood Manor, an isolated mansion in the countryside.\n");
            printf("%s", "Era: 1930s, with a classic, suspenseful ambiance.\n");
            printf("%s", "##########################\n\n");
            break;
        case 2:
            printf("%s", "##########################\n");
            printf("%s", "Examining the Crime Scene\n");
            printf("%s", "##########################\n\n");
            break;
    }
}

void interview(int suspect) {
    char name[100];
    switch (suspect) {
        case 1:
            strcpy(name, "Lady Elizabeth Blackwood");
            printf("\n##########################\nInterviewing %s\n##########################\n\n", name);
            printf("%s", "Morgan: Can you account for your whereabouts at the time of your husband's death?\n");
            printf("%s", "Lady Elizabeth: I was in my room, resting. This is a shock, detective. Charles had enemies, but I never thought...\n");
            printf("%s", "Morgan: Did you notice anything unusual tonight?\n");
            printf("%s", "Lady Elizabeth: Not particularly. But, you might want to ask Dr. Hastings. She spent a great deal of time with Charles recently.\n");
            printf("%s", "Lady Elizabeth: I did overhear Charles arguing with Mr. Wallace last week. It seemed quite heated.\n\n");
            break;
        case 2:
            strcpy(name, "Dr. Sarah Hastings");
            printf("\n##########################\nInterviewing %s\n##########################\n\n", name);
            printf("%s", "Morgan: Dr. Hastings, how well did you know Lord Blackwood?\n");
            printf("%s", "Dr. Hastings: We were old friends, but I hadn't seen much of him until recently.\n");
            printf("%s", "Morgan: Were you aware of any threats to his life?\n");
            printf("%s", "Dr. Hastings: Charles was a complex man. He had his secrets, like us all.\n");
            printf("%s", "Dr. Hastings: 'Charles seemed preoccupied recently, worried about business dealings, especially with Mr. Wallace.'\n\n");
            break;
        case 3:
            strcpy(name, "Henry Wallace");
            printf("\n##########################\nInterviewing %s\n##########################\n\n", name);
            printf("%s", "Morgan: Mr. Wallace, what was your relationship with the deceased?\n");
            printf("%s", "Henry Wallace: Business partners, though recently we've had our disagreements over certain... financial matters.\n");
            printf("%s", "Morgan: Disagreements? Could you elaborate?\n");
            printf("%s", "Henry Wallace: Let's just say, Charles wasn't always fair in his dealings. But murder? No, I'd never go that far.\n");
            printf("%s", "Henry Wallace: 'Yes, we had our differences. I was in the garden, close enough to hear a window shatter from the study.'\n\n");
            break;
        case 4:
            strcpy(name, "Olivia Green");
            printf("\n##########################\nInterviewing %s\n##########################\n\n", name);
            printf("%s", "Morgan: Miss Green, how did you come to be at Blackwood Manor tonight?\n");
            printf("%s", "Olivia Green: I was invited by Lord Blackwood. We met recently at a function, and he insisted I join this gathering.\n\n");
            printf("%s", "Morgan: Did anything unusual happen tonight that caught your attention?\n");
            printf("%s", "Olivia Green: Nothing I can think of. But this house, it has its secrets.\n");
            printf("%s", "Olivia Green: 'I saw Mr. Wallace leaving the study looking quite agitated earlier tonight.'\n\n");
            break;
    }
}

void scene(int scenes) {
    char name[100];

    switch (scenes) {
        case 1:
            setting(1);
            break;
        case 2:
            setting(2);
            printf("%s", "Morgan: [Finding a business contract] 'A recent contract between Lord Blackwood and Henry Wallace shows significant financial disputes.'\n");
            printf("%s", "##########################\n\n");
            break;
        case 6:
            strcpy(name, "Lady Elizabeth Blackwood");
            printf("%s", "##########################\nInterviewing %s\n##########################\n", name);
            break;
        case 7:
            strcpy(name, "Dr. Sarah Hastings");
            printf("%s", "##########################\nInterviewing %s\n##########################\n", name);
            break;
        case 8:
            strcpy(name, "Henry Wallace");
            printf("%s", "##########################\nInterviewing %s\n##########################\n", name);
            printf("%s", "Morgan: [In the secret passage] 'These documents reveal that Wallace was involved in shady financial dealings with Lord Blackwood.'\n");
            break;
        case 9:
            strcpy(name, "Olivia Green");
            printf("%s", "##########################\nInterviewing %s\n##########################\n", name);
            break;
        case 10:
            printf("%s", "Morgan: [Finding a hidden lever in the library] 'What's this? A secret passage. This could lead to some answers.'\n");
            printf("%s", "##########################\n\n");
            break;
        case 11:
            printf("%s", "Morgan: [Discovering a locked diary in the study] 'A locked diary. The key to this could reveal much about Lord Blackwood's private affairs.'\n");
            printf("%s", "Morgan: [Finding the key on the study's bookshelf] 'Now to see what secrets this diary holds... It mentions Wallace's name multiple times in a suspicious context.'\n");
            printf("%s", "##########################\n\n");
            break;
    }
}


void confrontation() {
    int suspectChoice;
    printf("%s", "Morgan: 'After reviewing the evidence, I am ready to make my accusation. The person responsible for Lord Blackwood's death is...'\n\n");
    printf("%s", "Enter your choice (1: Lady Elizabeth, 2: Dr. Hastings, 3: Henry Wallace, 4: Olivia Green): ");
    scanf_s("%d", &suspectChoice);

    if (suspectChoice == 3) {
        printf("%s", "Henry Wallace: 'Alright, I did it. I was ruined, and Charles was going to expose me. I had no choice!'\n\n");
        printf("%s", "Morgan: 'Justice will be served. Your confession has brought this case to a close.'\n\n");
    } else {
        printf("%s", "\nAs Morgan accuses the suspect, a sudden commotion arises...\n\n");
        switch (suspectChoice) {
            case 1:
                printf("%s", "Lady Elizabeth, in shock, faints. In the ensuing chaos, a shadowy figure slips away unnoticed...\n\n");
                break;
            case 2:
                printf("%s", "Dr. Hastings vehemently denies the charge. Amidst the argument, a scream is heard from another room - another victim!\n\n");
                break;
            case 4:
                printf("%s", "Olivia Green protests her innocence. As the debate heats up, a fire breaks out, destroying crucial evidence.\n\n");
                break;
            default:
                printf("%s", "Confusion ensues, and in the midst of it, the real killer makes their escape, leaving behind a baffling case.\n\n");
                break;
        }
        printf("%s", "Morgan: 'It seems I've accused the wrong person. The real killer is still at large...'\n\n");
    }
}



int main(void) {
    int choice, suspectChoice, houseChoice;

    setting(1);
    printf("%s", "Edward (Butler): Ah, Detective Morgan. Thank you for coming on such short notice. I'm afraid Lord Blackwood has been found dead under mysterious circumstances.\n");
    printf("%s", "Morgan (Detective): Can you tell me where the body was found?\n");
    printf("%s", "Edward: In his study. Right this way, please.\n\n");

    setting(2);
    do {
        printf("%s", "What would you like to examine: (1) Body, (2) Nearby Items, (3) Location, (4) Done Examining: ");
        scanf_s("%d", &choice);

        switch(choice) {
            case 1:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [Examining the body] No visible wounds, but his face shows signs of distress. Poison, perhaps?\n");
                printf("%s", "##########################\n\n");
                break;
            case 2:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [Noticing a letter opener] Interesting, a letter opener with no fingerprints. It's been wiped clean.\n");
                printf("%s", "##########################\n\n");
                break;
            case 3:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [Observing the broken window] The window's shattered, but the glass is outside. It was broken from the inside.\n");
                printf("%s", "##########################\n\n");
                break;
            case 4:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: I think I have gotten all I can from this area. I better go talk to the suspects.\n");
                printf("%s", "##########################\n\n");
                break;
            default:
                printf("%s", "\nPlease select 1, 2, 3, or 4 only.\n");
                break;
        }
    } while(choice != 4);

    do {
        printf("%s", "Who would you like to interview? (1) Lady Elizabeth, (2) Dr. Hastings, (3) Henry Wallace, (4) Olivia Green, (5) Done Interviewing: ");
        scanf_s("%d", &suspectChoice);

        if (suspectChoice >= 1 && suspectChoice <= 4) {
            interview(suspectChoice);
        } else if (suspectChoice != 5) {
            printf("%s", "\nPlease select a valid option.\n");
        }
    } while (suspectChoice != 5);

    do {
        printf("%s", "\nWhere would you like to search in the house? (1) Library, (2) Study, (3) Dining Hall, (4) Lord Blackwood's Bedroom, (5) Finished Searching: ");
        scanf_s("%d", &houseChoice);

        switch(houseChoice) {
            case 1:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [In the library] These books... wait, this bookshelf seems odd. [Finds a hidden lever] Aha, a secret passage!\n");
                scene(10);
                break;
            case 2:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [In the study] What's this among the papers? A locked diary... it could hold important clues.\n");
                scene(11);
                break;
            case 3:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [In the dining hall] Just a regular dining hall, although the decor speaks to the lord's lavish lifestyle.\n");
                printf("%s", "##########################\n\n");
                break;
            case 4:
                printf("%s", "\n##########################\n");
                printf("%s", "Morgan: [In Lord Blackwood's bedroom] Nothing out of the ordinary here, but the aura of the room feels heavy with secrets.\n");
                printf("%s", "##########################\n");
                break;
            case 5:
                printf("%s", "\nI should review what I've found so far.\n\n");
                break;
            default:
                printf("%s", "\nPlease select a valid option.\n");
                break;
        }
    } while (houseChoice != 5);

    confrontation();

    printf("\nPress enter to exit.");
    getchar();
    getchar();

    return 0;
}
