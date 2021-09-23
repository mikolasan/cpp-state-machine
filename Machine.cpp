// machine.cpp
#include "Machine.h"
#include "MachineStates.h"

Machine::Machine(unsigned int _stock) : stock(_stock) {
  state = stock > 0 ? std::unique_ptr<AbstractState>{std::make_unique<Normal>()}
                    : std::make_unique<SoldOut>();
}

void Machine::sell(unsigned int quantity) { state->sell(*this, quantity); }

void Machine::refill(unsigned int quantity) { state->refill(*this, quantity); }

void Machine::damage() { state->damage(*this); }

void Machine::fix() { state->fix(*this); }

unsigned int Machine::getStock() const { return stock; }
