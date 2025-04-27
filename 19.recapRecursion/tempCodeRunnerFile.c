 int length = strlen(word);

    int flag = 0;
    int index = 0;
    int lasNum = length - 1;

    while (1)
    {
        if (index == length / 2)
        {
            break;
        }
        if (word[index] == word[lasNum])
        {
            continue;
        }
        else
        {
            printf("%d - %d\n", index, lasNum);
            printf("%d - %d\n", word[index], word[lasNum]);
            flag = 1;
            break;
        }

        printf("index: %d ", index);
        printf("lasNum: %d ", lasNum);
        printf("\n");
        index++;
        lasNum--;
    }
    printf("%d", flag);