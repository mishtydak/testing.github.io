#include <iostream>
#include <string>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>
#include <unordered_map>
#include<sstream>
using namespace std;


void shopLocalCategory();
void transportationOptions();
void travellingOptionsWithinCity();
void carpool();
void preferencesAndPlan();
void emergencyHelp();
void dijkstra(int src );
void display(int dist[] , int par[] );
int getMin(int dist[] , bool visited[]);

int main() {
    // Personal Information
    string name, gender, address, phone_number, emergency_contact, ssn;
    int age;

    // Collect personal information
    cout << "Welcome to the City Assistance Program!\n";
    cout << "Please enter your personal information:\n";

    cout << "Name: ";
    getline(cin, name);

    cout << "Age: ";
    cin >> age;
    cin.ignore(); // To clear the newline character from the buffer

    cout << "Gender: ";
    getline(cin, gender);

    cout << "Address: ";
    getline(cin, address);

    cout << "Phone Number: ";
    getline(cin, phone_number);

    cout << "Emergency Contact: ";
    getline(cin, emergency_contact);

    cout << "Social Security Number (SSN): ";
    getline(cin, ssn);

    cout << "\nThank you, " << name << "! Let's get started.\n";

    // Main menu loop
    int option;
    do {
        cout << "\nMain Menu:\n";
        cout << "1. Enter Preferences and Plan\n";
        cout << "2. Car pool\n";
        cout << "3. Travelling Options within City\n";
        cout << "4. Transportation Options\n";
        cout << "5. Shop Local\n";
        cout << "6. Emergency Help\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
        case 1:
            preferencesAndPlan(); // Call Preferences and Plan function
            break;
        case 2:
            carpool(); // Call function
            break;
        case 3:
            travellingOptionsWithinCity(); // Call Travelling Options within City function
            break;
        case 4:
            transportationOptions(); // Call Transportation Options function
            break;
        case 5:
            shopLocalCategory(); // Call Shop Local function
            break;
        case 6:
            emergencyHelp(); // Call Emergency Help function
            break;
        case 7:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (option != 7);

    return 0;
}

void displayPersonalInfo(const string &name, int age, const string &gender, const string &address, const string &phone_number, const string &emergency_contact, const string &ssn) {
    cout << "\n   User Personal Information \n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "Address: " << address << "\n";
    cout << "Phone Number: " << phone_number << "\n";
    cout << "Emergency Contact: " << emergency_contact << "\n";
    cout << "Social Security Number (SSN): " << ssn << "\n";
}

void emergencyHelp() {
    int emergencyCategory;

    cout << "Please select the category of emergency:\n";
    cout << "1. General Emergency\n";
    cout << "2. Police and Crime\n";
    cout << "3. Medical and Fire\n";
    cout << "4. Railway and Transportation\n";
    cout << "5. Social and Domestic Support\n";
    cout << "Enter the number corresponding to your emergency category: ";
    cin >> emergencyCategory;

    switch (emergencyCategory) {
    case 1:
        cout << "\n  General Emergency  \n";
        cout << "Universal Emergency: 112\n";
        cout << "Free Integrated Medical, Police, and Fire Emergency: 108\n";
        break;

    case 2:
        cout << "\n  Police and Crime  \n";
        cout << "Police Assistance: 100\n";
        cout << "Anti-Corruption Helpline: 1031\n";
        cout << "Women Helpline: 1091\n";
        cout << "Women Helpline for Domestic Abuse: 181\n";
        cout << "Missing Child and Women: 1094\n";
        break;

    case 3:
        cout << "\n  Medical and Fire   \n";
        cout << "Ambulance: 102\n";
        cout << "Fire Brigade: 101\n";
        cout << "Road Accident Emergency Services: 1073\n";
        cout << "Road Accident Emergency Services on National Highway: 1033\n";
        break;

    case 4:
        cout << "\n  Railway and Transportation   \n";
        cout << "Railway Accident Emergency Services: 1072\n";
        cout << "Indian Railway Enquiry: 131\n";
        break;

    case 5:
        cout << "\n  Social and Domestic Support  \n";
        cout << "Children in Difficult Situation: 1098\n";
        cout << "Senior Citizen Helpline: 1091 / 1291\n";
        cout << "LPG Emergency Helpline: 1906\n";
        break;

    default:
        cout << "Invalid option! Please select a valid emergency category.\n";
        break;
    }
}


void shopLocalCategory() {
    int category;
    cout << "\nSelect the category you are interested in:\n";
    cout << "1. Toys\n";
    cout << "2. Cultural Items and Handicrafts\n";
    cout << "3. Jewelry\n";
    cout << "4. Books and Stationery\n";
    cout << "5. Home Decor\n";
    cout << "6. Beauty Products\n";
    cout << "7. Music and Instruments\n";
    cout << "8. Herbal Products\n";
    cout << "Enter your choice (1-8): ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "\nToys shops:\n";
            cout << "1. Walkover\n";
            cout << "2. Toy Land\n";
            cout << "3. Magical Hobbies\n";
            cout << "4. Hamleys\n";
            cout << "5. Toy Mall\n";
            cout << "6. Kukus Toys\n";
            cout << "7. Memories\n";
            cout << "\n";
            break;
        case 2:
            cout << "\nCultural Items and Handicrafts shops:\n";
            cout << "1. Chitari Heritage\n";
            cout << "2. Aparant Handicrafts\n";
            cout << "3. Artorium\n";
            cout << "4. Mario Gallery\n";
            cout << "5. City Decor\n";
            cout << "6. Gaeria Azulejos de City\n";
            cout << "7. Itsy Bitsy\n";
            cout << "\n";
            break;
        case 3:
            cout << "\nJewelry shops:\n";
            cout << "1. Shivadatt Jewelry\n";
            cout << "2. Antaraa Jewellers\n";
            cout << "3. M.S. Lotlikar\n";
            cout << "4. Shoba\n";
            cout << "5. Glitters\n";
            cout << "6. V.S. Raikar\n";
            cout << "7. The Ko Shop\n";
            cout << "8. Surya Jewelry\n";
            cout << "\n";
            break;
        case 4:
            cout << "\nBooks and Stationery shops:\n";
            cout << "1. Casa JD Fernandes\n";
            cout << "2. Ganga Books and Stationary\n";
            cout << "3. Paradise Stationary\n";
            cout << "4. Sunny's Stationary World\n";
            cout << "5. Sardesai's Enterprises\n";
            cout << "6. Mayoor Book World\n";
            cout << "\n";
            break;
        case 5:
            cout << "\nHome Decor shops:\n";
            cout << "1. Signature Home Decor\n";
            cout << "2. City Decor\n";
            cout << "3. Freedom Designer\n";
            cout << "4. Kramonde Luxury Home Decor\n";
            cout << "5. Nitai Home Decor\n";
            cout << "6. Adore Home Concept\n";
            cout << "7. Global Elegance Home Decor\n";
            cout << "\n";
            break;
        case 6:
            cout << "\nBeauty Products shops:\n";
            cout << "1. City Cosmetics and Beauty Products\n";
            cout << "2. Parijat Cosmetics\n";
            cout << "3. Beauty World\n";
            cout << "4. Siddhivinayak Enterprises\n";
            cout << "5. Pinki Cosmetics\n";
            cout << "6. Lisha Cosmetics\n";
            cout << "7. Wan'c The Beauty Store\n";
            cout << "\n";
            break;
        case 7:
            cout << "\nMusic and Instruments shops:\n";
            cout << "1. Furtados\n";
            cout << "2. Pedro Fernandes & Co\n";
            cout << "3. Kandence Xperience Guitar\n";
            cout << "4. Stompbox.in\n";
            cout << "5. B X and Sons\n";
            cout << "6. Vibes Music\n";
            cout << "7. Adr Pro System\n";
            cout << "8. DM Customs\n";
            cout << "\n";
            break;
        case 8:
            cout << "\nHerbal Products shops:\n";
            cout << "1. Reishi Herbs n Health\n";
            cout << "2. Shree Damodar Ayurvedics\n";
            cout << "3. Al Shifa Agencies\n";
            cout << "4. Ayursparsh Products\n";
            cout << "5. Herbal IMC Store\n";
            cout << "6. Vaibhavshali Ayurvedic Bhandar\n";
            cout << "7. Himalaya Wellness Store\n";
            cout << "8. Shoora Products\n";
            cout << "\n";
            break;
        default:
            cout << "Invalid option! Please try again.\n";
            return;
    }
}


void transportationOptions() {
    int transportChoice;

    cout << "\nTransportation Options:\n";
    cout << "1. Train\n";
    cout << "2. Bus\n";
    cout << "3. Flight\n";
    cout << "4. Cab\n";
    cout << "Enter your choice (1-4): ";
    cin >> transportChoice;

    switch (transportChoice) {
        case 1: {
            int stationChoice;
            cout << "\nYou selected Train.\n";
            cout << "Enter your station\n 1 for Madgaon\n 2 for Vasco da Gama \n 3 for Thivim\n 4 for Dudhsagar \n 5 for Canacona \n 6 for Majorda Junction \n 7 for Balli:\n\n";
            cin >> stationChoice;

            switch (stationChoice) {
                case 1:
                    cout << "\nTrain Timings from Madgaon to Other Locations:\n";
                    cout << "1. Train 101 - Madgaon to Vasco da Gama - 06:00 AM\n";
                    cout << "2. Train 102 - Madgaon to Thivim - 07:30 AM\n";
                    cout << "3. Train 103 - Madgaon to Dudhsagar - 09:00 AM\n";
                    cout << "4. Train 104 - Madgaon to Canacona - 10:30 AM\n";
                    cout << "5. Train 105 - Madgaon to Majorda Junction - 12:00 PM\n";
                    cout << "6. Train 106 - Madgaon to Balli - 01:30 PM\n";
                    cout << "7. Train 107 - Madgaon to Vasco da Gama - 03:00 PM\n";
                    cout << "8. Train 108 - Madgaon to Thivim - 04:30 PM\n";
                    cout << "9. Train 109 - Madgaon to Dudhsagar - 06:00 PM\n";
                    cout << "10. Train 110 - Madgaon to Canacona - 07:30 PM\n\n";
                    break;
                case 2:
                    cout << "\nTrain Timings from Vasco da Gama to Other Locations:\n";
                    cout << "1. Train 201 - Vasco da Gama to Madgaon - 06:00 AM\n";
                    cout << "2. Train 202 - Vasco da Gama to Thivim - 07:30 AM\n";
                    cout << "3. Train 203 - Vasco da Gama to Dudhsagar - 09:00 AM\n";
                    cout << "4. Train 204 - Vasco da Gama to Canacona - 10:30 AM\n";
                    cout << "5. Train 205 - Vasco da Gama to Majorda Junction - 12:00 PM\n";
                    cout << "6. Train 206 - Vasco da Gama to Balli - 01:30 PM\n";
                    cout << "7. Train 207 - Vasco da Gama to Madgaon - 03:00 PM\n";
                    cout << "8. Train 208 - Vasco da Gama to Thivim - 04:30 PM\n";
                    cout << "9. Train 209 - Vasco da Gama to Dudhsagar - 06:00 PM\n";
                    cout << "10. Train 210 - Vasco da Gama to Canacona - 07:30 PM\n\n";
                    break;
                case 3:
                    cout << "\nTrain Timings from Thivim to Other Locations:\n";
                    cout << "1. Train 301 - Thivim to Madgaon - 06:00 AM\n";
                    cout << "2. Train 302 - Thivim to Vasco da Gama - 07:30 AM\n";
                    cout << "3. Train 303 - Thivim to Dudhsagar - 09:00 AM\n";
                    cout << "4. Train 304 - Thivim to Canacona - 10:30 AM\n";
                    cout << "5. Train 305 - Thivim to Majorda Junction - 12:00 PM\n";
                    cout << "6. Train 306 - Thivim to Balli - 01:30 PM\n";
                    cout << "7. Train 307 - Thivim to Madgaon - 03:00 PM\n";
                    cout << "8. Train 308 - Thivim to Vasco da Gama - 04:30 PM\n";
                    cout << "9. Train 309 - Thivim to Dudhsagar - 06:00 PM\n";
                    cout << "10. Train 310 - Thivim to Canacona - 07:30 PM\n\n";
                    break;
                case 4:
                    cout << "\nTrain Timings from Dudhsagar to Other Locations:\n";
                    cout << "1. Train 401 - Dudhsagar to Madgaon - 06:00 AM\n";
                    cout << "2. Train 402 - Dudhsagar to Vasco da Gama - 07:30 AM\n";
                    cout << "3. Train 403 - Dudhsagar to Thivim - 09:00 AM\n";
                    cout << "4. Train 404 - Dudhsagar to Canacona - 10:30 AM\n";
                    cout << "5. Train 405 - Dudhsagar to Majorda Junction - 12:00 PM\n";
                    cout << "6. Train 406 - Dudhsagar to Balli - 01:30 PM\n";
                    cout << "7. Train 407 - Dudhsagar to Madgaon - 03:00 PM\n";
                    cout << "8. Train 408 - Dudhsagar to Vasco da Gama - 04:30 PM\n";
                    cout << "9. Train 409 - Dudhsagar to Thivim - 06:00 PM\n";
                    cout << "10. Train 410 - Dudhsagar to Canacona - 07:30 PM\n\n";
                    break;
                case 5:
                    cout << "\nTrain Timings from Canacona to Other Locations:\n";
                    cout << "1. Train 501 - Canacona to Madgaon - 06:00 AM\n";
                    cout << "2. Train 502 - Canacona to Vasco da Gama - 07:30 AM\n";
                    cout << "3. Train 503 - Canacona to Thivim - 09:00 AM\n";
                    cout << "4. Train 504 - Canacona to Dudhsagar - 10:30 AM\n";
                    cout << "5. Train 505 - Canacona to Majorda Junction - 12:00 PM\n";
                    cout << "6. Train 506 - Canacona to Balli - 01:30 PM\n";
                    cout << "7. Train 507 - Canacona to Madgaon - 03:00 PM\n";
                    cout << "8. Train 508 - Canacona to Vasco da Gama - 04:30 PM\n";
                    cout << "9. Train 509 - Canacona to Thivim - 06:00 PM\n";
                    cout << "10. Train 510 - Canacona to Dudhsagar - 07:30 PM\n\n";
                    break;
                case 6:
                    cout << "\nTrain Timings from Majorda Junction to Other Locations:\n";
                    cout << "1. Train 601 - Majorda Junction to Madgaon - 06:00 AM\n";
                    cout << "2. Train 602 - Majorda Junction to Vasco da Gama - 07:30 AM\n";
                    cout << "3. Train 603 - Majorda Junction to Thivim - 09:00 AM\n";
                    cout << "4. Train 604 - Majorda Junction to Dudhsagar - 10:30 AM\n";
                    cout << "5. Train 605 - Majorda Junction to Canacona - 12:00 PM\n";
                    cout << "6. Train 606 - Majorda Junction to Balli - 01:30 PM\n";
                    cout << "7. Train 607 - Majorda Junction to Madgaon - 03:00 PM\n";
                    cout << "8. Train 608 - Majorda Junction to Vasco da Gama - 04:30 PM\n";
                    cout << "9. Train 609 - Majorda Junction to Thivim - 06:00 PM\n";
                    cout << "10. Train 610 - Majorda Junction to Dudhsagar - 07:30 PM\n\n";
                    break;
                case 7:
                    cout << "\nTrain Timings from Balli to Other Locations:\n";
                    cout << "1. Train 701 - Balli to Madgaon - 06:00 AM\n";
                    cout << "2. Train 702 - Balli to Vasco da Gama - 07:30 AM\n";
                    cout << "3. Train 703 - Balli to Thivim - 09:00 AM\n";
                    cout << "4. Train 704 - Balli to Dudhsagar - 10:30 AM\n";
                    cout << "5. Train 705 - Balli to Canacona - 12:00 PM\n";
                    cout << "6. Train 706 - Balli to Majorda Junction - 01:30 PM\n";
                    cout << "7. Train 707 - Balli to Madgaon - 03:00 PM\n";
                    cout << "8. Train 708 - Balli to Vasco da Gama - 04:30 PM\n";
                    cout << "9. Train 709 - Balli to Thivim - 06:00 PM\n";
                    cout << "10. Train 710 - Balli to Dudhsagar - 07:30 PM\n\n";
                    break;
                default:
                    cout << "Invalid station selected.\n\n";
                    break;
            }
            break;
        }
        case 2: {
            cout << "\nBus Timings:\n";
            cout << "1. Bus 201 - Bluesand to Vasco da Gama - 06:00 AM\n";
            cout << "2. Bus 202 - Bluesand to Thivim - 08:00 AM\n";
            cout << "3. Bus 203 - Bluesand to Dudhsagar - 10:30 AM\n";
            cout << "4. Bus 204 - Bluesand to Canacona - 12:00 PM\n";
            cout << "5. Bus 205 - Bluesand to Majorda Junction - 02:15 PM\n";
            cout << "6. Bus 206 - Bluesand to Balli - 04:30 PM\n";
            cout << "7. Bus 207 - Bluesand to Thivim - 06:30 PM\n";
            cout << "8. Bus 208 - Bluesand to Vasco da Gama - 08:30 PM\n";
            cout << "9. Bus 209 - Bluesand to Dudhsagar - 10:30 PM\n";
            cout << "10. Bus 210 - Bluesand to Canacona - 12:30 AM\n";
            cout << "\nBus Service Helpline: 1800-234-8765\n\n";

            break;
        }
        case 3: {
            cout << "\nYou selected Flight.\n";
            cout << "\nFlight Options from Bluesand Airport:\n";
            cout << "1. Flight 101 - Domestic - Bluesand to Mumbai - 06:00 AM\n";
            cout << "2. Flight 102 - Domestic - Bluesand to Delhi - 08:30 AM\n";
            cout << "3. Flight 103 - International - Bluesand to Dubai - 11:00 AM\n";
            cout << "4. Flight 104 - Domestic - Bluesand to Bangalore - 01:30 PM\n";
            cout << "5. Flight 105 - Domestic - Bluesand to Goa - 03:45 PM\n";
            cout << "6. Flight 106 - International - Bluesand to Singapore - 06:00 PM\n";
            cout << "7. Flight 107 - Domestic - Bluesand to Pune - 08:30 PM\n";
            cout << "8. Flight 108 - International - Bluesand to London - 11:30 PM\n";
            cout << "\nFlight Service Helpline: 1800-876-0909\n\n";
            break;
            break;
        }
        case 4: {
            cout << "\nYou selected Cab.\n";
            cout << "\nHere are some popular cab services for booking a ride:\n";
            cout << "1. Ola Cabs - Visit: https://www.olacabs.com\n";
            cout << "2. Uber - Visit: https://www.uber.com\n";
            cout << "3. Meru Cabs - Visit: https://www.merucabs.com\n";
            cout << "4. Rapido - Visit: https://www.rapido.bike\n";
            cout << "5. Lyft  - Visit: https://www.lyft.com\n";
            cout << "6. Zoomcar (self-drive options) - Visit: https://www.zoomcar.com\n\n";

            cout << "7. City Cabs - 24/7 service\n";
            cout << "8. Fast Ride Cabs - Quick booking\n";
            cout << "9. GoGreen Cabs - Eco-friendly cabs\n";
            cout << "10. Luxury Ride - Premium ride options\n";
            cout << "11. Budget Cabs - Affordable options\n";
            cout << "\nYou can book a cab by calling or using the mobile app for any of the services above.\n\n";
            break;
        }
        default:
            cout << "Invalid choice! Please select a valid option (1-4).\n";
            break;
    }
}
int cost[100][100], n;

int getMin(int dist[], bool visited[]) {
    int key = 0;
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            key = i;
        }
    }
    return key;
}

void display(int dist[], int par[], int src) {
    cout << "\nNode\t\tCost\t\tPath" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << "\t\t" << dist[i] << "\t\t";

        // Build the path
        vector<int> path;
        int parnode = i;
        while (parnode != -1) {
            path.push_back(parnode);
            parnode = par[parnode];
        }

        // Reverse and print the path
        reverse(path.begin(), path.end());
        for (size_t j = 0; j < path.size(); j++) {
            cout << path[j];
            if (j < path.size() - 1) cout << " -> ";
        }
        cout << endl;
    }
}

void dijkstra(int src) {
    int par[100], dist[100];
    bool visited[100] = {0};
    fill(dist, dist + n, INT_MAX);

    dist[src] = 0;
    par[src] = -1;

    for (int g = 0; g < n - 1; g++) {
        int u = getMin(dist, visited);
        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && cost[u][v] != 9999 && dist[u] != INT_MAX &&
                (dist[u] + cost[u][v] < dist[v])) {
                par[v] = u;
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }

    display(dist, par, src);
}

void preferencesAndPlan() {
    cout << " 0 -> Water sports\n 1 -> Amusement park\n 2 -> Trekking\n 3 -> Bunjee jumping\n 4 -> Night Market\n 5 -> Cultural show\n";

    n = 5;

    // Initialize cost matrix
    fill(&cost[0][0], &cost[0][0] + sizeof(cost) / sizeof(cost[0][0]), 9999);

    cost[0][1] = 10;
    cost[1][0] = 10;
    cost[1][2] = 5;
    cost[2][1] = 5;
    cost[2][3] = 20;
    cost[3][2] = 20;
    cost[3][4] = 10;
    cost[4][3] = 10;
    cost[2][4] = 15;
    cost[4][2] = 15;
    cost[2][0] = 5;
    cost[0][2] = 5;

    int src;
    cout << "\nEnter source: ";
    cin >> src;

    dijkstra(src);
}

struct Bus {
    int number;
    int time; // Assuming time is in minutes from midnight for simplicity
};
void insertBus(vector<Bus> &buses, Bus newBus, int position) {
    buses.insert(buses.begin() + position - 1, newBus);
}
Bus findNearestBus(const vector<Bus> &buses, int userTime) {
    int minDiff = INT_MAX;
    Bus nearestBus;

    for (const auto &bus : buses) {
        int diff = abs(bus.time - userTime);
        if (diff < minDiff) {
            minDiff = diff;
            nearestBus = bus;
        }
    }
    return nearestBus;
}
void travellingOptionsWithinCity() {
    // Static bus data
    vector<Bus> buses = {
        {101, 540}, // 9:00 AM (in minutes from midnight)
        {102, 600}, // 10:00 AM
        {103, 660}, // 11:00 AM
        {104, 720}, // 12:00 PM
        {105, 780},  // 1:00 PM
        {106,810}, //1:30
        {107,870}, //2:30
        {108,990} //4:30
    };

    // Insert a new bus (e.g., at position 3)
    Bus newBus = {106, 630}; // 10:30 AM
    int position = 3;
    insertBus(buses, newBus, position);

    // Display the updated bus schedule
    cout << "Updated Bus Schedule:\n";
    for (const auto &bus : buses) {
        cout << "Bus Number: " << bus.number << ", Time: " << bus.time / 60 << ":" << (bus.time % 60 < 10 ? "0" : "") << bus.time % 60 << endl;
    }

    // Get user input for their desired time
    int userHour, userMinute;
    cout << "\nEnter your desired time (HH MM): ";
    cin >> userHour >> userMinute;

    int userTime = userHour * 60 + userMinute;

    // Find the nearest bus
    Bus nearestBus = findNearestBus(buses, userTime);

    // Display the nearest bus
    cout << "The nearest bus is Bus Number " << nearestBus.number << " at "
         << nearestBus.time / 60 << ":" << (nearestBus.time % 60 < 10 ? "0" : "") << nearestBus.time % 60 << endl;
}







class UnionFind {
private:
    std::vector<int> parent;
    std::vector<int> rank;

public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

    bool isConnected(int x, int y) {
        return find(x) == find(y);
    }
};

void clusterUsers(const std::vector<std::pair<int, int>>& similarRoutes, int userCount) {
    UnionFind uf(userCount);

    // Performing union operations for each pair of users with similar routes
    for (int i = 0; i < userCount; ++i) {
        for (int j = i + 1; j < userCount; ++j) {
            if (similarRoutes[i] == similarRoutes[j]) {
                uf.unionSets(i, j); // Union the users who share the same route
            }
        }
    }

    // Grouping users based on their route similarity
    std::unordered_map<int, std::vector<int>> clusters;
    for (int i = 0; i < userCount; ++i) {
        int root = uf.find(i);
        clusters[root].push_back(i);
    }

    // Output the carpool groups
    std::cout << "Users who can carpool together (based on similar routes):\n";
    for (const auto& cluster : clusters) {
        if (cluster.second.size() > 1) {
            std::cout << "Users in the same carpool group: ";
            for (int user : cluster.second) {
                std::cout << "User" << user + 1 << " ";
            }
            std::cout << "\n";
        }
    }

    // Output users who don't have any carpool group
    for (int i = 0; i < userCount; ++i) {
        bool isGrouped = false;
        for (const auto& cluster : clusters) {
            if (std::find(cluster.second.begin(), cluster.second.end(), i) != cluster.second.end()) {
                isGrouped = true;
                break;
            }
        }

        if (!isGrouped) {
            std::cout << "User" << i + 1 << " has to go alone.\n";
        }
    }
}

void carpool() {
    int userCount;
    std::cout << "Enter the number of users: ";
    std::cin >> userCount;
    std::cin.ignore(); // Clear the input buffer

    std::vector<std::pair<int, int>> similarRoutes(userCount);
    std::cout << "Enter the starting location and destination of each user (format: start destination):\n";
    for (int i = 0; i < userCount; ++i) {
        std::string input;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        int start, destination;
        iss >> start >> destination;
        similarRoutes[i] = {start, destination};
        std::cout << "Input received for user " << i + 1 << ": " << start << " " << destination << "\n";
    }

    std::cout << "Processing clusters...\n";
    clusterUsers(similarRoutes, userCount);
    std::cout << "Clusters processed.\n";
}



