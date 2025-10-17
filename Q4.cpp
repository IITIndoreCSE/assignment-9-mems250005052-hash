int main() {
    SalesRecord yearSales[12];

    
    cout << "Enter sales data for 12 months:\n";
    for (int i = 0; i < 12; ++i) {
        cout << "Month " << i + 1 << " name: ";
        cin >> yearSales[i].month;
        cout << "Sales amount for " << yearSales[i].month << ": ";
        cin >> yearSales[i].amount;
    }

    
    int maxIndex = 0;
    int minIndex = 0;

    
    for (int i = 1; i < 12; ++i) {
        if (yearSales[i].amount > yearSales[maxIndex].amount) {
            maxIndex = i;
        }
        if (yearSales[i].amount < yearSales[minIndex].amount) {
            minIndex = i;
        }
    }

    
    cout << "\nMonth with maximum sales: " << yearSales[maxIndex].month
         << " (" << yearSales[maxIndex].amount << ")\n";
    cout << "Month with minimum sales: " << yearSales[minIndex].month
         << " (" << yearSales[minIndex].amount << ")\n";

    return 0;
}
