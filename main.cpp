#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

std::string name[] = {"Basma","SteffenWilkinson","HastiDoshi","MusaOlalekanIsmail","PrateekDhamija","NegarajuS",
                 "Vinay_GB","MarkoRadusinovic","DeVuZz","Helena","AkilaN","NemiMabotja","MattStonie","CharanLeo25",
                 "NardiSolomon","JonnyAleexanderAcosta","NamanLakhwani","DeepakSoni","LuisMunoz","NupurKhamitkar",
                 "4rontender","RileyL","King189","NavpreetPahul","AnkitDoot","Flodur","AryanVerma","HarishSharma",
                 "OmKumar","LoystonPais","CodeFu","ChillPill","Night_fury~","Sam","qtiLta","daniel","KimSanI",
                 "LIndaYesso","ArkarHtun","ZaraKhan","MaiMai","Assasin","Kainatic","AadHoogenboom","Cepagrave",
                 "NourAbuAssaf","Modi","SydneyChako","Jay","RISHABH","TheWhiteCat","FahadAbbadi","SheidaHedayati",
                 "JahongirNarmirzaev","HarshRaj","DanielRosa","Suraj_0000000786","NishantSaini","Akash","ShivaniGoyal",
                 "Michael","Rohit"};
unsigned char blank = 219;
bool printPos(int,int);
std::string strRetrieve(int);

int main(void){
	srand(time(0));
	int r = name[rand() % 62].length();
    std::cout << r << "\n";
    int n = strRetrieve(r).length();;
    std::string s = strRetrieve(r);
    std::cout << s;
    std::cout << "\n\n";

    for (int i = 0; i < 16; i++){
        int k=0;

        std::cout << blank;
		for (int j = 0; j < 38; j++){
            if(k<n){
                printPos(i, j)==true ? std::cout << s[k] : std::cout << blank;
                k++;
            }
            else
                k=0;
		}
        std::cout << blank << "\n";
	}
}
std::string strRetrieve(int no){
    std::string ans;
    bool flag = false;
    do{
        ans = name[rand() % 62];
        if(ans.length()==no)
            flag = true;
    }while(!flag);
    return ans;
}
bool printPos(int row, int col){
	bool temp = false;
	switch (row){
    case 0:
        return false;
	case 1:
		if((col>4 && col<12) || (col>24 && col<32)) temp = true;
        else temp = false;
        break;
	case 2:
		if((col>2 && col<14) || (col>22 && col<34)) temp = true;
        else temp = false;
		break;
	case 3:
		if((col>0 && col<16) || (col>20 && col<36)) temp = true;
        else temp = false;
		break;
	case 4: return true;
	case 5: return true;
	case 6:
		if(col>0 && col<36) temp = true;
		else temp = false;
		break;
	case 7:
		if(col>1 && col<35) temp = true;
		else temp = false;
		break;
	case 8:
		if(col>4 && col<32) temp = true;
		else temp = false;
		break;
	case 9:
		if(col>7 && col<29) temp = true;
		else temp = false;
		break;

	case 10:
		if(col>10 && col<26) temp = true;
		else temp = false;
		break;
	case 11:
		if(col>12 && col<24) temp = true;
		else temp = false;
		break;
    case 12:
		if(col>14 && col<22) temp = true;
		else temp = false;
		break;
	case 13:
		if(col>16 && col<20) temp = true;
		else temp = false;
		break;
	case 14:
		if(col == 18) temp = true;
		else temp = false;
		break;
    case 15:
        return false;
    default:
		temp = false;
	}
	return temp;
}

