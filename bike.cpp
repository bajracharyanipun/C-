#include <iostream>
#include <string>

class Bike {
private:
    std::string manufacturer_;
    float cubic_capacity_;
    bool engine_on_;
    float speed_;

public:
    Bike(std::string maker, float capacity, bool started = false)
        : manufacturer_(std::move(maker)),
          cubic_capacity_(capacity),
          engine_on_(started),
          speed_(started ? 10.0f : 0.0f)
    {
    }

    const std::string& manufacturer() const noexcept {
        return manufacturer_;
    }

    float cubicCapacity() const noexcept {
        return cubic_capacity_;
    }

    bool isEngineOn() const noexcept {
        return engine_on_;
    }

    float speed() const noexcept {
        return speed_;
    }

    void start() {
        if (engine_on_) {
            std::cout << "Bike is already started." << std::endl;
            return;
        }

        engine_on_ = true;
        speed_ = 10.0f;
        std::cout << "Bike started." << std::endl;
    }

    void stop() {
        if (!engine_on_) {
            std::cout << "Bike is already stopped." << std::endl;
            return;
        }

        engine_on_ = false;
        speed_ = 0.0f;
        std::cout << "Bike stopped." << std::endl;
    }

    void accelerate(float amount) {
        if (!engine_on_) {
            std::cout << "Cannot accelerate. Start the bike first." << std::endl;
            return;
        }

        if (amount <= 0.0f) {
            std::cout << "Acceleration amount must be positive." << std::endl;
            return;
        }

        speed_ += amount;
        std::cout << "Bike accelerated by " << amount << " km/h." << std::endl;
    }
};

std::ostream& operator<<(std::ostream& os, const Bike& bike) {
    os << "Manufacturer: " << bike.manufacturer() << "\n"
       << "Cubic Capacity: " << bike.cubicCapacity() << " cc\n"
       << "Engine Status: " << std::boolalpha << bike.isEngineOn() << "\n"
       << "Current Speed: " << bike.speed() << " km/h\n";
    return os;
}

int main() {
    Bike bike1("Honda", 150.0f);

    std::cout << bike1 << std::endl;
    bike1.start();
    std::cout << bike1 << std::endl;
    bike1.accelerate(20.0f);
    std::cout << "Speed after acceleration: " << bike1.speed() << " km/h" << std::endl;
    bike1.stop();
    std::cout << bike1 << std::endl;

    return 0;
}
