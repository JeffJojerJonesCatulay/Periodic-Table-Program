#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main() {
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	//CLRSCR
	usleep(700000);
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
	usleep(100000);cout<<"			"<<"| Sodium |Magnesium |                                                                                       |Aluminum|Silicon |Phosphorus Sulfur|Chlorine|Argon   |\n";
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
	
	
	return 0;
}
