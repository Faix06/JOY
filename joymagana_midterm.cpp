#include <iostream>

using namespace std;

int main ()
{
	double sugarPricesUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	double usdToPhp, poundToPhp;
	cout << "Enter conversion rate from USD to PHP: ";
	cin >> usdToPhp;
	cout << "Enter conversion rate from Pound to PHP: ";
	cin >> poundToPhp;
	cout << "Enter price of sugar: ";
	cin >> sugarPricesUSD;
	cout << "Enter price of rice: ";
	cin >> ricePricePound;
	cout << "Enter price of sardines: ";
	cin >> sardinesPricePound;
	cout << "Enter the price of coffee: ";
	cin >> coffeePriceUSD;
	cout << "Enter the price of milk: ";
	cin >> milkPriceUSD;
	
	cout << "Enter quantity of sugar: ";
	cin >> sugarQty;
	cout << "Enter quantity of rice: ";
	cin >> riceQty;
	cout << "Enter quantity of sardines: ";
	cin >> sardinesQty;
	cout << "Enter the quantity of coffee: ";
	cin >> coffeeQty;
	cout << "Enter the quantity of milk: ";
	cin >> milkQty;
	
	double sugarCostPhp = sugarPricesUSD * usdToPhp * sugarQty;
	double riceCostPhp = ricePricePound * poundToPhp * riceQty;
	double sardinesCostPhp = sardinesPricePound * poundToPhp * sardinesQty;
	double coffeeCostPhp = coffeePriceUSD * usdToPhp * coffeeQty;
	double milkCostPhp = milkPriceUSD * usdToPhp * milkQty;
	double totalCostPHP = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;
	
	cout << "\nPurchase Details:\n";
	cout << "\nSugar: " << sugarQty << " x " << sugarPricesUSD << " USD " << sugarCostPhp << " PHP\n ";
	cout << "\nRice: " << riceQty << " X " << ricePricePound << " Pound = " << riceCostPhp << " PHP\n ";
	cout << "\nSardines: " << sardinesQty << " X " << sardinesPricePound << " Pound = " << sardinesCostPhp << " PHP\n ";
	cout << "\nCoffee: " << coffeeQty << " x " << coffeePriceUSD << " USD " << coffeeCostPhp << " PHP\n ";
	cout << "\nMilk: " << milkQty << " x " << milkPriceUSD << " USD " << milkCostPhp << " PHP\n ";
	
	cout << "\nTotal Amount to be Purchase: " << totalCostPHP << "PHP\n";
	return 0;
}
