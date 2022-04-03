#include <stdio.h>

int main() {
	FILE* input = fopen("input.txt", "r");
	if (input == NULL) {
		printf("CHYBA: Soubor nelze otevrit pro cteni. \n");
		return 1;
	}

	int cisla[8], pocet[8], temp = 0, pocetCisel = 0;

	for (int i = 0; i < 8; i++) {
		cisla[i] = 0;
	}
	for (int i = 0; i < 8; i++) {
		pocet[i] = 1;
	}
	
	while (fscanf(input, "%d", &temp) != EOF) {
		for (int i = 0; i < 8; i++) {
			if (cisla[i] == temp) {
				pocet[i]++;
				break;
				}
			else if (cisla[i] == 0) {
				cisla[i] = temp;
				pocetCisel++;
				break;
				}
			}
		}
	
	for (int i = 0; i < pocetCisel; i++) {
		printf("%d %dx\n", cisla[i], pocet[i]);
	}
	
}