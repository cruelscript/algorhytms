# Algorithms

- [ci_string](./ci_string.cpp) - case insensitive string class which is identical to the ```std::string```
- [Fixed vector](./fixed_vector.cpp) - implementation of a copy assignment and a copy construction in a vector with fixed length. 
- [Flagnth](./flagnth.hpp) - functor which returns true if being called n times
- [counted_ptr](./counted_ptr.hpp) - smart pointer, if created a copy of an object it will be pointed to the same object, destructor deletes object if being called for the last copy. 
- [Constraints Class](./constraints_classes.cpp) - Constraints class which compiles only if T has function T* Clone() const
- [Majorant](./majority.cpp) - an algorithm which checks if the desired element is the majority element in array
- [Median](./median.cpp) - an algorithm which finds a median in an array
- [Network simulation](./packages.java) - a simulation of a network packet processing
- [Slide max](./slide_max.cpp) - A function which finds a max value in slide brackets
- [Tables Joint](./tables_joint.py) - an algorithm of joining two tables
- [Pattern](./pattern.py) - find a pattern in a text

# Алгоритмы #

- [ci_string](./ci_string.cpp) - Строка, нечувствительная к регистру, полностью повторяющая функции ```std::string```
- [Fixed vector](./fixed_vector.cpp) - Реализация простейшего контейнера (вектора фиксированный длины), особый акцент на конструктор копирования и присваивания
- [Flagnth](./flagnth.hpp) - Функтор, который возвращает истину, если был вызван n раз
- [counted_ptr](./counted_ptr.hpp) - Умный указатель, создание новой копии будет указывать на изначальный объект, вызов деструктора для последней копии удаляет сам объект
- [Constraints Class](./constraints_classes.cpp) - Класс ограничений, который сократит время компиляции программы. Программы скомпилируется, если унаследованный класс будет иметь определенный метод
- [Majorant](./majority.cpp) - Алгоритм, который проверяет является ли заданное число большинством в последовательности
- [Median](./median.cpp) - Алгоритм, который ищет медиану заданной последовательности
- [Network simulation](./packages.java) - симуляция обработки сетевых пакетов
- [Slide max](./slide_max.cpp) - максимум в скользящем окне
- [Tables Joint](./tables_joint.py) - объединение таблиц
- [Pattern](./pattern.py) - поиск образца в тексте
