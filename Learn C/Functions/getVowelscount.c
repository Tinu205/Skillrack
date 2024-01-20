int getVowelscount (char word){
    char vowel = {"a","e","i","o","u","A","E","I","O","U"};
    int count = 0;
    for (int i = 0; i < strlen(word); i++) {
            for (int j = 0; j < sizeof(vowel) / sizeof(vowel[0]); j++) {
                if (word[i] == vowel[j]) {
                    count++;
                    
                }
            }
        }
}