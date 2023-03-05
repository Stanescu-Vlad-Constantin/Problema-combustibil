#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

class Car {
    protected:
        string mType;
        float mConsume;

    public:
        virtual void print() = 0;
        
        virtual void calculateConsume() = 0;

        float getConsume() {
            return mConsume;
        }
};

class Gas : public Car {
    private:
        float mGas;

    public:
        Gas() {
            this->mGas = 0;
            this->mConsume = 0;
            this->mType = "nedefinit";
        }

        Gas(float mGas) {
            this->mGas = mGas;
            mType = "benzina";
            calculateConsume();
        }

        void print() {
            printf("%s %.2f\n", mType.c_str(), mGas);
        }

        void calculateConsume() {
            this->mConsume = mGas * 5.8;
        }
};

class Hybrid : public Car {
    private:
        float mGas;
        float mBattery;

    public:
        Hybrid() {
            this->mGas = 0;
            this->mBattery = 0;
            this->mConsume = 0;
            this->mType = "nedefinit";
        }

        Hybrid(float mGas, float mBattery) {
            this->mGas = mGas;
            this->mBattery = mBattery;
            mType = "hibrid";
            calculateConsume();
        }

        void print() {
            printf("%s %.2f %.2f\n", mType.c_str(), mGas, mBattery);
        }

        void calculateConsume() {
            this->mConsume = mGas * 5.8 + mBattery * 1;
        }
};

class Diesel : public Car {
    private:
        float mDiesel;

    public:
        Diesel() {
            this->mDiesel = 0;
            this->mConsume = 0;
            this->mType = "nedefinit";
        }

        Diesel(float mDiesel) {
            this->mDiesel = mDiesel;
            mType = "diesel";
            calculateConsume();
        }

        void print() {
            printf("%s %.2f\n", mType.c_str(), mDiesel);
        }

        void calculateConsume() {
            this->mConsume = mDiesel * 6;
        }
};

int main() {
    int n;
    vector<Car*> cars;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string carType;
        float mGas, mDiesel, mBattery;
        Car* newCar;
        cin >> carType;
        if (carType == "benzina") {
            cin >> mGas;

            newCar = new Gas(mGas);
            cars.push_back(newCar);
        } else if (carType == "hibrid") {
            cin >> mGas >> mBattery;

            newCar = new Hybrid(mGas, mBattery);
            cars.push_back(newCar);
        } else if (carType == "diesel") {
            cin >> mDiesel;

            newCar = new Diesel(mDiesel);
            cars.push_back(newCar);
        }
    }

    sort(cars.begin(), cars.end(), [ ](Car* first, Car* second )
    {
        return first->getConsume() < second->getConsume();
    });

    for (int i = 0; i < n; i++) {
        cars[i]->print();
    }

    return 0;
}