#include <iostream>

using namespace std;

class Statki {
private:
	static const int max = 10;
	char map1[max][max];
	char map2[max][max];
	char map3[max][max];
	char map4[max][max];
	int orientacjaKierunkow, orientacjaDokladna, wybor, x, y;
	int ruchGracza = 1;
	int iloscStatkow1Gracza1 = 4;
	int iloscStatkow2Gracza1 = 2;
	int iloscStatkow3Gracza1 = 2;
	int iloscStatkow4Gracza1 = 1;
	int iloscStatkow1Gracza2 = 4;
	int iloscStatkow2Gracza2 = 2;
	int iloscStatkow3Gracza2 = 2;
	int iloscStatkow4Gracza2 = 1;
	int zestrzelonePola1 = 0;
	int zestrzelonePola2 = 0;
	int iloscPostawionychStatkow1 = 0;
	int iloscPostawionychStatkow2 = 0;

public:
	void NarysujMapy() {
		for (int i = 0; i < max; i++) {
			for (int j = 0; j < max; j++) {
				map1[i][j] = '~';
				map2[i][j] = '~';
				map3[i][j] = '~';
				map4[i][j] = '~';
			}
		}
	}

	void PokazMap1Swoja() {
		for (int i = 0; i < max; i++) {
			for (int j = 0; j < max; j++) {
				cout << map1[i][j];
			}
			cout << endl;
		}
	}

	void PokazMap1Przeciwnika() {
		for (int i = 0; i < max; i++) {
			for (int j = 0; j < max; j++) {
				cout << map3[i][j];
			}
			cout << endl;
		}
	}

	void PokazMap2Swoja() {
		for (int i = 0; i < max; i++) {
			for (int j = 0; j < max; j++) {
				cout << map2[i][j];
			}
			cout << endl;
		}
	}
	void PokazMap2Przeciwnika() {
		for (int i = 0; i < max; i++) {
			for (int j = 0; j < max; j++) {
				cout << map4[i][j];
			}
			cout << endl;
		}
	}
	void TuraGracza1() {
		if(iloscPostawionychStatkow1 < 9) {
			cout << "Ktorej wielkosci statek chcesz postawic?" << endl;
			cout << "1. Wielkosci 1 pola. Aktualnie do rozstawienia masz: " << iloscStatkow1Gracza1 << endl;
			cout << "2. Wielkosci 2 pol. Aktualnie do rozstawienia masz: " << iloscStatkow2Gracza1 << endl;
			cout << "3. Wielkosci 3 pol. Aktualnie do rozstawienia masz: " << iloscStatkow3Gracza1 << endl;
			cout << "4. Wielkosci 4 pol. Aktualnie do rozstawienia masz: " << iloscStatkow4Gracza1 << endl;
			cin >> wybor;
			switch (wybor) {
			case (1):
				if (iloscStatkow1Gracza1 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza1();
				}
				else {
					PostawStatek1();
					iloscPostawionychStatkow1++;
					TuraGracza1();
				}
				break;
			case(2):
				if (iloscStatkow2Gracza1 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza1();
				}
				else {
					PostawStatek2();
					iloscPostawionychStatkow1++;
					TuraGracza1();
				}
				break;
			case(3):
				if (iloscStatkow3Gracza1 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza1();
				}
				else {
					PostawStatek3();
					iloscPostawionychStatkow1++;
					TuraGracza1();
				}
				break;
			case(4):
				if (iloscStatkow4Gracza1 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza1();
				}
				else {
					PostawStatek4();
					iloscPostawionychStatkow1++;
					TuraGracza1();
				}
				break;
			default:
				cout << "Nie ma takiego wyboru." << endl;
				TuraGracza1();
			}
		}
		else {
			ruchGracza++;
		}
	}

	void TuraGracza2() {
		if (iloscPostawionychStatkow2 < 9) {
			cout << "Ktorej wielkosci statek chcesz postawic?" << endl;
			cout << "1. Wielkosci 1 pola. Aktualnie do rozstawienia masz: " << iloscStatkow1Gracza2 << endl;
			cout << "2. Wielkosci 2 pol. Aktualnie do rozstawienia masz: " << iloscStatkow2Gracza2 << endl;
			cout << "3. Wielkosci 3 pol. Aktualnie do rozstawienia masz: " << iloscStatkow3Gracza2 << endl;
			cout << "4. Wielkosci 4 pol. Aktualnie do rozstawienia masz: " << iloscStatkow4Gracza2 << endl;
			cin >> wybor;
			switch (wybor) {
			case (1):
				if (iloscStatkow1Gracza2 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza2();
				}
				else {
					PostawStatek1();
					iloscPostawionychStatkow2++;
					TuraGracza2();
				}
				break;
			case(2):
				if (iloscStatkow2Gracza2 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza2();
				}
				else {
					PostawStatek2();
					iloscPostawionychStatkow2++;
					TuraGracza2();
				}
				break;
			case(3):
				if (iloscStatkow3Gracza2 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza2();
				}
				else {
					PostawStatek3();
					iloscPostawionychStatkow2++;
					TuraGracza2();
				}
				break;
			case(4):
				if (iloscStatkow4Gracza2 < 1) {
					cout << "Nie masz juz statkow takiego rozmiaru." << endl;
					TuraGracza2();
				}
				else {
					PostawStatek4();
					iloscPostawionychStatkow2++;
					TuraGracza2();
				}
				break;
			default:
				cout << "Nie ma takiego wyboru." << endl;
				TuraGracza2();
			}
		}
		else {
			ruchGracza++;
		}
	}

	void StawianieStatkow() {
		cout << "Tura stawiania statkow gracza nr 1." << endl;
		TuraGracza1();
		system("CLS");
		cout << "Tura stawiania statkow gracza nr 2." << endl;
		TuraGracza2();
	}

	void ruchGracza1() {
		cout << "Twoja plansza:" << endl;
		PokazMap1Swoja();
		cout << "Plansza przeciwnika:" << endl;
		PokazMap1Przeciwnika();
		StrzalGracza1();
		ruchGracza++;
		system("CLS");
	}

	void ruchGracza2() {
		cout << "Twoja plansza:" << endl;
		PokazMap2Swoja();
		cout << "Plansza przeciwnika:" << endl;
		PokazMap2Przeciwnika();
		StrzalGracza2();
		ruchGracza++;
		system("CLS");
	}

	void PostawStatek1() {
		cout << "Podaj miejsce w ktorym ma stac dziob statku." << endl;
		cin >> x >> y;
		if (ruchGracza % 2 == 1) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
				PostawStatek1();
			}
			else if (map1[y][x] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap1Swoja();
				PostawStatek1();
			}
			else {
				map1[y][x] = '#';
				PokazMap1Swoja();
				iloscStatkow1Gracza1--;
			}
		}
		else if (ruchGracza % 2 == 0) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
				PostawStatek1();
			}
			else if (map2[y][x] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap2Swoja();
				PostawStatek1();
			}
			else {
				map2[y][x] = '#';
				PokazMap2Swoja();
				iloscStatkow1Gracza2--;
			}
		}
	}

	void PostawStatek2() {
		cout << "Podaj miejsce w ktorym ma stac dziob statku." << endl;
		cin >> x >> y;
		if (ruchGracza % 2 == 1) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
				PostawStatek2();
			}
			else if (map1[y][x] != '~') {
				cout << "To miejsce jest zajete." << endl;
				PokazMap1Swoja();
				PostawStatek2();
			}
			else {
				cout << "Pionowo czy poziomo? 1.Pionowo. 2.Poziomo." << endl;
				cin >> orientacjaKierunkow;
				if (orientacjaKierunkow == 1) {
					if (y > 8) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w gore." << endl;
						orientacjaDokladna = 1;
					}
					else if (y < 1) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w dol." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. Do gory. 2. W dol." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = y; i > y - 2; i--) {
							if (map1[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = y; i > y - 2; i--) {
							map1[i][x] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow2Gracza1--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = y; i < y + 2; i++) {
							if (map1[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = y; i < y + 2; i++) {
							map1[i][x] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow2Gracza1--;
					}
				}
				else if (orientacjaKierunkow == 2) {
					if (x > 8) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w lewo." << endl;
						orientacjaDokladna = 1;
					}
					else if (x < 1) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w prawo." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. W lewo. 2. W prawo." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = x; i > x - 2; i--) {
							if (map1[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = x; i > x - 2; i--) {
							map1[y][i] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow2Gracza1--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = x; i < x + 2; i++) {
							if (map1[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = x; i < x + 2; i++) {
							map1[y][i] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow2Gracza1--;
					}
				}
			}
		}
		else if (ruchGracza % 2 == 0) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
			}
			else if (map2[y][x] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap2Swoja();
			}
			else {
				cout << "Pionowo czy poziomo? 1.Pionowo. 2.Poziomo." << endl;
				cin >> orientacjaKierunkow;
				if (orientacjaKierunkow == 1) {
					if (y > 8) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w gore." << endl;
						orientacjaDokladna = 1;
					}
					else if (y < 1) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w dol." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. Do gory. 2. W dol." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = y; i > y - 2; i--) {
							if (map2[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = y; i > y - 2; i--) {
							map2[i][x] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow2Gracza2--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = y; i < y + 2; i++) {
							if (map2[i][y] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = y; i < y + 2; i++) {
							map2[i][x] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow2Gracza2--;
					}
				}
				else if (orientacjaKierunkow == 2) {
					if (x > 8) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w lewo." << endl;
						orientacjaDokladna = 1;
					}
					else if (x < 1) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w prawo." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. W lewo. 2. W prawo." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = x; i > x - 2; i--) {
							if (map2[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = x; i > x - 2; i--) {
							map2[y][i] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow2Gracza2--;
						
					}
					else if (orientacjaDokladna == 2) {
						for (int i = x; i < x + 2; i++) {
							if (map2[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek2();
							}
						}
						for (int i = x; i < x + 2; i++) {
							map2[y][i] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow2Gracza2--;
					}
				}
			}
		}
		
	}

	void PostawStatek3() {
		cout << "Podaj miejsce w ktorym ma stac dziob statku." << endl;
		cin >> x >> y;
		if (ruchGracza % 2 == 1) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
				PostawStatek3();
			}
			else if (map1[y][x] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap1Swoja();
				PostawStatek3();
			}
			else {
				cout << "Pionowo czy poziomo? 1.Pionowo. 2.Poziomo." << endl;
				cin >> orientacjaKierunkow;
				if (orientacjaKierunkow == 1) {
					if (y > 7) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w gore." << endl;
						orientacjaDokladna = 1;
					}
					else if (y < 2) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w dol." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. Do gory. 2. W dol." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = y; i > y - 3; i--) {
							if (map1[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = y; i > y - 3; i--) {
							map1[i][x] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow3Gracza1--;
						
					}
					else if (orientacjaDokladna == 2) {
						for (int i = y; i < y + 3; i++) {
							if (map1[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = y; i < y + 3; i++) {
							map1[i][x] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow3Gracza1--;
					}
				}
				else if (orientacjaKierunkow == 2) {
					if (x > 7) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w lewo." << endl;
						orientacjaDokladna = 1;
					}
					else if (x < 2) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w prawo." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. W lewo. 2. W prawo." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = x; i > x - 3; i--) {
							if (map1[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = x; i > x - 3; i--) {
							map1[y][i] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow3Gracza1--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = x; i < x + 3; i++) {
							if (map1[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = x; i < x + 3; i++) {
							map1[y][i] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow3Gracza1--;
						
					}
				}
			}
		}
		else if (ruchGracza % 2 == 0) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
			}
			else if (map2[y][x] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap2Swoja();
			}
			else {
				cout << "Pionowo czy poziomo? 1.Pionowo. 2.Poziomo." << endl;
				cin >> orientacjaKierunkow;
				if (orientacjaKierunkow == 1) {
					if (y > 7) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w gore." << endl;
						orientacjaDokladna = 1;
					}
					else if (y < 2) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w dol." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. Do gory. 2. W dol." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = y; i > y - 3; i--) {
							if (map2[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = y; i > y - 3; i--) {
							map2[i][x] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow3Gracza2--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = y; i < y + 3; i++) {
							if (map2[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = y; i < y + 3; i++) {
							map2[i][x] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow3Gracza2--;
					}
				}
				else if (orientacjaKierunkow == 2) {
					if (x > 7) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w lewo." << endl;
						orientacjaDokladna = 1;
					}
					else if (x < 2) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w prawo." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. W lewo. 2. W prawo." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = x; i > x - 3; i--) {
							if (map2[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = x; i > x - 3; i--) {
							map2[y][i] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow3Gracza2--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = x; i < x + 3; i++) {
							if (map2[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek3();
							}
						}
						for (int i = x; i < x + 3; i++) {
							map2[y][i] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow3Gracza2--;
					}
				}
			}
		}
	}

	void PostawStatek4() {
		cout << "Podaj miejsce w ktorym ma stac dziob statku." << endl;
		cin >> x >> y;
		if (ruchGracza % 2 == 1) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
				PostawStatek4();
			}
			else if (map1[y][x] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap1Swoja();
				PostawStatek4();
			}
			else {
				cout << "Pionowo czy poziomo? 1.Pionowo. 2.Poziomo." << endl;
				cin >> orientacjaKierunkow;
				if (orientacjaKierunkow == 1) {
					if (y > 6) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w gore." << endl;
						orientacjaDokladna = 1;
					}
					else if (y < 3) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w dol." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. Do gory. 2. W dol." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = y; i > y - 4; i--) {
							if (map1[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = y; i > y - 4; i--) {
							map1[i][x] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow4Gracza1--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = y; i < y + 4; i++) {
							if (map1[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = y; i < y + 4; i++) {
							map1[i][x] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow4Gracza1--;
					}
				}
				else if (orientacjaKierunkow == 2) {
					if (x > 6) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w lewo." << endl;
						orientacjaDokladna = 1;
					}
					else if (x < 3) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w prawo." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. W lewo. 2. W prawo." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = x; i > x - 4; i--) {
							if (map1[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = x; i > x - 4; i--) {
							map1[y][i] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow4Gracza1--;
					}
					else if (orientacjaDokladna == 2) {
						for (int i = x; i < x + 4; i++) {
							if (map1[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap1Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = x; i < x + 4; i++) {
							map1[y][i] = '#';
						}
						PokazMap1Swoja();
						iloscStatkow4Gracza1--;
						
					}
				}
			}
		}
		else if (ruchGracza % 2 == 0) {
			if (x < 0 || x > 10 || y < 0 || y > 10) {
				cout << "Postaw statek na mapie!" << endl;
			}
			else if (map2[x][y] != '~') {
				cout << "To miejsce jest zajęte." << endl;
				PokazMap2Swoja();
			}
			else {
				cout << "Pionowo czy poziomo? 1.Pionowo. 2.Poziomo." << endl;
				cin >> orientacjaKierunkow;
				if (orientacjaKierunkow == 1) {
					if (y > 6) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w gore." << endl;
						orientacjaDokladna = 1;
					}
					else if (y < 3) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w dol." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. Do gory. 2. W dol." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = y; i > y - 4; i--) {
							if (map2[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = y; i > y - 4; i--) {
							map2[i][x] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow4Gracza2--;
						
					}
					else if (orientacjaDokladna == 2) {
						for (int i = y; i < y + 4; i++) {
							if (map2[i][x] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = y; i < y + 4; i++) {
							map2[i][x] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow4Gracza2--;
						
					}
				}
				else if (orientacjaKierunkow == 2) {
					if (x > 6) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w lewo." << endl;
						orientacjaDokladna = 1;
					}
					else if (x < 3) {
						cout << "W tym miejscu mozesz postawic tylko statek skierowany w prawo." << endl;
						orientacjaDokladna = 2;
					}
					else {
						cout << "1. W lewo. 2. W prawo." << endl;
						cin >> orientacjaDokladna;
					}
					if (orientacjaDokladna == 1) {
						for (int i = x; i > x - 4; i--) {
							if (map2[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = x; i > x - 2; i--) {
							map2[y][i] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow4Gracza2--;
						
					}
					else if (orientacjaDokladna == 2) {
						for (int i = x; i < x + 4; i++) {
							if (map2[y][i] != '~') {
								cout << "Pola na ktorych chciales postawic statek sa zajete." << endl;
								PokazMap2Swoja();
								x = NULL;
								y = NULL;
								PostawStatek4();
							}
						}
						for (int i = x; i < x + 4; i++) {
							map2[y][i] = '#';
						}
						PokazMap2Swoja();
						iloscStatkow4Gracza2--;
						
					}
				}
			}
		}
	}

		void StrzalGracza1() {
			cout << "Wpisz miejsce, w ktore chcesz trafic." << endl;
			cin >> x >> y;
			if (map2[x][y] == '#') {
				cout << "Trafienie!" << endl;
				map2[x][y] = 'X';
				map3[x][y] = 'X';
				zestrzelonePola2++;
				cout << "Mapa trafien i pudel:" << endl;
				PokazMap1Przeciwnika();
			}
			else if (map2[x][y] == 'X' || map3[x][y] == 'O') {
				cout << "Tu juz strzelales!" << endl;
				StrzalGracza1();				
			}
			else if (map2[x][y] != '#' && map2[x][y] != 'X' && map3[x][y] != 'O') {
				cout << "Pudlo!" << endl;
				map3[x][y] = 'O';
			}
		}

		void StrzalGracza2() {
			cout << "Wpisz miejsce, w ktore chcesz trafic." << endl;
			cin >> x >> y;
			if (map1[x][y] == '#') {
				cout << "Trafienie!" << endl;
				map1[x][y] = 'X';
				map4[x][y] = 'X';
				zestrzelonePola2++;
				cout << "Mapa trafien i pudel:" << endl;
				PokazMap2Przeciwnika();
			}
			else if (map1[x][y] == 'X' || map4[x][y] == 'O') {
				cout << "Tu juz strzelales!" << endl;
				StrzalGracza2();
			}
			else if (map1[x][y] != '#' && map1[x][y] != 'X' && map4[x][y] != 'O') {
				cout << "Pudlo!" << endl;
				map4[x][y] = 'O';
			}
		}
		
		void Gra() {
			NarysujMapy();
			cout << "Pola ponumerowane sa od 0 do 9 w obu kierunkach plaszczyzny." << endl;
			StawianieStatkow();
			do {
				if (ruchGracza % 2 == 1) {
					ruchGracza1();
				}
				else if (ruchGracza % 2 == 0) {
					ruchGracza2();
				}
				else if (zestrzelonePola1 == 18) {
					cout << "Wygral gracz nr 1!" << endl;
					zestrzelonePola1 = 20;
					zestrzelonePola2 = 20;
				}
				else if (zestrzelonePola2 == 18) {
					cout << "Wygral gracz nr 2!" << endl;
					zestrzelonePola1 = 20;
					zestrzelonePola2 = 20;
				}
			} while (zestrzelonePola1 < 19 || zestrzelonePola2 < 19);
		}
	};

	int main() {
		Statki s;
		s.Gra();
		return 0;
	}