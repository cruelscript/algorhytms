# Algorithms

- ```ci_string.cpp``` - case insensitive string class which is identical to the ```std::string```
- ```fixed_vector.cpp``` - implementation of a copy assignment and a copy construction in a vector with fixed length. 
- ```flagnth.hpp``` - functor which returns true if being called n times
- ```counted_ptr.hpp``` - smart pointer, if created a copy of an object it will be pointed to the same object, destructor deletes object if being called for the last copy. 
- ```constraints_classes.cpp``` - Constraints class which compiles only if T has function T* Clone() const
- ```majority.cpp``` - an algorithm which checks if the desired element is the majority element in array
- ```median.cpp``` - an algorithm which finds a median in an array

### Graphs ###

- ```DFS.cpp``` - all basic algorithms with graphs (An algorithm which finds all SCC in graph, and finds it metagraph)
- ```bellman-ford.cpp``` - a Bellman-Ford algorithm
- ```directed_graph.hpp/cpp``` - A class of a DG of integer numbers
- ```HornSAT.cpp``` - an algorithm which checks if the horn formula is satisfiable for linear time

# Алгоритмы #


- ```ci_string.cpp``` - Строка, нечувствительная к регистру, полностью повторяющая функции ```std::string```
- ```fixed_vector.cpp``` - Реализация простейшего контейнера (вектора фиксированный длины), особый акцент на конструктор копирования и присваивания
- ```flagnth.hpp``` - Функтор, который возвращает истину, если был вызван n раз
- ```counted_ptr.hpp``` - Умный указатель, создание новой копии будет указывать на изначальный объект, вызов деструктора для последней копии удаляет сам объект
- ```constraints_classes.cpp``` - Класс ограничений, который сократит время компиляции программы. Программы скомпилируется, если унаследованный класс будет иметь определенный метод
- ```majority.cpp``` - Алгоритм, который проверяет является ли заданное число большинством в последовательности
- ```median.cpp``` - Алгоритм, который ищет медиану заданной последовательности

### Графы ###

- ```DFS.cpp``` - Все базовые алгоритмы с графами (Главный алгоритм: поиск всех ССК и построение на основе этих ССК метаграфа заданного графа)
- ```bellman-ford.cpp``` - Алгоритм Беллмана-Форда
- ```directed_graph.hpp/cpp``` - Класс ориентированного графа, хранящего значения целых чисел
- ```HornSAT.cpp``` - Алгоритм, который проверяет выполнимост Хорновской формулы
