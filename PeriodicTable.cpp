#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


using namespace std;

void returnHome();
void number();
void findElements();
void display();
int main();

void display(){
	//system("CLS");
	string choose;
	
	//ROW 1
	string elements = "";
	cout<<"\n											Periodic Table Of Elements\n";
	cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	cout<<"			"<<"|H       |                                                                                                                                               |HE      |\n";
	cout<<"			"<<"|Hydrogen|                                                                                                                                               | Helium |\n";
	cout<<"			"<<"|       1|                                                                                                                                               |       2|\n";
	cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"|Li      |Be      |                                                                                         |B       |C       |N       |O       |F       |Ne      |\n";
	cout<<"			"<<"|Lithium |Berylllium                                                                                        |Boron   |Carbon  |Hitrogen|Oxygen  |Flourine| Neon   |\n";
	cout<<"			"<<"|       3|       4|                                                                                         |       5|       6|       7|       8|       9|      10|\n";
	cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"|Na 	 |Mg      |                                                                                         |Al      |Si      |P       | s      |Ci      |Ar      |\n";
	cout<<"			"<<"| Sodium |Magnesium                                                                                         |Aluminum|Silicon |Phosphorus Sulfur|Chlorine|Argon   |\n";
	cout<<"			"<<"|      11|      12|                                                                                         |      13|      14|      15|      16|      17|      18|\n";
	cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"| K      |Ca      |Sc      |Ti      |V       |Cr      |Mn      |Fe      |Co      |Ni      |Cu      |Zn      |Ga      |Ge      |As      |Se      |Br      |Kr      |\n";
	cout<<"			"<<"|Potassium Calcium|Scandium|Titanium|Vanadium|Chromium|Manganse|Iron    |Cobalt  |Nickel  | Copper |Zinc    |Gallium |Germanium Arsenic|Selanium|Bromine |Krypton |\n";
	cout<<"			"<<"|      19|      20|      21|      22|      23|      24|      25|      26|      27|      28|      29|      30|      31|      32|      33|      34|      35|      36|\n";
	cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"|Rb 	 |Sr  38  |Y       |Zr      |Nb   40 |Mo  42  |Tc  43  |Ru      |Rh   45 |Pd      |Ag      |Cd      |In      |Sn      |Sb      |Te  52  |I       |Xe      |\n";
	cout<<"			"<<"|Rubidium|Stront  |Yttrium |Zircon  |Niobium |Molybde |Technet |Rhodium |Pallad  |Silver  |Cadnium |Indium  |Tin     |Antimony|        |Tellur  | Iodine |Xenon   |\n";
	cout<<"			"<<"|      37|  ium   |      39| ium    |      41| num    | ium    |      44| ium    |      46|      47|      48|      49|      50|      51|  ium   |      53|      54|\n";
	cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"|Cs      |Ba      |        |Hf      |Ta      |W       |Re      |Os      |Ir      |Pt      |Au      |Hg      |Tl      |Pb      |Bi      |Po      |At      |Rn      |\n";
	cout<<"			"<<"|Cesium  |Barium  |        |hafnium |Tantalum|Tungsten|Rhenium |Osmium  |Iridium |Platinum|Gold    |Mercury |Thallium|Lead    |Bismuth |Polonium|Astatine|Radon   |\n";
	cout<<"			"<<"|      55|      56|        |      72|      73|      74|      75|      76|      77|      78|      79|      80|      81|      82|      83|      84|      85|      86|\n";
	cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"|Fr  	 |Ra      |        |Rf  104 |Db      |Sg  106 |Bh      |Hs      |Mt  109 |Ds  110 |Rg  111 |Cn  112 |Nh      |Fl  114 |Mc 115  |Lv  116 |Ts 117  |Og 118  |\n";
	cout<<"			"<<"|Francium|Radium  |        |Ruther  |Dubnium |Seabor  |Bohrium |Hassium |Meitner |Darmstad|Roentge |Coperni |Nihonium|Flerov  |Moscov  |Livermo |Tennes  |Oganes  |\n";
	cout<<"			"<<"|      87|      88|        |fordium |     105| gium   |     107|     108| ium    | tium   | nium   | cium   |     113| ium    | ium    | rium   | sine   | son    |\n";
	cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	cout<<"			"<<"\n\n";
	//ROW9
	cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"                  |La      |Ce      |Pr   59 |Nd      |Pm   61 |Sm      |Eu      |Gd   64 |Tb      |Dy  66  |Ho      |Er      |Tm      |Yb      |Lu      |\n";
	cout<<"			"<<"                  |Lanthanum Cerium |Praseody|Neodymium Promet |Samarium|Europium|Gandoli |Terbium |Dyspro  |Holmium |Erbium  |Thulium |Ytterbi |Lutetium|\n";
	cout<<"			"<<"                  |      57|      58|   mium |      60|  hium  |      62|      63| nium   |      65|  sium  |      67|      68|      69|  um  70|      71|\n";
	cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	cout<<"			"<<"                  |Ac      |Th      |Pa   91 |U       |Np      |Pu      |Am      |Cm      |Bk      |Cf   98 |Se      |Fm      |Md   101|No      |Lr  103 |\n";
	cout<<"			"<<"                  |Actinium|Thorium |Protacti|Uranium |Neptuni |Plutoni |Americi |Curium  |Berkeli |Califor |Einstein|Fermium |Mendeve |Nobelium|Lawren  |\n";
	cout<<"			"<<"                  |      89|      90| nium   |      92| um   93| um   94| um   95|      96| um   97|  nium  | ium  99|     100| lium   |     102| cium   |\n";
	cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
}

void returnHome(){
	//cout<<"hello";
	main();
}

void number(){
	
	display();
	for (int j=1;j<=500;j++){
	string choose;
	cout<<"\n\n			Enter An Atomic Number: ";
	cin>>choose;
	int num = atoi(choose.c_str());
			
	if (num == 0){
		exit (EXIT_FAILURE);
	}
	
	else if ((num == 1) || (choose == "Hydrogen")){	
		cout<<"                                      Element Symbol      ----------- H";
		cout<<"\n                                    Element Name      ----------- Hydrogen";
		cout<<"\n                                    Element Description:"; 
		coutExplosive gas lightest element	";
	}
		
	else if ((num == 2) || (choose == "Helium") || (choose == "He")){
		cout<<"";
	}
	
	else if ((num == 3) || (choose == "Lithium") || (choose == "Li")){
	}
	
	else if ((num == 4) || (choose == "Beryllium")|| (choose == "Be")){
	}
	
	else if ((num == 5) || (choose == "Boron") ){
	}
	
	else if ((num == 6) || (choose == "Carbon")){
	}
	
	else if ((num == 7) || (choose == "Nitrogen")){
	}
	
	else if ((num == 8) || (choose == "Oxygen")){
	}
	
	else if ((num == 9) || (choose == "Fluorine")){
	}
	
	else if ((num == 10) || (choose == "Neon") || (choose == "Ne")){
	}
	
	else if ((num == 11) || (choose == "Sodium") || (choose == "Na")){	
	}
		
	else if ((num == 12) || (choose == "Magnesium") || (choose == "Mg")){
	}
	
	else if ((num == 13) || (choose == "Aluminum") || (choose == "Al")){
	}
	
	else if ((num == 14) || (choose == "Silicon") || (choose == "Si")){
	}
	
	else if ((num == 15) || (choose == "Phosphorus") ){
	}
	
	else if ((num == 16) || (choose == "Sulfur")){
	}
	
	else if ((num == 17) || (choose == "Chlorine") || (choose == "Cl")){
	}
	
	else if ((num == 18) || (choose == "Argon") || (choose == "Ar")){
	}
	
	else if ((num == 19) || (choose == "Potassium")){
	}
	
	else if ((num == 20) || (choose == "Calcium") || (choose == "Ca")){
	}
	
	else if ((num == 21) || (choose == "Scandium") || (choose == "Sc")){	
	}
		
	else if ((num == 22) || (choose == "Titanium") || (choose == "Ti")){
	}
	
	else if ((num == 23) || (choose == "Vanadium")){
	}
	
	else if ((num == 24) || (choose == "Chromium") || (choose == "Cr")){
	}
	
	else if ((num == 25) || (choose == "Manganese") || (choose == "Mn")){
	}
	
	else if ((num == 26) || (choose == "Iron") || (choose == "Fe")){
	}
	
	else if ((num == 27) || (choose == "Cobalt") || (choose == "Co")){
	}
	
	else if ((num == 28) || (choose == "Nickel") || (choose == "Ni")){
	}
	
	else if ((num == 29) || (choose == "Copper") || (choose == "Cu")){
	}
	
	else if ((num == 30) || (choose == "Zinc") || (choose == "Zn")){
	}
	
	else if ((num == 31) || (choose == "Gallium") || (choose == "Ga")){	
	}
		
	else if ((num == 32) || (choose == "Germanium") || (choose == "Ge")){
	}
	
	else if ((num == 33) || (choose == "Arsenic") || (choose == "As")){
	}
	
	else if ((num == 34) || (choose == "Selenium") || (choose == "Se")){
	}
	
	else if ((num == 35) || (choose == "Bromine") || (choose == "Br")){
	}
	
	else if ((num == 36) || (choose == "Krypton") || (choose == "Kr")){
	}
	
	else if ((num == 37) || (choose == "Rubidium") || (choose == "Rb")){
	}
	
	else if ((num == 38) || (choose == "Strontium") || (choose == "Sr")){
	}
	
	else if ((num == 39) || (choose == "Yttrium")){
	}
	
	else if ((num == 40) || (choose == "Zirconium") || (choose == "Zr")){
	}
	
	else if ((num == 41) || (choose == "Niobium") || (choose == "Nb")){	
	}
		
	else if ((num == 42) || (choose == "Molybdenum") || (choose == "Mo")){
	}
	
	else if ((num == 43) || (choose == "Technetium") || (choose == "Tc")){
	}
	
	else if ((num == 44) || (choose == "Ruthenium") || (choose == "Ru")){
	}
	
	else if ((num == 45) || (choose == "Rhodium") || (choose == "Rh")){
	}
	
	else if ((num == 46) || (choose == "Palladium") || (choose == "Pd")){
	}
	
	else if ((num == 47) || (choose == "Silver") || (choose == "Ag")){
	}
	
	else if ((num == 48) || (choose == "Cadium") || (choose == "Cd")){
	}
	
	else if ((num == 49) || (choose == "Indium") || (choose == "In")){
	}
	
	else if ((num == 50) || (choose == "Tin") || (choose == "Sn")){
	}
	
	else if ((num == 51) || (choose == "Antimony") || (choose == "Sn")){	
	}
		
	else if ((num == 52) || (choose == "Tellurium") || (choose == "Sb")){
	}
	
	else if ((num == 53) || (choose == "Iodine")){
	}
	
	else if ((num == 54) || (choose == "Xenon") || (choose == "Xe")){
	}
	
	else if ((num == 55) || (choose == "Cesium") || (choose == "Cs")){
	}
	
	else if ((num == 56) || (choose == "Barium") || (choose == "Ba")){
	}
	
	else if ((num == 57) || (choose == "Lanthanum") || (choose == "La")){
	}
	
	else if ((num == 58) || (choose == "Cerium") || (choose == "Ce")){
	}
	
	else if ((num == 59) || (choose == "Praseodymium") || (choose == "Pr")){
	}
	
	else if ((num == 60) || (choose == "Neodymium") || (choose == "Nd")){
	}
	
	else if ((num == 61) || (choose == "Promethium") || (choose == "Sn")){	
	}
		
	else if ((num == 62) || (choose == "Samarium") || (choose == "Sb")){
	}
	
	else if ((num == 63) || (choose == "Europium")){
	}
	
	else if ((num == 64) || (choose == "Gandolinium") || (choose == "Xe")){
	}
	
	else if ((num == 65) || (choose == "Terbium") || (choose == "Cs")){
	}
	
	else if ((num == 66) || (choose == "Dysprosium") || (choose == "Ba")){
	}
	
	else if ((num == 67) || (choose == "Holmium") || (choose == "La")){
	}
	
	else if ((num == 68) || (choose == "Erbium") || (choose == "Ce")){
	}
	
	else if ((num == 69) || (choose == "Thulium") || (choose == "Pr")){
	}
	
	else if ((num == 70) || (choose == "Ytterbium") || (choose == "Nd")){
	}
	
	else if ((num == 71) || (choose == "Lutetium") || (choose == "Lu")){
	}
	
	else if ((num == 72) || (choose == "hafnium") || (choose == "hf")){
		
	}
	else if ((num == 73) || (choose == "Tantalum") || (choose == "Ta")){
		
	}
	else if ((num == 74) || (choose == "Tungsten")){
		
	}
	else if ((num == 75) || (choose == "Rhenium") || (choose == "Re")){
		
	}
	else if ((num == 76) || (choose == "Osmium") || (choose == "Os")){
		
	}
	else if ((num == 77) || (choose == "Iridium") || (choose == "Ir")){
		
	}
	else if ((num == 78) || (choose == "Platinum") || (choose == "Pt")){
		
	}
	else if ((num == 79) || (choose == "Gold") || (choose == "Au")){
		
	}
	else if ((num == 80) || (choose == "Mercury") || (choose == "Hg")){
		
	}
	else if ((num == 81) || (choose == "Thallium") || (choose == "Tl")){
		
	}
	else if ((num == 82) || (choose == "Lead") || (choose == "Pb")){
		
	}
	else if ((num == 83) || (choose == "Bismuth") || (choose == "Bi")){
		
	}
	else if ((num == 84) || (choose == "Polonium") || (choose == "Po")){
		
	}
	else if ((num == 85) || (choose == "Astatine") || (choose == "At")){
		
	}
	else if ((num == 86) || (choose == "Radon") || (choose == "Rn")){
		
	}
	else if ((num == 87) || (choose == "Francium") || (choose == "Fr")){
		
	}
	else if ((num == 88) || (choose == "Radium") || (choose == "Ra")){
		
	}
	else if ((num == 89) || (choose == "Actinium") || (choose == "Ac")){
		
	}
	else if ((num == 90) || (choose == "Thorium") || (choose == "Th")){
		
	}
	else if ((num == 91) || (choose == "Protactinium") || (choose == "Pa")){
		
	}
	else if ((num == 92) || (choose == "Uranium")){
		
	}
	else if ((num == 93) || (choose == "Neptunium") || (choose == "Np")){
		
	}
	else if ((num == 94) || (choose == "Plutonium") || (choose == "Pu")){
		
	}
	else if ((num == 95) || (choose == "Americium") || (choose == "Am")){
		
	}
	else if ((num == 96) || (choose == "Curium") || (choose == "Cm")){
		
	}
	else if ((num == 97) || (choose == "Berkelium") || (choose == "Bk")){
		
	}
	else if ((num == 98) || (choose == "Californium") || (choose == "Cf")){
		
	}
	else if ((num == 99) || (choose == "Einsteinium") || (choose == "Es")){
		
	}
	else if ((num == 100) || (choose == "Fermium") || (choose == "Fm")){
		
	}
	else if ((num == 101) || (choose == "Mendevelium") || (choose == "Md")){
		
	}
	else if ((num == 102) || (choose == "Nobelium") || (choose == "No")){
		
	}
	else if ((num == 103) || (choose == "Lawrencium") || (choose == "Lr")){
		
	}
	else if ((num == 104) || (choose == "Rutherfordium") || (choose == "Rf")){
		
	}
	else if ((num == 105) || (choose == "Dubnium") || (choose == "Db")){
		
	}
	else if ((num == 106) || (choose == "Seaborgium") || (choose == "Sg")){
		
	}
	else if ((num == 107) || (choose == "Bohrium") || (choose == "Bh")){
		
	}
	else if ((num == 108) || (choose == "Hassium") || (choose == "Hs")){
		
	}
	else if ((num == 109) || (choose == "Meitnerium") || (choose == "Mt")){
		
	}
	else if ((num == 110) || (choose == "Darmstadtium") || (choose == "Ds")){
		
	}
	else if ((num == 111) || (choose == "Roentgenium") || (choose == "Rg")){
		
	}
	else if ((num == 112) || (choose == "Copernicium") || (choose == "Cn")){
		
	}
	else if ((num == 113) || (choose == "Nihonium") || (choose == "Nh")){
		
	}
	else if ((num == 114) || (choose == "Flerovium") || (choose == "Fl")){
		
	}
	else if ((num == 115) || (choose == "Moscovium") || (choose == "Mc")){
		
	}
	else if ((num == 116) || (choose == "Livermorium") || (choose == "Lv")){
		
	}
	else if ((num == 117) || (choose == "Tennessine") || (choose == "Ts")){
		
	}
	else if ((num == 118) || (choose == "Oganesson") || (choose == "Og")){
		
	}
		
	}
}

void findElements(){
	system("CLS");
	string choose;	
	cout<<"\n\n		Enter The First Letter of An Element: ";
	cin>>choose;
	int num = atoi(choose.c_str());
	
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(100000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(100000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(100000);cout<<"			"<<"|H       |                                                                                                                                               |HE      |\n";
	usleep(100000);cout<<"			"<<"|Hydrogen|                                                                                                                                               | Helium |\n";
	usleep(100000);cout<<"			"<<"|       1|                                                                                                                                               |       2|\n";
	usleep(100000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(100000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"|Li      |Be      |                                                                                         |B       |C       |N       |O       |F       |Ne      |\n";
	usleep(100000);cout<<"			"<<"|Lithium |Berylllium                                                                                        |Boron   |Carbon  |Hitrogen|Oxygen  |Flourine| Neon   |\n";
	usleep(100000);cout<<"			"<<"|       3|       4|                                                                                         |       5|       6|       7|       8|       9|      10|\n";
	usleep(100000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(100000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"|Na 	 |Mg      |                                                                                         |Al      |Si      |P       | s      |Ci      |Ar      |\n";
	usleep(100000);cout<<"			"<<"| Sodium |Magnesium                                                                                         |Aluminum|Silicon |Phosphorus Sulfur|Chlorine|Argon   |\n";
	usleep(100000);cout<<"			"<<"|      11|      12|                                                                                         |      13|      14|      15|      16|      17|      18|\n";
	usleep(100000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(100000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"| K      |Ca      |Sc      |Ti      |V       |Cr      |Mn      |Fe      |Co      |Ni      |Cu      |Zn      |Ga      |Ge      |As      |Se      |Br      |Kr      |\n";
	usleep(100000);cout<<"			"<<"|Potassium Calcium|Scandium|Titanium|Vanadium|Chromium|Manganse|Iron    |Cobalt  |Nickel  | Copper |Zinc    |Gallium |Germanium Arsenic|Selanium|Bromine |Krypton |\n";
	usleep(100000);cout<<"			"<<"|      19|      20|      21|      22|      23|      24|      25|      26|      27|      28|      29|      30|      31|      32|      33|      34|      35|      36|\n";
	usleep(100000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(100000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"|Rb 	 |Sr  38  |Y       |Zr      |Nb   40 |Mo  42  |Tc  43  |Ru      |Rh   45 |Pd      |Ag      |Cd      |In      |Sn      |Sb      |Te  52  |I       |Xe      |\n";
	usleep(100000);cout<<"			"<<"|Rubidium|Stront  |Yttrium |Zircon  |Niobium |Molybde |Technet |Rhodium |Pallad  |Silver  |Cadnium |Indium  |Tin     |Antimony|        |Tellur  | Iodine |Xenon   |\n";
	usleep(100000);cout<<"			"<<"|      37|  ium   |      39| ium    |      41| num    | ium    |      44| ium    |      46|      47|      48|      49|      50|      51|  ium   |      53|      54|\n";
	usleep(100000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(100000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"|Cs      |Ba      |        |Hf      |Ta      |W       |Re      |Os      |Ir      |Pt      |Au      |Hg      |Tl      |Pb      |Bi      |Po      |At      |Rn      |\n";
	usleep(100000);cout<<"			"<<"|Cesium  |Barium  |        |hafnium |Tantalum|Tungsten|Rhenium |Osmium  |Iridium |Platinum|Gold    |Mercury |Thallium|Lead    |Bismuth |Polonium|Astatine|Radon   |\n";
	usleep(100000);cout<<"			"<<"|      55|      56|        |      72|      73|      74|      75|      76|      77|      78|      79|      80|      81|      82|      83|      84|      85|      86|\n";
	usleep(100000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(100000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"|Fr  	 |Ra      |        |Rf  104 |Db      |Sg  106 |Bh      |Hs      |Mt  109 |Ds  110 |Rg  111 |Cn  112 |Nh      |Fl  114 |Mc 115  |Lv  116 |Ts 117  |Og 118  |\n";
	usleep(100000);cout<<"			"<<"|Francium|Radium  |        |Ruther  |Dubnium |Seabor  |Bohrium |Hassium |Meitner |Darmstad|Roentge |Coperni |Nihonium|Flerov  |Moscov  |Livermo |Tennes  |Oganes  |\n";
	usleep(100000);cout<<"			"<<"|      87|      88|        |fordium |     105| gium   |     107|     108| ium    | tium   | nium   | cium   |     113| ium    | ium    | rium   | sine   | son    |\n";
	usleep(100000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(100000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(100000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"                  |La      |Ce      |Pr   59 |Nd      |Pm   61 |Sm      |Eu      |Gd   64 |Tb      |Dy  66  |Ho      |Er      |Tm      |Yb      |Lu      |\n";
	usleep(100000);cout<<"			"<<"                  |Lanthanum Cerium |Praseody|Neodymium Promet |Samarium|Europium|Gandoli |Terbium |Dyspro  |Holmium |Erbium  |Thulium |Ytterbi |Lutetium|\n";
	usleep(100000);cout<<"			"<<"                  |      57|      58|   mium |      60|  hium  |      62|      63| nium   |      65|  sium  |      67|      68|      69|  um  70|      71|\n";
	usleep(100000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(100000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(100000);cout<<"			"<<"                  |Ac      |Th      |Pa   91 |U       |Np      |Pu      |Am      |Cm      |Bk      |Cf   98 |Se      |Fm      |Md   101|No      |Lr  103 |\n";
	usleep(100000);cout<<"			"<<"                  |Actinium|Thorium |Protacti|Uranium |Neptuni |Plutoni |Americi |Curium  |Berkeli |Califor |Einstein|Fermium |Mendeve |Nobelium|Lawren  |\n";
	usleep(100000);cout<<"			"<<"                  |      89|      90| nium   |      92| um   93| um   94| um   95|      96| um   97|  nium  | ium  99|     100| lium   |     102| cium   |\n";
	usleep(100000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
		
		if ((choose == "a") || (choose == "A")){
		
	//CLRSCR
	usleep(10000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |Al      |        |        |        |        |Ar      |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                          Aluminum         |        |        |          Argon \n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |      13|        |        |        |        |      18|\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |As      |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |         Arsenic          |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |      33|        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |Sb      |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |         Antimony         |        |        |        | \n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |      51|        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |At      |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |         Astatine         |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |      85|        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |Ac      |        |        |        |        |        |Am      |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                   Actinium         |        |        |        |         Americium        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |      89|        |        |        |        |        |      95|        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Actinium     ------     Ac      ------      89";
	cout<<"\n                                                                     Aluminum     ------     Al      ------      13";	
	cout<<"\n                                                                     Americium    ------     Am      ------      95";
	cout<<"\n                                                                     Antimony     ------     Sb      ------      51";
	cout<<"\n                                                                     Argon        ------     Ar      ------      11";
	cout<<"\n                                                                     Arsenic      ------     As      ------      33";
	cout<<"\n                                                                     Astatine     ------     At      ------      85";
		
		
	}
	
	else if ((choose == "b") || (choose == "B")){
	
	//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |Be      |                                                                                         |B       |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|         Beryllium                                                                                           Boron           |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |       4|                                                                                         |       5|        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |Br      |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |         Bromine          |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |      35|        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |Bi      |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |         Bismuth          |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |      83|        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |Bh      |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |         Bohrium          |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |     107|        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |Ba      |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                   Barium           |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |      56|        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |Bk      |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |         Berkelium        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |      97|        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Barium       ------     Ba      ------      56";
	cout<<"\n                                                                     Berkelium    ------     Bk      ------      97";	
	cout<<"\n                                                                     Beryllium    ------     Be      ------      4";
	cout<<"\n                                                                     Bismuth      ------     Bi      ------      83";
	cout<<"\n                                                                     Bohrium      ------     Bh      ------      107";
	cout<<"\n                                                                     Boron        ------     B       ------      5";
	cout<<"\n                                                                     Bromine      ------     Br      ------      35";		
		
	}
	
	else if ((choose == "c") || (choose == "C")){
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |C       |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |          Carbon          |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |       6|        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |Cl      |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |         Chlorine         |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |      17|        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |Ca      |        |        |        |Cr      |        |        |Co      |        |Cu      |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|         Calcium          |        |         Chromium         |          Cobalt            Copper          |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |      20|        |        |        |      24|        |        |      27|        |      29|        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |Cd      |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |         Cadmium          |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |      48|        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|Cs      |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"  Cesium          |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|      55|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |Cn      |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        Copernicium                |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |     112|        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |Ce      |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |          Cerium          |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |      58|        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |Cm      |        |Cf      |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |          Curium          Californium                |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |      96|        |      98|        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Cadmium        ------     Cd       ------      48";
	cout<<"\n                                                                     Calcium        ------     Ca       ------      20";	
	cout<<"\n                                                                     Californium    ------     Cf       ------      98 ";
	cout<<"\n                                                                     Carbon         ------     C        ------      6";
	cout<<"\n                                                                     Cerium         ------     Ce       ------      58";
	cout<<"\n                                                                     Cesium         ------     Cs       ------      55";
	cout<<"\n                                                                     Chlorine       ------     Cl       ------      17";	
	cout<<"\n                                                                     Chromium       ------     Cr       ------      24";	
	cout<<"\n                                                                     Cobalt         ------     Co       ------      27";	
	cout<<"\n                                                                     Copernicium    ------     Cn       ------      112";	
	cout<<"\n                                                                     Copper         ------     Cu       ------      29";	
	cout<<"\n                                                                     Curium         ------     Cm       ------      96";	
	
	}
	
	else if ((choose == "d") || (choose == "D")){
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |Db      |        |        |        |        |Ds      |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |         Dubnium          |        |        |        Darmstadtium               |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |     105|        |        |        |        |     110|        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |Ds      |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        Dysprosium        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |      66|        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Darmstadtium   ------     Ds        ------      110";
	cout<<"\n                                                                     Dubnium        ------     Db        ------      105";	
	cout<<"\n                                                                     Dysprosium     ------     Dy        ------      66 ";
	
	}
	
	else if ((choose == "e") || (choose == "E")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |Eu      |        |        |        |        |Er      |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |         Europium         |        |        |          Erbium          |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |      63|        |        |        |        |      68|        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |Es      |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        Einsteinium                |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |      99|        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Einsteinium    ------     Es         ------      99";
	cout<<"\n                                                                     Erbium         ------     Er         ------      68";	
	cout<<"\n                                                                     Europium       ------     Eu         ------      63 ";
	
	}
	
	else if((choose == "f") || (choose == "F")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |F       |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |         Fluorine         |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |       9|        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|Fr  	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<" Francium         |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|      87|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |Fm      |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |         Fermium          |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |     100|        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Fermium        ------     Fm        ------      100";
	cout<<"\n                                                                     Fluorine       ------     F         ------      9";	
	cout<<"\n                                                                     Francium       ------     Fr        ------      87 ";
	
		
	}
	
	else if((choose == "g") || (choose == "G")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |Ga      |Ge      |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |         Gallium  Germanium        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |      31|      32|        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |Au      |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |          Gold            |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |      79|        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |Gd      |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |         Gadolinium       |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |      64|        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Gadolinium     ------     Gd       ------      64";
	cout<<"\n                                                                     Gallium        ------     Ga       ------      31";	
	cout<<"\n                                                                     Germanium      ------     Ge       ------      32 ";
	cout<<"\n                                                                     Gold           ------     Au       ------      79";
	
		
	}
	
	else if((choose == "h") || (choose == "H")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|H       |                                                                                                                                               |He      |\n";
	usleep(10000);cout<<"			"<<" Hydrogen                                                                                                                                                  Helium |\n";
	usleep(10000);cout<<"			"<<"|       1|                                                                                                                                               |       2|\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |Hf      |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |         Hafnium          |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |      72|        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |Hs      |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |         Hassium          |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |     108|        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |Ho      |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |         Holmium          |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |      67|        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Hafnium        ------     Hf       ------      72";
	cout<<"\n                                                                     Hassium        ------     Hs       ------      108";	
	cout<<"\n                                                                     Helium         ------     He       ------      2 ";
	cout<<"\n                                                                     Holmium        ------     Ho       ------      67";	
	cout<<"\n                                                                     Hydrogen       ------     H        ------      1";	
	
		
	}
	
	else if((choose == "i") || (choose == "I")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |Fe      |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |           Iron           |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |      26|        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |In      |        |        |        |I       |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |          Indium          |        |          Iodine          |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |      49|        |        |        |      53|        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |Ir      |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |         Iridium          |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |      77|        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Indium      ------     In       ------      49";
	cout<<"\n                                                                     Iodine      ------     I        ------      53";	
	cout<<"\n                                                                     Iridium     ------     Ir       ------      77 ";
	cout<<"\n                                                                     Iron        ------     Fe       ------      26";
	
		
	}
	
	else if ((choose == "j") || (choose == "J")){
		cout<<"		No Elements Found!";
	}
	
	else if((choose == "k") || (choose == "K")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |Kr      |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |         Krypton\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |      36|\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Krypton      ------     Kr       ------      36";
	
		
	}
	
	else if((choose == "l") || (choose == "L")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|Li      |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<" Lithium          |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|       3|        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |Pb      |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |          Lead            |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |      82|        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |La      |        |        |        |        |        |        |        |        |        |        |        |        |        |Lu      |\n";
	usleep(10000);cout<<"			"<<"                   Lanthanum        |        |        |        |        |        |        |        |        |        |        |        |         Lutetium\n";
	usleep(10000);cout<<"			"<<"                  |      57|        |        |        |        |        |        |        |        |        |        |        |        |        |      71|\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |Lr      |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        Lawrencium \n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |     103|\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Lanthanum   ------     La       ------      57";
	cout<<"\n                                                                     Lawrencium  ------     Lr       ------      103";	
	cout<<"\n                                                                     Lead        ------     Pb       ------      82 ";
	cout<<"\n                                                                     Lithium     ------     Li       ------      3";
	cout<<"\n                                                                     Lutetium    ------     Lu       ------      71";
	
		
	}
	
	else if((choose == "m") || (choose == "M")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |Mg      |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|         Magnesium                                                                                                  |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |      12|                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |Mn      |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        Manganese         |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |      25|        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |Mo      |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        Molybdenum        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |      42|        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |Hg      |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |         Mercury          |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |      80|        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |Mt      |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        Meitnerium        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |     109|        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |Md      |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        Mendelevium       |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |     101|        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Magnesium   ------     Mg       ------      12";
	cout<<"\n                                                                     Manganese   ------     Mn       ------      25";	
	cout<<"\n                                                                     Meitnerium  ------     Mt       ------      109";
	cout<<"\n                                                                     Mendelevium ------     Md       ------      101";
	cout<<"\n                                                                     Mercury     ------     Hg       ------      80";
	cout<<"\n                                                                     Molybdenum  ------     Mo       ------      42";
	
		
	}
	
	else if((choose == "n") || (choose == "N")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |N       |        |        |Ne      |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |         Nitrogen         |           Neon   \n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |       7|        |        |      10|\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |Ni      |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |          Nickel          |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |      28|        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |Nb      |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |         Niobium          |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |      41|        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |Nd      |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        Neodymium         |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |      60|        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |Np      |        |        |        |        |        |        |        |        |No      |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        Neptunium         |        |        |        |        |        |        |         Nobelium         |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |      93|        |        |        |        |        |        |        |        |     102|        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Neodymium   ------     Nd        ------      60";
	cout<<"\n                                                                     Neon        ------     Ne        ------      10";	
	cout<<"\n                                                                     Neptunium   ------     Np        ------      93";
	cout<<"\n                                                                     Nickel      ------     Ni        ------      28";
	cout<<"\n                                                                     Niobium     ------     Nb        ------      41";
	cout<<"\n                                                                     Nitrogen    ------     N         ------      7";
	cout<<"\n                                                                     Nobelium    ------     No        ------      102";
	
		
	}
	
	else if((choose == "o") || (choose == "O")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |O       |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |          Oxygen          |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |       8|        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |Os      |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |         Osmium           |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |      76|        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |Uuo     |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |         Oganesson\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |     118|\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Oganesson   ------     Uuo      ------      118";
	cout<<"\n                                                                     Osmium      ------     Os       ------      76";	
	cout<<"\n                                                                     Oxygen      ------     O        ------      8";
	
		
	}
	
	else if((choose == "p") || (choose == "P")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |P       |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        Phosphorus        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |      15|        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|K       |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<" Potassium        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|      19|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |Pd      |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        Palladium         |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |      46|        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |Pt      |        |        |        |        |        |Po      |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |         Platinum         |        |        |        |         Polonium         |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |      78|        |        |        |        |        |      84|        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |Pr      |        |Pm      |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        Praseodymium      Promethium        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |      59|        |      61|        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |Pa      |        |        |Pu      |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        Protactinium      |        Plutonium         |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |      91|        |        |      94|        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Palladium     ------     Pd       ------      46";
	cout<<"\n                                                                     Phosphorus    ------     P        ------      15";	
	cout<<"\n                                                                     Platinum      ------     Pt       ------      78";
	cout<<"\n                                                                     Plutonium     ------     Pu       ------      94";
	cout<<"\n                                                                     Polonium      ------     Po       ------      84";	
	cout<<"\n                                                                     Potassium     ------     K        ------      19";
	cout<<"\n                                                                     Praseodymium  ------     Pr       ------      59";
	cout<<"\n                                                                     Promethium    ------     Pm       ------      61";	
	cout<<"\n                                                                     Protactinium  ------     Pa       ------      91";	
	
		
		
	}
	
	else if ((choose == "q") || (choose == "Q")){
		cout<<"			No Elements Found!";
	}
	
	else if((choose == "r") || (choose == "R")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|Rb 	 |        |        |        |        |        |        |Ru      |Rh      |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<" Rubidium         |        |        |        |        |        Ruthenium  Rhodium         |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|      37|        |        |        |        |        |        |      44|      45|        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |Re      |        |        |        |        |        |        |        |        |        |        |Rn      |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |         Rhenium          |        |        |        |        |        |        |        |        |          Radon   \n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |      75|        |        |        |        |        |        |        |        |        |        |      86|\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |Ra      |        |Rf      |        |        |        |        |        |        |Rg      |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|         Radium           Rutherfordium     |        |        |        |        |        Roentgenium       |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |      88|        |     104|        |        |        |        |        |        |     111|        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Radium        ------     Ra       ------      88";
	cout<<"\n                                                                     Radon         ------     Rn       ------      86";	
	cout<<"\n                                                                     Rhenium       ------     Re       ------      75";
	cout<<"\n                                                                     Rhodium       ------     Rh       ------      45";
	cout<<"\n                                                                     Roentgenium   ------     Rg       ------      111";	
	cout<<"\n                                                                     Rubidium      ------     Rb       ------      37";
	cout<<"\n                                                                     Ruthenium     ------     Ru       ------      44";
	cout<<"\n                                                                     Rutherfordium ------     Rf       ------      104";	
	
		
	}
	
	else if((choose == "s") || (choose == "S")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|Na 	 |        |                                                                                         |        |Si      |        |S       |        |        |\n";
	usleep(10000);cout<<"			"<<"  Sodium          |                                                                                         |         Silicon            Sulfur          |        |\n";
	usleep(10000);cout<<"			"<<"|      11|        |                                                                                         |        |      14|        |      16|        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |Sc      |        |        |        |        |        |        |        |        |        |        |        |        |Se      |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |         Scandium         |        |        |        |        |        |        |        |        |        |        |         Selenium         |        | \n";
	usleep(10000);cout<<"			"<<"|        |        |      21|        |        |        |        |        |        |        |        |        |        |        |        |      34|        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |Sr      |        |        |        |        |        |        |        |        |Ag      |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|         Strontium        |        |        |        |        |        |        |          Silver          |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |      38|        |        |        |        |        |        |        |        |      47|        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |Sg      |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        Seaborgium        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |     104|        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |Sm      |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |         Samarium         |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |      62|        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Samarium      ------     Sm        ------      62";
	cout<<"\n                                                                     Scandium      ------     Sc        ------      21";	
	cout<<"\n                                                                     Seaborgium    ------     Sg        ------      106";
	cout<<"\n                                                                     Selenium      ------     Se        ------      34";
	cout<<"\n                                                                     Silicon       ------     Si        ------      14";	
	cout<<"\n                                                                     Silver        ------     Ag        ------      47";
	cout<<"\n                                                                     Sodium        ------     Na        ------      11";
	cout<<"\n                                                                     Strontium     ------     Sr        ------      38";
	cout<<"\n                                                                     Sulfur        ------     S         ------      16";
		
	}
	
	else if((choose == "t") || (choose == "T")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |Ti      |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |         Titanium         |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |      22|        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |Tc      |        |        |        |        |        |        |Sn      |        |Te      |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        Technetium        |        |        |        |        |           Tin            Tellurium         |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |      43|        |        |        |        |        |        |      50|        |      52|        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |Ta      |W       |        |        |        |        |        |        |Tl      |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |         Tantalum  Tungsten        |        |        |        |        |         Thallium         |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |      73|      74|        |        |        |        |        |        |      81|        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |Tb      |        |        |        |Tm      |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |         Terbium          |        |         Thulium          |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |      65|        |        |        |      69|        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |Th      |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |         Thorium          |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |      90|        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Tantalum      ------     Ta      ------      73";
	cout<<"\n                                                                     Technetium    ------     Tc      ------      43";	
	cout<<"\n                                                                     Tellurium     ------     Te      ------      52";
	cout<<"\n                                                                     Terbium       ------     Tb      ------      65";
	cout<<"\n                                                                     Thallium      ------     Tl      ------      81";	
	cout<<"\n                                                                     Thorium       ------     Th      ------      90";
	cout<<"\n                                                                     Thulium       ------     Tm      ------      69";
	cout<<"\n                                                                     Tin           ------     Sn      ------      50";
	cout<<"\n                                                                     Titanium      ------     Ti      ------      22";
	cout<<"\n                                                                     Tungsten      ------     W       ------      74";
	
		
	}
	
	else if((choose == "u") || (choose == "U")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |Uub     |Uut     |Uuq 114 |Uup  115|Uuh 116 |Uus 117 |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        Ununbium  Ununtrium Ununqu  Ununpen  Ununhe   Ununsep          |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |     112|     113| adium  |   tium |   xium |  tium  |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |U       |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |         Uranium          |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |      92|        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Ununbium      ------     Uub      ------      112";
	cout<<"\n                                                                     Ununhexium    ------     Uuh      ------      116";	
	cout<<"\n                                                                     Ununpentium   ------     Uup      ------      115";
	cout<<"\n                                                                     Ununquadium   ------     Uuq      ------      114";
	cout<<"\n                                                                     Ununseptium   ------     Uus      ------      117";	
	cout<<"\n                                                                     Ununtrium     ------     Uut      ------      113";
	cout<<"\n                                                                     Uranium       ------     U        ------      92";
	
		
	}
	
	else if((choose == "v") || (choose == "V")){
		
		//CLRSCR
	usleep(700000);
	system("CLS");
	system("Color 0A");	
	//ROW 1
	string elements = "";
	usleep(10000);cout<<"\n											Periodic Table Of Elements\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|        |                                                                                                                                               |        |\n";
	usleep(10000);cout<<"			"<<"|--------|                                                                                                                                               |--------|\n";	
	//ROW 2
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 3
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |                                                                                         |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|                                                                                         |--------|--------|--------|--------|--------|--------|\n";	
	//ROW 4
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |v       |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |         Vanadium         |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |      23|        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 5	
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|   	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	//ROW 6
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 7
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"|    	 |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"|--------|--------|        |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	//ROW 8
	usleep(10000);cout<<"			"<<"\n\n";
	//ROW9
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";		
	//ROW 10
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |\n";
	usleep(10000);cout<<"			"<<"                  |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n";	
	
	cout<<"\n\n                                                                 Elements:           Symbols:        Atomic Num:";
	cout<<"\n                                                                     Vanadium      ------     V      ------      23";
	
		
	}
	
	else if ((choose == "w") || (choose == "W")){
		cout<<"			No Elements Found!";
	}
	
	else if ((choose == "x") || (choose == "X")){
		cout<<"			No Elements Found!";
	}
	
	else if ((choose == "y") || (choose == "Y")){
		cout<<"			No Elements Found!";
	}
	
	else if ((choose == "z") || (choose == "Z")){
		cout<<"			No Elements Found!";
	}
	
	int home_button;
	cout<<"\n\n			Enter '1' if you wish to proceed or press any key to exit: ";
	cin>>home_button;
	if (home_button == 1){
			findElements();		
	}
	else {
		cout<<"Thank You!";
	}
}

int main() {
	system("CLS");
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	usleep(100000);cout<<"\n\n			H";usleep(100000);cout<<"E";usleep(100000);cout<<"L";
	usleep(100000);cout<<"L";usleep(100000);cout<<"O";usleep(100000);cout<<" A";
	usleep(100000);cout<<"N";usleep(100000);cout<<"D";usleep(100000);cout<<" W";
	usleep(100000);cout<<"E";usleep(100000);cout<<"L";usleep(100000);cout<<"C";
	usleep(100000);cout<<"O";usleep(100000);cout<<"M";usleep(100000);cout<<"E";
	usleep(100000);cout<<" T";usleep(100000);cout<<"O ";
	usleep(100000);cout<<"P";usleep(100000);cout<<"E";usleep(100000);cout<<"R";
	usleep(100000);cout<<"I";usleep(100000);cout<<"O";usleep(100000);cout<<"D";
	usleep(100000);cout<<"I";usleep(100000);cout<<"C";usleep(100000);cout<<" T";
	usleep(100000);cout<<"A";usleep(100000);cout<<"B";usleep(100000);cout<<"L";
	usleep(100000);cout<<"E";usleep(100000);cout<<" O";usleep(100000);cout<<"F";
	usleep(100000);cout<<" E";usleep(100000);cout<<"L";usleep(100000);cout<<"E";
	usleep(100000);cout<<"M";usleep(100000);cout<<"E";usleep(100000);cout<<"N";
	usleep(100000);cout<<"T";usleep(100000);cout<<"S";usleep(100000);cout<<" P";
	usleep(100000);cout<<"R";usleep(100000);cout<<"O";usleep(100000);cout<<"G";
	usleep(100000);cout<<"R";usleep(100000);cout<<"A";usleep(100000);cout<<"M\n\n";
	
	
	string home;
	usleep(100000);cout<<"		Enter ";
	usleep(100000);cout<<"'";usleep(100000);cout<<"*";usleep(100000);cout<<"' ";
	usleep(100000);cout<<"to show all Elements or ";
	usleep(100000);cout<<"'";usleep(100000);cout<<"1";usleep(100000);cout<<"'";
	usleep(100000);cout<<" to locate Elements: ";
	cin>>home;
	int home1 = atoi(home.c_str());
	if (home == "*"){
		number();
	}
	
	else if (home1 == 1){
		findElements();
	}
	
	else {
		cout<<"Invalid!";
	}
	return 0;
}
