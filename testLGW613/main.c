//
//  main.c
//  testLGW613
//
//  Created by s20171105136 on 2019/6/13.
//  Copyright © 2019 s20171105136. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
        printf("File open error !\n");
    }

    return 0;
}
