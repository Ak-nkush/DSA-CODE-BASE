1 1 1 0 0 1 0 
0 1 2 3 4 5 6 
0 0 0 1 1 1 1 

void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[nextZero] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
		}
	}
}