# Лабораторная работа № 5 «Работа с графами»
## Вариант №132
### Основные свойства графа
Неориентированный взвешенный граф.
Веса рёбер графа задаются пользователем и не могут быть отрицательными.
### Способ представления графа
В виде списков смежности.
### Операции, поддерживаемые графом
#### Поиск пути между двумя заданными вершинами
Поиск некоторой заданной вершины из другой заданной вершины методом поиска в ширину (если пути между вершинами нет, необходимо вернуть ошибку).
#### Поиск кратчайшего пути между двумя заданными вершинами
Поиск кратчайшего пути между двумя заданными вершинами графа, использующий алгоритм Беллмана-Форда.
#### Особая операция
Поиск минимального остовного дерева, результатом выполнения операции должен являться новый граф.
#### Кроме того, должны быть реализованы следующие общие операции над графом:
1. добавление новой вершины;
2. добавление нового ребра между двумя заданными вершинами;
3. удаление заданной вершины;
4. удаление заданного ребра;
5. вывод графа в виде матрицы или списков смежности.
