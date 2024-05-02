// Logo.c

#include "../SRLinker.h"
#include <stdio.h>

int showLogo() {
    printf("\033[0;31m");
    printf(
        "\n"
        "          __     ____                                      \n"
        "        /    )   /    )   /      ,         /               \n"
        "        \\       /___ /   /           __   / __    __   )__ \n"
        "         \\     /    |   /      /   /   ) /(     /___) /   )\n"
        "    (____/  __/     |  /____/ /   /   / /  \\   (___  /     \n"
        "                                                           \n"
        "                      developed by Sven Herz            \n"
        "\n"
    );
    printf("\033[0m");
    printf("\n\n\n");
    return 0;
}