#include <iostream>
#include <iomanip>
using namespace std;

void billingAssistant() {
    string productName;
    float price;
    int quantity;

    cout << "\n===== SMART BILLING ASSISTANT =====\n";

    cout << "Enter Product Name: ";
    cin >> productName;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    float totalCost = price * quantity;

    cout << "\nProduct Name : " << productName << endl;
    cout << "Total Cost   : Rs. " << totalCost << endl;
}

void discountEngine() {
    float productPrice, discountPercent;

    cout << "\n===== DISCOUNT ENGINE =====\n";

    cout << "Enter Product Price: ";
    cin >> productPrice;

    cout << "Enter Discount Percentage: ";
    cin >> discountPercent;

    float discountAmount =
        productPrice * (discountPercent / 100.0);

    float finalPrice =
        productPrice - discountAmount;

    cout << "\nDiscount Amount : Rs. "
         << discountAmount << endl;

    cout << "Final Price     : Rs. "
         << finalPrice << endl;
}

void gstBillingSystem() {
    string productName;
    float price;

    cout << "\n===== GST BILLING SYSTEM =====\n";

    cout << "Enter Product Name: ";
    cin >> productName;

    cout << "Enter Product Price: ";
    cin >> price;

    const float gstPercent = 18.0;

    float gstAmount =
        price * (gstPercent / 100.0);

    float finalPrice =
        price + gstAmount;

    cout << "\nProduct Name : "
         << productName << endl;

    cout << "Price        : Rs. "
         << price << endl;

    cout << "GST Amount   : Rs. "
         << gstAmount << endl;

    cout << "Final Price  : Rs. "
         << finalPrice << endl;
}

void retailProfitAnalyzer() {
    string productName;
    float costPrice;
    float sellingPrice;
    int unitsSold;

    cout << "\n===== RETAIL PROFIT ANALYZER =====\n";

    cout << "Enter Product Name: ";
    cin >> productName;

    cout << "Enter Cost Price: ";
    cin >> costPrice;

    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    cout << "Enter Units Sold: ";
    cin >> unitsSold;

    float investment =
        costPrice * unitsSold;

    float revenue =
        sellingPrice * unitsSold;

    float profit =
        revenue - investment;

    float profitPercentage =
        (profit / investment) * 100;

    cout << "\nProduct Name      : "
         << productName << endl;

    cout << "Investment        : Rs. "
         << investment << endl;

    cout << "Revenue           : Rs. "
         << revenue << endl;

    cout << "Profit            : Rs. "
         << profit << endl;

    cout << "Profit Percentage : "
         << profitPercentage << "%" << endl;
}

void dailyPerformanceDashboard() {

    int customers;
    float avgPurchaseValue;
    float discountPercent;
    float operatingCost;

    cout << "\n===== DAILY PERFORMANCE DASHBOARD =====\n";

    cout << "Enter Number of Customers: ";
    cin >> customers;

    cout << "Enter Average Purchase Value: ";
    cin >> avgPurchaseValue;

    cout << "Enter Discount Percentage: ";
    cin >> discountPercent;

    cout << "Enter Operating Cost: ";
    cin >> operatingCost;

    float grossSales =
        customers * avgPurchaseValue;

    float discountAmount =
        grossSales * (discountPercent / 100.0);

    float netSales =
        grossSales - discountAmount;

    float operatingProfit =
        netSales - operatingCost;

    float profitMargin =
        (operatingProfit / netSales) * 100;

    cout << fixed << setprecision(2);

    cout << "\n========== DASHBOARD ==========\n";

    cout << "Gross Sales      : Rs. "
         << grossSales << endl;

    cout << "Discount Amount  : Rs. "
         << discountAmount << endl;

    cout << "Net Sales        : Rs. "
         << netSales << endl;

    cout << "Operating Profit : Rs. "
         << operatingProfit << endl;

    cout << "Profit Margin    : "
         << profitMargin << "%" << endl;

    cout << "===============================\n";
}

int main() {

    int choice;

    do {
        cout << "\n";
        cout << "=====================================\n";
        cout << " RETAIL STORE INTELLIGENCE CHALLENGE\n";
        cout << "=====================================\n";
        cout << "1. Smart Billing Assistant\n";
        cout << "2. Discount Engine\n";
        cout << "3. GST Billing System\n";
        cout << "4. Retail Profit Analyzer\n";
        cout << "5. Daily Performance Dashboard\n";
        cout << "0. Exit\n";
        cout << "=====================================\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                billingAssistant();
                break;

            case 2:
                discountEngine();
                break;

            case 3:
                gstBillingSystem();
                break;

            case 4:
                retailProfitAnalyzer();
                break;

            case 5:
                dailyPerformanceDashboard();
                break;

            case 0:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 0);

    return 0;
}