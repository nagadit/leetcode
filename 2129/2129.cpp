#include<iostream>
using namespace std;

string capitalizeTitle(string title) {
        int start_char = 0;
        // int char_count = 0;
        int title_len = title.length();
        for (int i = 0; i<=title_len; i++){
            if (title[i] == ' ' || i == title_len){
                
                while(start_char<=i){
                    // if (i-start_char == 0){
                    //     title[i-start_char] = toupper(title[i-start_char]);
                    // }
                    
                    if (i-start_char >= 3){
                        // if (title== 3){
                        //     title[start_char - 3] = toupper(title[start_char - 3]);
                        // }
                        // if(i-start_char == char_count){
                            
                        // }
                        // else{
                            title[start_char] = tolower(title[start_char]);
                        // }
                    
                    }
                    else{
                        title[start_char] = tolower(title[start_char]);
                    }
                    start_char++;

                }       
                
                // char_count = 0;
                start_char = i+1;
            }
            // else{
            //     char_count++;
            // }

        }
        return title;
    }

int main(int argc, char** argv)
{   
    cout << capitalizeTitle("ZW Cl PyR foC") << endl;
    // for (int i = 0; i < argc; ++i)
    //     cout << argv[i] << "---:---" << capitalizeTitle(argv[i]) << '\n';
        
    return 0;
}