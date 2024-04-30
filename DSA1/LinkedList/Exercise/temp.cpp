#include <iostream>
#include <string>

using namespace std;

// Function to convert a number to words
string numberToWords(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string words;

    if (num >= 100) {
        words += ones[num / 100] + " Hundred ";
        num %= 100;
    }

    if (num >= 20) {
        words += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 10) {
        words += teens[num - 10] + " ";
        return words;
    }

    if (num > 0) {
        words += ones[num] + " ";
    }

    return words;
}

// Function to convert amount in figures to words
string amountInWords(int amount) {
    if (amount == 0)
        return "Zero";

    string words;

    // Crores
    if (amount >= 10000000) {
        words += numberToWords(amount / 10000000) + "Crore ";
        amount %= 10000000;
    }

    // Lakhs
    if (amount >= 100000) {
        words += numberToWords(amount / 100000) + "Lakh ";
        amount %= 100000;
    }

    // Thousands
    if (amount >= 1000) {
        words += numberToWords(amount / 1000) + "Thousand ";
        amount %= 1000;
    }

    // Hundreds
    if (amount >= 100) {
        words += numberToWords(amount / 100) + "Hundred ";
        amount %= 100;
    }

    // Rest of the amount
    words += numberToWords(amount);

    return words;
}

int main() {
    int amount;

    cout << "Enter the amount in figures: ";
    cin >> amount;

    cout << "Amount in words: " << amountInWords(amount) << endl;

    return 0;
}
