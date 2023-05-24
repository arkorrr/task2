#include <iostream>
using namespace std;

int main()
{
    int number1,		//Task1
    	number2;
    cout << "Enter number1: "; 
    cin >> number1;
    cout << "Enter number2: ";
    cin >> number2;
    
    cout << "Number1 = " << (number1 / 100) * 100 + ((number2 / 10) % 10) * 10 + (number1 % 10) << endl;
    cout << "Number2 = " << ((number2 / 100) * 100) + ((number1 / 10) % 10) * 10 + (number2 % 10) << endl;

    int number3;		//Task2
    cout << "Enter number: ";
    cin >> number3;
    cout << "Sum = " << (number3 / 1000) + (number3 / 10) % 10 << endl;
    int seconddigit = ((number3 / 100) % 10);
    int fourthdigit = number3 % 10;
    if (seconddigit < fourthdigit)
    	{
    		cout << "Difference = " << fourthdigit - seconddigit << endl;
    	}
    else
    	{
    		cout << "Difference = " << seconddigit - fourthdigit << endl;
    	}

    int number4;		//Task3
    cout << "Enter number: ";
    cin >> number4;
    cout << (number4 / 100) * 10 + (number4 % 10);

    double money,       //Task4
    	rate,
    	percent,
    	time,
    	deposit;
    cout << "Enter sum of money which you want to put on deposit: ";
    cin >> money;
    cout << "Specify for what period of time: "; //month
    cin >> time;
    cout << "Specify for what percent you put money: ";
    cin >> percent;
    rate = percent / 100;
    deposit = (money * pow(1 + rate / 12, time));
    cout << deposit << endl;
    cout << "Sum of money which you can receive at the first month " << (deposit - money) / time << " hryvnia" << endl;

    int product,		//Task5
    	customer;

    cout << "Enter price of product in hryvnia: ";
    cin >> product;
    cout << "Enter amount of money which customer give: ";
    cin >> customer;
    cout << "For this amount of money,the customer can buy = " << customer / product << " product and can get change = " << customer % product << " hryvnia";

    const double pound = 405.9;  //Task6
    int kilogram = 1000,
    	pounds;
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Pounts in killograms: " << (pounds * pound) / kilogram << " kg";

    double width, //Task7 
        length,
        height,
        priceofcolor,
        PERCENT,
        colorsquare;
       
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter price of color: ";
    cin >> priceofcolor;
    cout << "Enter percent of window and door at room: ";
    cin >> PERCENT;
    cout << "Enter how much color will need on 1m square: ";
    cin >> colorsquare;
    
    double area,
        windowanddoor,
        color,
        costofcolor;
    area = 2 * (length + width) * height;   // Площадь стен с учётом окон и дверей.
    windowanddoor = area * (100 - PERCENT) / 100;     // Площадь стен без учёта окон и дверей.
    color = windowanddoor * colorsquare;    // Количество краски которой надо для покраски комнаты.
    costofcolor = color * priceofcolor;     // Цена всей краски для покраски стен

    cout << "The paint you need to paint this room: " << color << endl;
    cout << "Total cost of color you need to paint this room: " << costofcolor << endl;

    int number5,        //Task8
        first,
        second,
        third,
        fourth,
        fifth;
    cout << "Enter number: ";
    cin >> number5;
    first = number5 / 10000;
    second = (number5 / 1000) % 10;
    third = (number5 / 100) % 10;
    fourth = (number5 / 10) % 10;
    fifth = number5 % 10;
    cout << fourth * 10000 + fifth * 1000 + first * 100 + second * 10 + third;
   
    const double long Venus = 4.81068 * 10e24; // Масса планет Солнечной системы          //Task9
    const double long Earth = 5.97600 * 10e24;
    const double long Mars = 0.63345 * 10e24;
    const double long Mercury = 0.32868 * 10e24;
    const double long Neptune = 101.59200 * 10e24;
    const double long Saturn = 561.80376 * 10e24;   
    const double long Uranus = 86.05440 * 10e24;
    const double long Jupiter = 1876.64328 * 10e24;
    double long average;
    average = (Venus * Earth * Mars * Mercury * Neptune * Saturn * Uranus * Jupiter) / 8;
    cout << "Weight of all planets = " << (Venus + Earth + Mars + Mercury + Neptune + Saturn + Uranus + Jupiter); // kg
    cout << "Average of all planets = " << average << endl;
     
    const double percentVenus = 0.00016;   //Масса всех планет солнечной планеты в процентом соотношении
    const double percentEarth = 0.00017;
    const double percentMars = 0.00003;
    const double percentMercury = 0.00000017;   
    const double percentNeptune = 7.53;
    const double percentSaturn = 18.98;
    const double percentUranus = 1.23;
    const double percentJupiter = 71.41;

    double long more;
    more = (percentJupiter - (percentEarth + percentMars + percentNeptune + percentSaturn + percentVenus + percentMercury + percentUranus)) / (percentEarth + percentMars + percentNeptune + percentSaturn + percentVenus + percentMercury + percentUranus);
    cout << "Jupiter more than all planets " << more << " times." << endl;
}
