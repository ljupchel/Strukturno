/*
 *
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;


int main() {
    // 1. open the file
    // r - read w - write
    FILE *f = fopen("/Users/ljupc/Desktop/fakultet/Strukturno/test.txt", "r");

    // 2. Determine the way to read the file


    // line by line
    //char line[100];
    //while (fgets(line, 100, f) != NULL) {
    //  line[strlen(line) - 1] = '\0';
    // puts(line);
    //}

    // char by char
   // char curr;
    //while ((curr = fgetc(f)) != EOF) {
      //  cout << curr << "\n";
    //}


    // formatted reading
    int words;
    std::fscanf(f, "%d", &words);

    cout << words;

    char word [100];
    int i;
    for (i = 0; i < words; i++) {
        ::fscanf(f, "%s", word);
        cout << word;
    }

    //3. Close the file
    fclose(f);
    return 0;
}