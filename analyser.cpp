#include "analysis.cpp"
int main() {
	int length;

	ifstream filestr;
	filestr.open("code.txt", ios::binary); // open your file
	filestr.seekg(0, ios::end); // put the "cursor" at the end of the file
	length = filestr.tellg(); // find the position of the cursor


	if( length == 0 ){
		cout << "file is empty";
	}
	
	ifstream file("code.txt");
	if (file.is_open()) {
	    string line;
	    string strWords[100];
		short counter = 0;
	    while (getline(file, line)) {
	    	for(int i=0; i<line.length(); i++){
	    		if(line[i] == 32){
			        counter++;
			        i++;
			    }
			    strWords[counter] += line[i];
	    	}
	    }
	    for(int i=0; i<counter; i++) {
		    
		    if(isKeyword(strWords[i])) {
		    	cout<<strWords[i]<<"\t\t\t is a keyword\n";
		    } else if  (isOperator) {
		    	cout<<strWords[i]<<"\t\t\t is an operator\n";
		    }
		}    
	    
	    filestr.close();
	}
}