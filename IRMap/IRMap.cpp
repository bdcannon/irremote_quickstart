//
// Created by Ben Cannon on 11/17/18.
//

#include "IRMap.h"

String IRMap::code_map(long code) {
    switch(code)
    {
        case 0xFD00FF : return "POWER";
        case 0xFD807F : return "VOL+";
        case 0xFD40BF : return "FUNC";
        case 0xFD20DF : return "BACK";
        case 0xFDA05F : return "PLAY";
        case 0xFD609F : return "FORWARD";
        case 0xFD10EF : return "DOWN";
        case 0xFD906F : return "VOL-";
        case 0xFD50AF : return "UP";
        case 0xFD30CF : return "0";
        case 0xFDB04F : return "EQ";
        case 0xFD708F : return "ST";
        case 0xFD08F7 : return "1";
        case 0xFD8877 : return "2";
        case 0xFD48B7 : return "3";
        case 0xFD28D7 : return "4";
        case 0xFDA857 : return "5";
        case 0xFD6897 : return "6";
        case 0xFD18E7 : return "7";
        case 0xFD9867 : return "8";
        case 0xFD58A7 : return "9";
        default : return "";
    }
}
