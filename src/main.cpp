#include "./lexer/lexer.h"
#include "./parser/parser.h"
#include "./utils/tokenMap.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	Lexer lex;
	if (argc == 2) {
		vector<Pair> result = lex.readFile(argv[1]);

		/*for (int i=0; i<result.size(); i++) {
			cout << "Token: " << token_to_string[result[i].token] << "\t\t\t" << "lexeme: " << result[i].lexeme << endl;
		}*/
		
		Parser parser(result);
		parser.Parse();

	}
	else {
		cout<<"no file requested"<<endl;
	}
}