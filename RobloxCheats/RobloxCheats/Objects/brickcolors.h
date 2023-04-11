
typedef struct
{
    char* name;
    int r;
    int g;
    int b;
}
rbx_brickcolor_info_t;

/**
Run this code in the browser console on the official brickcolors list of roblox: https://create.roblox.com/docs/reference/engine/datatypes/BrickColor
 */

/**
 
var __c_code = "static rbx_brickcolor_info* brickcolors[4096];\n"
var _tr = document.getElementsByClassName("MuiTableBody-root")[0]
for (var i = 0 ; i < _tr.childElementCount ; i++)
{
var _te = _tr.childNodes[i];
var __name = _te.childNodes[1].innerText
var __idx = _te.childNodes[2].innerText
var __color = _te.childNodes[3].innerText
__color = __color.replace("[", "")
__color = __color.replace("]", "")
__color = __color.replace(" ", "")
var __colors = __color.split(",");
var __r = __colors[0];
var __g = __colors[1];
var __b = __colors[2];
__c_code += "brickcolors[" + __idx + "].name = \"" + __name + "\";\n"
__c_code += "brickcolors[" + __idx + "].r = " + __r + ";\n"
__c_code += "brickcolors[" + __idx + "].g = " + __g + ";\n"
__c_code += "brickcolors[" + __idx + "].b = " + __b + ";\n"
}
console.log(__c_code)
 
 */

rbx_brickcolor_info_t rbx_brick_color_index(int brickcolor_num)
{
    static rbx_brickcolor_info_t brickcolors[4096];
    static char ran_once = false; //Avoid the constant memory-indexing
    if (ran_once == false)
    {
        ran_once = true;
        brickcolors[1].name = "White";
        brickcolors[1].r = 242;
        brickcolors[1].g = 243;
        brickcolors[1].b =  243;
        brickcolors[2].name = "Grey";
        brickcolors[2].r = 161;
        brickcolors[2].g = 165;
        brickcolors[2].b =  162;
        brickcolors[3].name = "Light yellow";
        brickcolors[3].r = 249;
        brickcolors[3].g = 233;
        brickcolors[3].b =  153;
        brickcolors[5].name = "Brick yellow";
        brickcolors[5].r = 215;
        brickcolors[5].g = 197;
        brickcolors[5].b =  154;
        brickcolors[6].name = "Light green (Mint)";
        brickcolors[6].r = 194;
        brickcolors[6].g = 218;
        brickcolors[6].b =  184;
        brickcolors[9].name = "Light reddish violet";
        brickcolors[9].r = 232;
        brickcolors[9].g = 186;
        brickcolors[9].b =  200;
        brickcolors[11].name = "Pastel Blue";
        brickcolors[11].r = 128;
        brickcolors[11].g = 187;
        brickcolors[11].b =  219;
        brickcolors[12].name = "Light orange brown";
        brickcolors[12].r = 203;
        brickcolors[12].g = 132;
        brickcolors[12].b =  66;
        brickcolors[18].name = "Nougat";
        brickcolors[18].r = 204;
        brickcolors[18].g = 142;
        brickcolors[18].b =  105;
        brickcolors[21].name = "Bright red";
        brickcolors[21].r = 196;
        brickcolors[21].g = 40;
        brickcolors[21].b =  28;
        brickcolors[22].name = "Med. reddish violet";
        brickcolors[22].r = 196;
        brickcolors[22].g = 112;
        brickcolors[22].b =  160;
        brickcolors[23].name = "Bright blue";
        brickcolors[23].r = 13;
        brickcolors[23].g = 105;
        brickcolors[23].b =  172;
        brickcolors[24].name = "Bright yellow";
        brickcolors[24].r = 245;
        brickcolors[24].g = 205;
        brickcolors[24].b =  48;
        brickcolors[25].name = "Earth orange";
        brickcolors[25].r = 98;
        brickcolors[25].g = 71;
        brickcolors[25].b =  50;
        brickcolors[26].name = "Black";
        brickcolors[26].r = 27;
        brickcolors[26].g = 42;
        brickcolors[26].b =  53;
        brickcolors[27].name = "Dark grey";
        brickcolors[27].r = 109;
        brickcolors[27].g = 110;
        brickcolors[27].b =  108;
        brickcolors[28].name = "Dark green";
        brickcolors[28].r = 40;
        brickcolors[28].g = 127;
        brickcolors[28].b =  71;
        brickcolors[29].name = "Medium green";
        brickcolors[29].r = 161;
        brickcolors[29].g = 196;
        brickcolors[29].b =  140;
        brickcolors[36].name = "Lig. Yellowich orange";
        brickcolors[36].r = 243;
        brickcolors[36].g = 207;
        brickcolors[36].b =  155;
        brickcolors[37].name = "Bright green";
        brickcolors[37].r = 75;
        brickcolors[37].g = 151;
        brickcolors[37].b =  75;
        brickcolors[38].name = "Dark orange";
        brickcolors[38].r = 160;
        brickcolors[38].g = 95;
        brickcolors[38].b =  53;
        brickcolors[39].name = "Light bluish violet";
        brickcolors[39].r = 193;
        brickcolors[39].g = 202;
        brickcolors[39].b =  222;
        brickcolors[40].name = "Transparent";
        brickcolors[40].r = 236;
        brickcolors[40].g = 236;
        brickcolors[40].b =  236;
        brickcolors[41].name = "Tr. Red";
        brickcolors[41].r = 205;
        brickcolors[41].g = 84;
        brickcolors[41].b =  75;
        brickcolors[42].name = "Tr. Lg blue";
        brickcolors[42].r = 193;
        brickcolors[42].g = 223;
        brickcolors[42].b =  240;
        brickcolors[43].name = "Tr. Blue";
        brickcolors[43].r = 123;
        brickcolors[43].g = 182;
        brickcolors[43].b =  232;
        brickcolors[44].name = "Tr. Yellow";
        brickcolors[44].r = 247;
        brickcolors[44].g = 241;
        brickcolors[44].b =  141;
        brickcolors[45].name = "Light blue";
        brickcolors[45].r = 180;
        brickcolors[45].g = 210;
        brickcolors[45].b =  228;
        brickcolors[47].name = "Tr. Flu. Reddish orange";
        brickcolors[47].r = 217;
        brickcolors[47].g = 133;
        brickcolors[47].b =  108;
        brickcolors[48].name = "Tr. Green";
        brickcolors[48].r = 132;
        brickcolors[48].g = 182;
        brickcolors[48].b =  141;
        brickcolors[49].name = "Tr. Flu. Green";
        brickcolors[49].r = 248;
        brickcolors[49].g = 241;
        brickcolors[49].b =  132;
        brickcolors[50].name = "Phosph. White";
        brickcolors[50].r = 236;
        brickcolors[50].g = 232;
        brickcolors[50].b =  222;
        brickcolors[100].name = "Light red";
        brickcolors[100].r = 238;
        brickcolors[100].g = 196;
        brickcolors[100].b =  182;
        brickcolors[101].name = "Medium red";
        brickcolors[101].r = 218;
        brickcolors[101].g = 134;
        brickcolors[101].b =  122;
        brickcolors[102].name = "Medium blue";
        brickcolors[102].r = 110;
        brickcolors[102].g = 153;
        brickcolors[102].b =  202;
        brickcolors[103].name = "Light grey";
        brickcolors[103].r = 199;
        brickcolors[103].g = 193;
        brickcolors[103].b =  183;
        brickcolors[104].name = "Bright violet";
        brickcolors[104].r = 107;
        brickcolors[104].g = 50;
        brickcolors[104].b =  124;
        brickcolors[105].name = "Br. yellowish orange";
        brickcolors[105].r = 226;
        brickcolors[105].g = 155;
        brickcolors[105].b =  64;
        brickcolors[106].name = "Bright orange";
        brickcolors[106].r = 218;
        brickcolors[106].g = 133;
        brickcolors[106].b =  65;
        brickcolors[107].name = "Bright bluish green";
        brickcolors[107].r = 0;
        brickcolors[107].g = 143;
        brickcolors[107].b =  156;
        brickcolors[108].name = "Earth yellow";
        brickcolors[108].r = 104;
        brickcolors[108].g = 92;
        brickcolors[108].b =  67;
        brickcolors[110].name = "Bright bluish violet";
        brickcolors[110].r = 67;
        brickcolors[110].g = 84;
        brickcolors[110].b =  147;
        brickcolors[111].name = "Tr. Brown";
        brickcolors[111].r = 191;
        brickcolors[111].g = 183;
        brickcolors[111].b =  177;
        brickcolors[112].name = "Medium bluish violet";
        brickcolors[112].r = 104;
        brickcolors[112].g = 116;
        brickcolors[112].b =  172;
        brickcolors[113].name = "Tr. Medi. reddish violet";
        brickcolors[113].r = 229;
        brickcolors[113].g = 173;
        brickcolors[113].b =  200;
        brickcolors[115].name = "Med. yellowish green";
        brickcolors[115].r = 199;
        brickcolors[115].g = 210;
        brickcolors[115].b =  60;
        brickcolors[116].name = "Med. bluish green";
        brickcolors[116].r = 85;
        brickcolors[116].g = 165;
        brickcolors[116].b =  175;
        brickcolors[118].name = "Light bluish green";
        brickcolors[118].r = 183;
        brickcolors[118].g = 215;
        brickcolors[118].b =  213;
        brickcolors[119].name = "Br. yellowish green";
        brickcolors[119].r = 164;
        brickcolors[119].g = 189;
        brickcolors[119].b =  71;
        brickcolors[120].name = "Lig. yellowish green";
        brickcolors[120].r = 217;
        brickcolors[120].g = 228;
        brickcolors[120].b =  167;
        brickcolors[121].name = "Med. yellowish orange";
        brickcolors[121].r = 231;
        brickcolors[121].g = 172;
        brickcolors[121].b =  88;
        brickcolors[123].name = "Br. reddish orange";
        brickcolors[123].r = 211;
        brickcolors[123].g = 111;
        brickcolors[123].b =  76;
        brickcolors[124].name = "Bright reddish violet";
        brickcolors[124].r = 146;
        brickcolors[124].g = 57;
        brickcolors[124].b =  120;
        brickcolors[125].name = "Light orange";
        brickcolors[125].r = 234;
        brickcolors[125].g = 184;
        brickcolors[125].b =  146;
        brickcolors[126].name = "Tr. Bright bluish violet";
        brickcolors[126].r = 165;
        brickcolors[126].g = 165;
        brickcolors[126].b =  203;
        brickcolors[127].name = "Gold";
        brickcolors[127].r = 220;
        brickcolors[127].g = 188;
        brickcolors[127].b =  129;
        brickcolors[128].name = "Dark nougat";
        brickcolors[128].r = 174;
        brickcolors[128].g = 122;
        brickcolors[128].b =  89;
        brickcolors[131].name = "Silver";
        brickcolors[131].r = 156;
        brickcolors[131].g = 163;
        brickcolors[131].b =  168;
        brickcolors[133].name = "Neon orange";
        brickcolors[133].r = 213;
        brickcolors[133].g = 115;
        brickcolors[133].b =  61;
        brickcolors[134].name = "Neon green";
        brickcolors[134].r = 216;
        brickcolors[134].g = 221;
        brickcolors[134].b =  86;
        brickcolors[135].name = "Sand blue";
        brickcolors[135].r = 116;
        brickcolors[135].g = 134;
        brickcolors[135].b =  157;
        brickcolors[136].name = "Sand violet";
        brickcolors[136].r = 135;
        brickcolors[136].g = 124;
        brickcolors[136].b =  144;
        brickcolors[137].name = "Medium orange";
        brickcolors[137].r = 224;
        brickcolors[137].g = 152;
        brickcolors[137].b =  100;
        brickcolors[138].name = "Sand yellow";
        brickcolors[138].r = 149;
        brickcolors[138].g = 138;
        brickcolors[138].b =  115;
        brickcolors[140].name = "Earth blue";
        brickcolors[140].r = 32;
        brickcolors[140].g = 58;
        brickcolors[140].b =  86;
        brickcolors[141].name = "Earth green";
        brickcolors[141].r = 39;
        brickcolors[141].g = 70;
        brickcolors[141].b =  45;
        brickcolors[143].name = "Tr. Flu. Blue";
        brickcolors[143].r = 207;
        brickcolors[143].g = 226;
        brickcolors[143].b =  247;
        brickcolors[145].name = "Sand blue metallic";
        brickcolors[145].r = 121;
        brickcolors[145].g = 136;
        brickcolors[145].b =  161;
        brickcolors[146].name = "Sand violet metallic";
        brickcolors[146].r = 149;
        brickcolors[146].g = 142;
        brickcolors[146].b =  163;
        brickcolors[147].name = "Sand yellow metallic";
        brickcolors[147].r = 147;
        brickcolors[147].g = 135;
        brickcolors[147].b =  103;
        brickcolors[148].name = "Dark grey metallic";
        brickcolors[148].r = 87;
        brickcolors[148].g = 88;
        brickcolors[148].b =  87;
        brickcolors[149].name = "Black metallic";
        brickcolors[149].r = 22;
        brickcolors[149].g = 29;
        brickcolors[149].b =  50;
        brickcolors[150].name = "Light grey metallic";
        brickcolors[150].r = 171;
        brickcolors[150].g = 173;
        brickcolors[150].b =  172;
        brickcolors[151].name = "Sand green";
        brickcolors[151].r = 120;
        brickcolors[151].g = 144;
        brickcolors[151].b =  130;
        brickcolors[153].name = "Sand red";
        brickcolors[153].r = 149;
        brickcolors[153].g = 121;
        brickcolors[153].b =  119;
        brickcolors[154].name = "Dark red";
        brickcolors[154].r = 123;
        brickcolors[154].g = 46;
        brickcolors[154].b =  47;
        brickcolors[157].name = "Tr. Flu. Yellow";
        brickcolors[157].r = 255;
        brickcolors[157].g = 246;
        brickcolors[157].b =  123;
        brickcolors[158].name = "Tr. Flu. Red";
        brickcolors[158].r = 225;
        brickcolors[158].g = 164;
        brickcolors[158].b =  194;
        brickcolors[168].name = "Gun metallic";
        brickcolors[168].r = 117;
        brickcolors[168].g = 108;
        brickcolors[168].b =  98;
        brickcolors[176].name = "Red flip/flop";
        brickcolors[176].r = 151;
        brickcolors[176].g = 105;
        brickcolors[176].b =  91;
        brickcolors[178].name = "Yellow flip/flop";
        brickcolors[178].r = 180;
        brickcolors[178].g = 132;
        brickcolors[178].b =  85;
        brickcolors[179].name = "Silver flip/flop";
        brickcolors[179].r = 137;
        brickcolors[179].g = 135;
        brickcolors[179].b =  136;
        brickcolors[180].name = "Curry";
        brickcolors[180].r = 215;
        brickcolors[180].g = 169;
        brickcolors[180].b =  75;
        brickcolors[190].name = "Fire Yellow";
        brickcolors[190].r = 249;
        brickcolors[190].g = 214;
        brickcolors[190].b =  46;
        brickcolors[191].name = "Flame yellowish orange";
        brickcolors[191].r = 232;
        brickcolors[191].g = 171;
        brickcolors[191].b =  45;
        brickcolors[192].name = "Reddish brown";
        brickcolors[192].r = 105;
        brickcolors[192].g = 64;
        brickcolors[192].b =  40;
        brickcolors[193].name = "Flame reddish orange";
        brickcolors[193].r = 207;
        brickcolors[193].g = 96;
        brickcolors[193].b =  36;
        brickcolors[194].name = "Medium stone grey";
        brickcolors[194].r = 163;
        brickcolors[194].g = 162;
        brickcolors[194].b =  165;
        brickcolors[195].name = "Royal blue";
        brickcolors[195].r = 70;
        brickcolors[195].g = 103;
        brickcolors[195].b =  164;
        brickcolors[196].name = "Dark Royal blue";
        brickcolors[196].r = 35;
        brickcolors[196].g = 71;
        brickcolors[196].b =  139;
        brickcolors[198].name = "Bright reddish lilac";
        brickcolors[198].r = 142;
        brickcolors[198].g = 66;
        brickcolors[198].b =  133;
        brickcolors[199].name = "Dark stone grey";
        brickcolors[199].r = 99;
        brickcolors[199].g = 95;
        brickcolors[199].b =  98;
        brickcolors[200].name = "Lemon metalic";
        brickcolors[200].r = 130;
        brickcolors[200].g = 138;
        brickcolors[200].b =  93;
        brickcolors[208].name = "Light stone grey";
        brickcolors[208].r = 229;
        brickcolors[208].g = 228;
        brickcolors[208].b =  223;
        brickcolors[209].name = "Dark Curry";
        brickcolors[209].r = 176;
        brickcolors[209].g = 142;
        brickcolors[209].b =  68;
        brickcolors[210].name = "Faded green";
        brickcolors[210].r = 112;
        brickcolors[210].g = 149;
        brickcolors[210].b =  120;
        brickcolors[211].name = "Turquoise";
        brickcolors[211].r = 121;
        brickcolors[211].g = 181;
        brickcolors[211].b =  181;
        brickcolors[212].name = "Light Royal blue";
        brickcolors[212].r = 159;
        brickcolors[212].g = 195;
        brickcolors[212].b =  233;
        brickcolors[213].name = "Medium Royal blue";
        brickcolors[213].r = 108;
        brickcolors[213].g = 129;
        brickcolors[213].b =  183;
        brickcolors[216].name = "Rust";
        brickcolors[216].r = 144;
        brickcolors[216].g = 76;
        brickcolors[216].b =  42;
        brickcolors[217].name = "Brown";
        brickcolors[217].r = 124;
        brickcolors[217].g = 92;
        brickcolors[217].b =  70;
        brickcolors[218].name = "Reddish lilac";
        brickcolors[218].r = 150;
        brickcolors[218].g = 112;
        brickcolors[218].b =  159;
        brickcolors[219].name = "Lilac";
        brickcolors[219].r = 107;
        brickcolors[219].g = 98;
        brickcolors[219].b =  155;
        brickcolors[220].name = "Light lilac";
        brickcolors[220].r = 167;
        brickcolors[220].g = 169;
        brickcolors[220].b =  206;
        brickcolors[221].name = "Bright purple";
        brickcolors[221].r = 205;
        brickcolors[221].g = 98;
        brickcolors[221].b =  152;
        brickcolors[222].name = "Light purple";
        brickcolors[222].r = 228;
        brickcolors[222].g = 173;
        brickcolors[222].b =  200;
        brickcolors[223].name = "Light pink";
        brickcolors[223].r = 220;
        brickcolors[223].g = 144;
        brickcolors[223].b =  149;
        brickcolors[224].name = "Light brick yellow";
        brickcolors[224].r = 240;
        brickcolors[224].g = 213;
        brickcolors[224].b =  160;
        brickcolors[225].name = "Warm yellowish orange";
        brickcolors[225].r = 235;
        brickcolors[225].g = 184;
        brickcolors[225].b =  127;
        brickcolors[226].name = "Cool yellow";
        brickcolors[226].r = 253;
        brickcolors[226].g = 234;
        brickcolors[226].b =  141;
        brickcolors[232].name = "Dove blue";
        brickcolors[232].r = 125;
        brickcolors[232].g = 187;
        brickcolors[232].b =  221;
        brickcolors[268].name = "Medium lilac";
        brickcolors[268].r = 52;
        brickcolors[268].g = 43;
        brickcolors[268].b =  117;
        brickcolors[301].name = "Slime green";
        brickcolors[301].r = 80;
        brickcolors[301].g = 109;
        brickcolors[301].b =  84;
        brickcolors[302].name = "Smoky grey";
        brickcolors[302].r = 91;
        brickcolors[302].g = 93;
        brickcolors[302].b =  105;
        brickcolors[303].name = "Dark blue";
        brickcolors[303].r = 0;
        brickcolors[303].g = 16;
        brickcolors[303].b =  176;
        brickcolors[304].name = "Parsley green";
        brickcolors[304].r = 44;
        brickcolors[304].g = 101;
        brickcolors[304].b =  29;
        brickcolors[305].name = "Steel blue";
        brickcolors[305].r = 82;
        brickcolors[305].g = 124;
        brickcolors[305].b =  174;
        brickcolors[306].name = "Storm blue";
        brickcolors[306].r = 51;
        brickcolors[306].g = 88;
        brickcolors[306].b =  130;
        brickcolors[307].name = "Lapis";
        brickcolors[307].r = 16;
        brickcolors[307].g = 42;
        brickcolors[307].b =  220;
        brickcolors[308].name = "Dark indigo";
        brickcolors[308].r = 61;
        brickcolors[308].g = 21;
        brickcolors[308].b =  133;
        brickcolors[309].name = "Sea green";
        brickcolors[309].r = 52;
        brickcolors[309].g = 142;
        brickcolors[309].b =  64;
        brickcolors[310].name = "Shamrock";
        brickcolors[310].r = 91;
        brickcolors[310].g = 154;
        brickcolors[310].b =  76;
        brickcolors[311].name = "Fossil";
        brickcolors[311].r = 159;
        brickcolors[311].g = 161;
        brickcolors[311].b =  172;
        brickcolors[312].name = "Mulberry";
        brickcolors[312].r = 89;
        brickcolors[312].g = 34;
        brickcolors[312].b =  89;
        brickcolors[313].name = "Forest green";
        brickcolors[313].r = 31;
        brickcolors[313].g = 128;
        brickcolors[313].b =  29;
        brickcolors[314].name = "Cadet blue";
        brickcolors[314].r = 159;
        brickcolors[314].g = 173;
        brickcolors[314].b =  192;
        brickcolors[315].name = "Electric blue";
        brickcolors[315].r = 9;
        brickcolors[315].g = 137;
        brickcolors[315].b =  207;
        brickcolors[316].name = "Eggplant";
        brickcolors[316].r = 123;
        brickcolors[316].g = 0;
        brickcolors[316].b =  123;
        brickcolors[317].name = "Moss";
        brickcolors[317].r = 124;
        brickcolors[317].g = 156;
        brickcolors[317].b =  107;
        brickcolors[318].name = "Artichoke";
        brickcolors[318].r = 138;
        brickcolors[318].g = 171;
        brickcolors[318].b =  133;
        brickcolors[319].name = "Sage green";
        brickcolors[319].r = 185;
        brickcolors[319].g = 196;
        brickcolors[319].b =  177;
        brickcolors[320].name = "Ghost grey";
        brickcolors[320].r = 202;
        brickcolors[320].g = 203;
        brickcolors[320].b =  209;
        brickcolors[321].name = "Lilac";
        brickcolors[321].r = 167;
        brickcolors[321].g = 94;
        brickcolors[321].b =  155;
        brickcolors[322].name = "Plum";
        brickcolors[322].r = 123;
        brickcolors[322].g = 47;
        brickcolors[322].b =  123;
        brickcolors[323].name = "Olivine";
        brickcolors[323].r = 148;
        brickcolors[323].g = 190;
        brickcolors[323].b =  129;
        brickcolors[324].name = "Laurel green";
        brickcolors[324].r = 168;
        brickcolors[324].g = 189;
        brickcolors[324].b =  153;
        brickcolors[325].name = "Quill grey";
        brickcolors[325].r = 223;
        brickcolors[325].g = 223;
        brickcolors[325].b =  222;
        brickcolors[327].name = "Crimson";
        brickcolors[327].r = 151;
        brickcolors[327].g = 0;
        brickcolors[327].b =  0;
        brickcolors[328].name = "Mint";
        brickcolors[328].r = 177;
        brickcolors[328].g = 229;
        brickcolors[328].b =  166;
        brickcolors[329].name = "Baby blue";
        brickcolors[329].r = 152;
        brickcolors[329].g = 194;
        brickcolors[329].b =  219;
        brickcolors[330].name = "Carnation pink";
        brickcolors[330].r = 255;
        brickcolors[330].g = 152;
        brickcolors[330].b =  220;
        brickcolors[331].name = "Persimmon";
        brickcolors[331].r = 255;
        brickcolors[331].g = 89;
        brickcolors[331].b =  89;
        brickcolors[332].name = "Maroon";
        brickcolors[332].r = 117;
        brickcolors[332].g = 0;
        brickcolors[332].b =  0;
        brickcolors[333].name = "Gold";
        brickcolors[333].r = 239;
        brickcolors[333].g = 184;
        brickcolors[333].b =  56;
        brickcolors[334].name = "Daisy orange";
        brickcolors[334].r = 248;
        brickcolors[334].g = 217;
        brickcolors[334].b =  109;
        brickcolors[335].name = "Pearl";
        brickcolors[335].r = 231;
        brickcolors[335].g = 231;
        brickcolors[335].b =  236;
        brickcolors[336].name = "Fog";
        brickcolors[336].r = 199;
        brickcolors[336].g = 212;
        brickcolors[336].b =  228;
        brickcolors[337].name = "Salmon";
        brickcolors[337].r = 255;
        brickcolors[337].g = 148;
        brickcolors[337].b =  148;
        brickcolors[338].name = "Terra Cotta";
        brickcolors[338].r = 190;
        brickcolors[338].g = 104;
        brickcolors[338].b =  98;
        brickcolors[339].name = "Cocoa";
        brickcolors[339].r = 86;
        brickcolors[339].g = 36;
        brickcolors[339].b =  36;
        brickcolors[340].name = "Wheat";
        brickcolors[340].r = 241;
        brickcolors[340].g = 231;
        brickcolors[340].b =  199;
        brickcolors[341].name = "Buttermilk";
        brickcolors[341].r = 254;
        brickcolors[341].g = 243;
        brickcolors[341].b =  187;
        brickcolors[342].name = "Mauve";
        brickcolors[342].r = 224;
        brickcolors[342].g = 178;
        brickcolors[342].b =  208;
        brickcolors[343].name = "Sunrise";
        brickcolors[343].r = 212;
        brickcolors[343].g = 144;
        brickcolors[343].b =  189;
        brickcolors[344].name = "Tawny";
        brickcolors[344].r = 150;
        brickcolors[344].g = 85;
        brickcolors[344].b =  85;
        brickcolors[345].name = "Rust";
        brickcolors[345].r = 143;
        brickcolors[345].g = 76;
        brickcolors[345].b =  42;
        brickcolors[346].name = "Cashmere";
        brickcolors[346].r = 211;
        brickcolors[346].g = 190;
        brickcolors[346].b =  150;
        brickcolors[347].name = "Khaki";
        brickcolors[347].r = 226;
        brickcolors[347].g = 220;
        brickcolors[347].b =  188;
        brickcolors[348].name = "Lily white";
        brickcolors[348].r = 237;
        brickcolors[348].g = 234;
        brickcolors[348].b =  234;
        brickcolors[349].name = "Seashell";
        brickcolors[349].r = 233;
        brickcolors[349].g = 218;
        brickcolors[349].b =  218;
        brickcolors[350].name = "Burgundy";
        brickcolors[350].r = 136;
        brickcolors[350].g = 62;
        brickcolors[350].b =  62;
        brickcolors[351].name = "Cork";
        brickcolors[351].r = 188;
        brickcolors[351].g = 155;
        brickcolors[351].b =  93;
        brickcolors[352].name = "Burlap";
        brickcolors[352].r = 199;
        brickcolors[352].g = 172;
        brickcolors[352].b =  120;
        brickcolors[353].name = "Beige";
        brickcolors[353].r = 202;
        brickcolors[353].g = 191;
        brickcolors[353].b =  163;
        brickcolors[354].name = "Oyster";
        brickcolors[354].r = 187;
        brickcolors[354].g = 179;
        brickcolors[354].b =  178;
        brickcolors[355].name = "Pine Cone";
        brickcolors[355].r = 108;
        brickcolors[355].g = 88;
        brickcolors[355].b =  75;
        brickcolors[356].name = "Fawn brown";
        brickcolors[356].r = 160;
        brickcolors[356].g = 132;
        brickcolors[356].b =  79;
        brickcolors[357].name = "Hurricane grey";
        brickcolors[357].r = 149;
        brickcolors[357].g = 137;
        brickcolors[357].b =  136;
        brickcolors[358].name = "Cloudy grey";
        brickcolors[358].r = 171;
        brickcolors[358].g = 168;
        brickcolors[358].b =  158;
        brickcolors[359].name = "Linen";
        brickcolors[359].r = 175;
        brickcolors[359].g = 148;
        brickcolors[359].b =  131;
        brickcolors[360].name = "Copper";
        brickcolors[360].r = 150;
        brickcolors[360].g = 103;
        brickcolors[360].b =  102;
        brickcolors[361].name = "Medium brown";
        brickcolors[361].r = 86;
        brickcolors[361].g = 66;
        brickcolors[361].b =  54;
        brickcolors[362].name = "Bronze";
        brickcolors[362].r = 126;
        brickcolors[362].g = 104;
        brickcolors[362].b =  63;
        brickcolors[363].name = "Flint";
        brickcolors[363].r = 105;
        brickcolors[363].g = 102;
        brickcolors[363].b =  92;
        brickcolors[364].name = "Dark taupe";
        brickcolors[364].r = 90;
        brickcolors[364].g = 76;
        brickcolors[364].b =  66;
        brickcolors[365].name = "Burnt Sienna";
        brickcolors[365].r = 106;
        brickcolors[365].g = 57;
        brickcolors[365].b =  9;
        brickcolors[1001].name = "Institutional white";
        brickcolors[1001].r = 248;
        brickcolors[1001].g = 248;
        brickcolors[1001].b =  248;
        brickcolors[1002].name = "Mid gray";
        brickcolors[1002].r = 205;
        brickcolors[1002].g = 205;
        brickcolors[1002].b =  205;
        brickcolors[1003].name = "Really black";
        brickcolors[1003].r = 17;
        brickcolors[1003].g = 17;
        brickcolors[1003].b =  17;
        brickcolors[1004].name = "Really red";
        brickcolors[1004].r = 255;
        brickcolors[1004].g = 0;
        brickcolors[1004].b =  0;
        brickcolors[1005].name = "Deep orange";
        brickcolors[1005].r = 255;
        brickcolors[1005].g = 176;
        brickcolors[1005].b =  0;
        brickcolors[1006].name = "Alder";
        brickcolors[1006].r = 180;
        brickcolors[1006].g = 128;
        brickcolors[1006].b =  255;
        brickcolors[1007].name = "Dusty Rose";
        brickcolors[1007].r = 163;
        brickcolors[1007].g = 75;
        brickcolors[1007].b =  75;
        brickcolors[1008].name = "Olive";
        brickcolors[1008].r = 193;
        brickcolors[1008].g = 190;
        brickcolors[1008].b =  66;
        brickcolors[1009].name = "New Yeller";
        brickcolors[1009].r = 255;
        brickcolors[1009].g = 255;
        brickcolors[1009].b =  0;
        brickcolors[1010].name = "Really blue";
        brickcolors[1010].r = 0;
        brickcolors[1010].g = 0;
        brickcolors[1010].b =  255;
        brickcolors[1011].name = "Navy blue";
        brickcolors[1011].r = 0;
        brickcolors[1011].g = 32;
        brickcolors[1011].b =  96;
        brickcolors[1012].name = "Deep blue";
        brickcolors[1012].r = 33;
        brickcolors[1012].g = 84;
        brickcolors[1012].b =  185;
        brickcolors[1013].name = "Cyan";
        brickcolors[1013].r = 4;
        brickcolors[1013].g = 175;
        brickcolors[1013].b =  236;
        brickcolors[1014].name = "CGA brown";
        brickcolors[1014].r = 170;
        brickcolors[1014].g = 85;
        brickcolors[1014].b =  0;
        brickcolors[1015].name = "Magenta";
        brickcolors[1015].r = 170;
        brickcolors[1015].g = 0;
        brickcolors[1015].b =  170;
        brickcolors[1016].name = "Pink";
        brickcolors[1016].r = 255;
        brickcolors[1016].g = 102;
        brickcolors[1016].b =  204;
        brickcolors[1017].name = "Deep orange";
        brickcolors[1017].r = 255;
        brickcolors[1017].g = 175;
        brickcolors[1017].b =  0;
        brickcolors[1018].name = "Teal";
        brickcolors[1018].r = 18;
        brickcolors[1018].g = 238;
        brickcolors[1018].b =  212;
        brickcolors[1019].name = "Toothpaste";
        brickcolors[1019].r = 0;
        brickcolors[1019].g = 255;
        brickcolors[1019].b =  255;
        brickcolors[1020].name = "Lime green";
        brickcolors[1020].r = 0;
        brickcolors[1020].g = 255;
        brickcolors[1020].b =  0;
        brickcolors[1021].name = "Camo";
        brickcolors[1021].r = 58;
        brickcolors[1021].g = 125;
        brickcolors[1021].b =  21;
        brickcolors[1022].name = "Grime";
        brickcolors[1022].r = 127;
        brickcolors[1022].g = 142;
        brickcolors[1022].b =  100;
        brickcolors[1023].name = "Lavender";
        brickcolors[1023].r = 140;
        brickcolors[1023].g = 91;
        brickcolors[1023].b =  159;
        brickcolors[1024].name = "Pastel light blue";
        brickcolors[1024].r = 175;
        brickcolors[1024].g = 221;
        brickcolors[1024].b =  255;
        brickcolors[1025].name = "Pastel orange";
        brickcolors[1025].r = 255;
        brickcolors[1025].g = 201;
        brickcolors[1025].b =  201;
        brickcolors[1026].name = "Pastel violet";
        brickcolors[1026].r = 177;
        brickcolors[1026].g = 167;
        brickcolors[1026].b =  255;
        brickcolors[1027].name = "Pastel blue-green";
        brickcolors[1027].r = 159;
        brickcolors[1027].g = 243;
        brickcolors[1027].b =  233;
        brickcolors[1028].name = "Pastel green";
        brickcolors[1028].r = 204;
        brickcolors[1028].g = 255;
        brickcolors[1028].b =  204;
        brickcolors[1029].name = "Pastel yellow";
        brickcolors[1029].r = 255;
        brickcolors[1029].g = 255;
        brickcolors[1029].b =  204;
        brickcolors[1030].name = "Pastel brown";
        brickcolors[1030].r = 255;
        brickcolors[1030].g = 204;
        brickcolors[1030].b =  153;
        brickcolors[1031].name = "Royal purple";
        brickcolors[1031].r = 98;
        brickcolors[1031].g = 37;
        brickcolors[1031].b =  209;
        brickcolors[1032].name = "Hot pink";
        brickcolors[1032].r = 255;
        brickcolors[1032].g = 0;
        brickcolors[1032].b =  191;
    }
    return brickcolors[brickcolor_num];
}


/*
 Hello there :)
 */