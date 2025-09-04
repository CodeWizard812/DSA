#include <iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            this->data = ch;
            for(int i = 0; i< 26; i++) children[i] = NULL;
            isTerminal = false;
        }
};

class Trie{
    public:
        TrieNode* root;

        Trie(){
            root = new TrieNode('\0');
        }

        //insertion O(l) l = length of word
        void insertUtil(TrieNode* root, string word){
            if(word.length() <= 0){
                root->isTerminal = true;
                return;
            }

            //assuming lowercase only
            int index = word[0] - 'a';
            TrieNode* child = NULL;
            if(root->children[index]){
                child = root->children[index];
            }else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }

            insertUtil(child, word.substr(1));
        }
        void insertWord(string word){
            insertUtil(root, word);
        }
        

        //searching O(l) l = length of word
        bool searchUtil(TrieNode* root, string word){
            //if word is completed
            if(word.length() <= 0){
                //if its the terminal then 1 else 0
                return root->isTerminal;
            }

            int index = word[0] - 'a';
            //if letter is present go forward else return false
            if(root->children[index] != NULL){
                return searchUtil(root->children[index], word.substr(1));
            }        
            return false;
        }

        bool search(string word){
            return searchUtil(root, word);
        }

        //deletion O(l) l = length of word
        void deleteword(string word){
            searchNDelete(root, word);
            return;
        }

        void searchNDelete(TrieNode* root, string word){
            if(word.length() <= 0){
                //make terminal 0
                root->isTerminal = false;
                return;
            }

            int index = word[0] - 'a';
            if(root->children[index] != NULL){
                searchNDelete(root->children[index], word.substr(1));
            }        
            return;
        }
};

int main(){
    
    Trie * t= new Trie();
    //Insertion
    t->insertWord("kafka");
    t->insertWord("java");

    //Searching
    cout<<t->search("kafka")<<endl;
    cout<<t->search("kaf")<<endl;

    //Deletion
    t->deleteword("kafka");

    cout<<t->search("kafka")<<endl;

    
    
    
}