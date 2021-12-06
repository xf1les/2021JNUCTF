#include <iostream>
#include <vector>
#include <string>
#include <map>

// cefe4cd4-04e8-473a-8403-c0f9c0cef484
// 2805566777, 2124908670, 4091444793, 3052633618, 1933243317, 2128507891, 2816380330, 2816386873, 2373891454

uint8_t bits_change(uint8_t raw){
    return ~((raw << 4) | (raw >> 4));
}

int main() {
    std::string s;
    std::vector<uint32_t> buf;
    std::vector<uint32_t> buf2 = {2805566777, 2124908670, 4091444793, 3052633618, 1933243317, 2128507891, 2816380330, 2816386873, 2373891454};
    std::map<uint8_t, uint8_t> table = {{0, 46}, {1, 125}, {2, 197}, {3, 29}, {4, 150}, {5, 186}, {6, 74}, {7, 174}, {8, 17}, {9, 179}, {10, 33}, {11, 230}, {12, 110}, {13, 187}, {14, 27}, {15, 205}, {16, 203}, {17, 52}, {18, 221}, {19, 102}, {20, 183}, {21, 91}, {22, 148}, {23, 65}, {24, 90}, {25, 54}, {26, 137}, {27, 122}, {28, 233}, {29, 96}, {30, 70}, {31, 251}, {32, 19}, {33, 16}, {34, 134}, {35, 220}, {36, 191}, {37, 114}, {38, 95}, {39, 24}, {40, 7}, {41, 237}, {42, 216}, {43, 162}, {44, 164}, {45, 243}, {46, 25}, {47, 32}, {48, 242}, {49, 169}, {50, 38}, {51, 72}, {52, 97}, {53, 107}, {54, 101}, {55, 84}, {56, 234}, {57, 212}, {58, 225}, {59, 5}, {60, 12}, {61, 43}, {62, 14}, {63, 176}, {64, 47}, {65, 99}, {66, 48}, {67, 199}, {68, 85}, {69, 210}, {70, 133}, {71, 82}, {72, 214}, {73, 228}, {74, 156}, {75, 139}, {76, 0}, {77, 23}, {78, 145}, {79, 40}, {80, 198}, {81, 178}, {82, 50}, {83, 79}, {84, 103}, {85, 106}, {86, 51}, {87, 2}, {88, 45}, {89, 75}, {90, 215}, {91, 238}, {92, 154}, {93, 184}, {94, 226}, {95, 173}, {96, 208}, {97, 211}, {98, 73}, {99, 135}, {100, 6}, {101, 36}, {102, 192}, {103, 161}, {104, 15}, {105, 194}, {106, 92}, {107, 10}, {108, 170}, {109, 111}, {110, 56}, {111, 249}, {112, 223}, {113, 138}, {114, 9}, {115, 132}, {116, 146}, {117, 63}, {118, 94}, {119, 67}, {120, 155}, {121, 68}, {122, 62}, {123, 3}, {124, 181}, {125, 41}, {126, 190}, {127, 26}, {128, 151}, {129, 13}, {130, 118}, {131, 188}, {132, 207}, {133, 105}, {134, 189}, {135, 60}, {136, 80}, {137, 163}, {138, 88}, {139, 4}, {140, 18}, {141, 209}, {142, 244}, {143, 34}, {144, 253}, {145, 49}, {146, 147}, {147, 182}, {148, 123}, {149, 61}, {150, 20}, {151, 22}, {152, 157}, {153, 141}, {154, 204}, {155, 64}, {156, 159}, {157, 28}, {158, 152}, {159, 158}, {160, 98}, {161, 89}, {162, 124}, {163, 239}, {164, 168}, {165, 231}, {166, 255}, {167, 131}, {168, 227}, {169, 57}, {170, 86}, {171, 247}, {172, 100}, {173, 248}, {174, 109}, {175, 172}, {176, 165}, {177, 246}, {178, 241}, {179, 121}, {180, 83}, {181, 218}, {182, 177}, {183, 93}, {184, 112}, {185, 136}, {186, 144}, {187, 236}, {188, 126}, {189, 180}, {190, 142}, {191, 37}, {192, 195}, {193, 224}, {194, 160}, {195, 59}, {196, 143}, {197, 185}, {198, 196}, {199, 113}, {200, 120}, {201, 167}, {202, 35}, {203, 235}, {204, 115}, {205, 66}, {206, 108}, {207, 229}, {208, 245}, {209, 1}, {210, 53}, {211, 117}, {212, 171}, {213, 166}, {214, 39}, {215, 250}, {216, 81}, {217, 78}, {218, 140}, {219, 130}, {220, 104}, {221, 31}, {222, 69}, {223, 217}, {224, 175}, {225, 193}, {226, 11}, {227, 128}, {228, 77}, {229, 153}, {230, 254}, {231, 42}, {232, 149}, {233, 58}, {234, 55}, {235, 119}, {236, 116}, {237, 200}, {238, 129}, {239, 240}, {240, 76}, {241, 219}, {242, 201}, {243, 8}, {244, 202}, {245, 21}, {246, 206}, {247, 87}, {248, 30}, {249, 127}, {250, 213}, {251, 44}, {252, 222}, {253, 232}, {254, 252}, {255, 71}};
    uint8_t a, b, c, d;

    std::cin >> s;
    if(s.length() != 36){
        exit(0);
    }

    for(int i=0;i<s.length();i+=4){
        a = table[bits_change((uint8_t)s[i])];
        b = table[bits_change((uint8_t)s[i+1])];
        c = table[bits_change((uint8_t)s[i+2])];
        d = table[bits_change((uint8_t)s[i+3])];

        buf.push_back((a<<24)|(b<<16)|(c<<8)|d);
    }

    if(std::equal(buf.begin(), buf.end(), buf2.begin())){
        std::cout << "you find it, flag is flag{" + s + "}" << std::endl;
    }
    else{
        std::cout << "try again" << std::endl;
    }
}