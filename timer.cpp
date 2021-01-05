#include "timer.hpp"

Timer::Timer() : started_time_(clock_t::now()) {}
	
void Timer::reset() {
  started_time_ = clock_t::now();
}

double Timer::elapsed() const {
  return std::chrono::duration_cast<second_t>(clock_t::now() - started_time_).count();
}