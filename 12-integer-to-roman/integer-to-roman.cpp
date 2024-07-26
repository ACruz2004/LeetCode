class Solution {
public:
    string intToRoman(int num) {
        std::string roman;
        while (num >= 1000) {
            roman = roman + 'M';
            num = num - 1000;
        }
        while (num >= 900 && num < 1000) {
            roman = roman + "CM";
            num = num - 900;
        }
        while (num >= 500 && num < 900) {
            roman = roman + 'D';
            num = num - 500;
        }
        while (num >= 400 && num < 500) {
            roman = roman + "CD";
            num = num - 400;
        }
        while (num >= 100 && num < 400) {
            roman = roman + 'C';
            num = num - 100;
        }
        while (num >= 90 && num < 100) {
            roman = roman + "XC";
            num = num - 90;
        }
        while (num >= 50 && num < 90) {
            roman = roman + 'L';
            num = num - 50;
        }
        while (num >= 40 && num < 50) {
            roman = roman + "XL";
            num = num - 40;
        }
        while (num >= 10 && num < 40) {
            roman = roman + 'X';
            num = num - 10;
        }
        while (num == 9) {
            roman = roman + "IX";
            num = num - 9;
        }
        while (num >= 5 && num < 9) {
            roman = roman + 'V';
            num = num - 5;
        }
         while (num == 4) {
            roman = roman + "IV";
            num = num - 4;
        }
        while (num >= 1 && num < 4) {
            roman = roman + 'I';
            num = num - 1;
        }
        return roman;
    }
};