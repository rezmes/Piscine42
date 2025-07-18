#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    char filename[100];
    char timebuf[20];
    const char *login = "rezmes";
    FILE *fp;
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    // Ask for the output file name
    printf("Enter filename (e.g. main.c): ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';  // Remove newline

    // Open file for writing
    fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error creating file");
        return 1;
    }

    // Format current time
    strftime(timebuf, sizeof(timebuf), "%Y/%m/%d %H:%M:%S", tm_info);

    // Write 42-style aligned header (strict 80-char lines)
    fprintf(fp, "/* ************************************************************************** */\n");
    fprintf(fp, "/*                                                                            */\n");
    fprintf(fp, "/*                                                        :::      ::::::::   */\n");
    fprintf(fp, "/*   %-51s:+:      :+:    :+:   */\n", filename);
    fprintf(fp, "/*                                                    +:+ +:+         +:+     */\n");
    fprintf(fp, "/*   By: %-42s+#+  +:+       +#+        */\n", login);
    fprintf(fp, "/*                                                +#+#+#+#+#+   +#+           */\n");
    fprintf(fp, "/*   Created: %-19s by %-10s#+#    #+#             */\n", timebuf, login);
    fprintf(fp, "/*   Updated: %-19s by %-10s###   ########.fr       */\n", timebuf, login);
    fprintf(fp, "/*                                                                            */\n");
    fprintf(fp, "/* ************************************************************************** */\n");

    fclose(fp);

    printf("✔ Header created in: %s\n", filename);
    return 0;
}

