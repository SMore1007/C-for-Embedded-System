// #include <stdio.h>
// #include <string.h>

// void SmallWordInString(char *str, int len);

// int main()
// {
//     char string[] = "Sagar is a good boy";
//     int length = strlen(string);
//     SmallWordInString(string, length);
// }

// void SmallWordInString(char *str, int len)
// {
//     int wordCount = 0;
//     char tempWord[20] = ""; // Temporary word buffer
//     char smallestWord[20] = ""; // Buffer to hold the smallest word
//     int smallestLen = len; // Initialize to the max possible length

//     for (int i = 0; i <= len; i++)
//     {
//         if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') // Add to temp word if not space or end
//         {
//             tempWord[wordCount++] = str[i];
//         }
//         else
//         {
//             tempWord[wordCount] = '\0'; // Null terminate the word
            
//             // Check if current word is smaller than the smallest word found so far
//             if (strlen(tempWord) < smallestLen && wordCount > 0)
//             {
//                 strcpy(smallestWord, tempWord); // Update smallest word
//                 smallestLen = strlen(tempWord); // Update smallest length
//             }
//             wordCount = 0; // Reset word count for the next word
//         }
//     }

//     printf("Smallest word : %s\n", smallestWord);
//     printf("Length of Smallest word: %d\n", smallestLen);
// }

 int smallest_word(char *string){
         if(!string || strlen(string) == 0) return 0; 
         int smallest_word = INT_MAX;  
         char *delimiter = " .,\n\t"; 
         bool is_word = false; 
         int current_word = 0; 
         for(int i = 0; string[i]; i++){
                 int j; 
                 for(j = 0; delimiter[j]; j++){
                         if(delimiter[j] == string[i]){
                                 break; 
                         }
                 }
                 if(j == strlen(delimiter)){
                         if(!is_word){
                                 is_word = true; 
                         }
                         ++current_word; 
                 }
                 else {
                         if(is_word){
                                 smallest_word = smallest_word < current_word ? smallest_word : current_word; 
                                 is_word = false; 
                                 current_word = 0;  
                         }
                 }
         }
         if(is_word){
                 smallest_word = smallest_word < current_word ? smallest_word : current_word;
         }
         return smallest_word; 
 }