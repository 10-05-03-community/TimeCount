#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono> // для функций из std::chrono
#include <ratio> // для правильной работы с chrono::duration
 
class Timer {
private:

  // используем высокоточные часы
	using clock_t = std::chrono::high_resolution_clock;
  
  // хотим получать дробные секунды
	using second_t = std::chrono::duration<double, std::ratio<1>>;

  // время начала отсчёта
	std::chrono::time_point<clock_t> started_time_;

public:

  // конструктор по-умолчанию, инициализация начала отсчёта
	Timer();
  
  // сброс, установление нового начала отсчёта
	void reset();

  // получение разницы между текущим моментом и началом отчёта
	double elapsed() const;
};

#endif //TIMER_HPP