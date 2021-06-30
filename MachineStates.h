// MachineStates.h
#pragma once

#include "Machine.h"

class Machine;

class AbstractState {
public:
  virtual void sell(Machine &machine, unsigned int quantity) = 0;
  virtual void refill(Machine &machine, unsigned int quantity) = 0;
  virtual void damage(Machine &machine);
  virtual void fix(Machine &machine);
  virtual ~AbstractState() = default;

protected:
  void setState(Machine &machine, AbstractState *st);
  void updateStock(Machine &machine, unsigned int quantity);
};


class Normal : public AbstractState {
public:
  virtual void sell(Machine &machine, unsigned int quantity) override;
  virtual void refill(Machine &machine, unsigned int quantity) override;
  virtual void fix(Machine &machine) override;
};

class SoldOut : public AbstractState {
public:
  virtual void sell(Machine &machine, unsigned int quantity) override;
  virtual void refill(Machine &machine, unsigned int quantity) override;
  virtual void fix(Machine &machine) override;
};

class Broken : public AbstractState {
public:
  virtual void sell(Machine &machine, unsigned int quantity) override;
  virtual void refill(Machine &machine, unsigned int quantity) override;
};
