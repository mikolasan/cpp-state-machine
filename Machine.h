// machine.h
#pragma once

#include "MachineStates.h"
#include <memory>

class AbstractState;

class Machine {
  friend class AbstractState;

public:
  Machine(unsigned int _stock);
  ~Machine();
  void sell(unsigned int quantity);
  void refill(unsigned int quantity);
  void damage();
  void fix();
  unsigned int getStock() const;

private:
  unsigned int stock;
  std::unique_ptr<AbstractState> state;
};
